#include <WiFi.h>
#include <WiFiUdp.h>
#include <AccelAndGyro.h>
#include <myosa.h>
MYOSA myosa;
AccelAndGyro sensor;

const char* ssid = "ESP32-WIFI";
const char* password = "12345678";
const char* laptopIP = "192.168.29.123";
const int port = 8888;
WiFiUDP udp;
String lastGesture = "";
unsigned long lastGestureTime = 0;
const unsigned long Gesturecooltime = 120;
void sendGesture(String gesture);

void setup() {
  Serial.begin(115200);
  Wire.begin();
  myosa.begin();
  myosa.Lpg.enableGestureSensor(ENABLE);
  Serial.println("Ready");

  if (sensor.begin()) {
    Serial.println(" MPU is callibrating");
    delay(15000);
    Serial.println(" MPU Ready");
  }
  WiFi.begin(ssid, password);
  Serial.print("Connecting toWiFi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\n WiFi Connected");
  Serial.print("ESP32 IP: ");
  Serial.println(WiFi.localIP());
  udp.begin(port);
  Serial.println(" Gesture system is ready");
}

void loop() {
  unsigned long now = millis();
  static unsigned long myosaLastSeen = 0;
  const unsigned long Myosalockingtime = 300; 

  char* myosaGesture = myosa.Lpg.getGesture(false);
  if (myosaGesture && strcmp(myosaGesture, "NONE") != 0) {
    String g = String(myosaGesture);

    if (now - lastGestureTime > Gesturecooltime) {
      Serial.println("MYOSA " + g);
      sendGesture(g);
      lastGesture = g;
      lastGestureTime = now;
      myosaLastSeen = now; 
    }
    return; 
  }

  if (now - myosaLastSeen < Myosalockingtime) {
    return;
  }

  static unsigned long lastMPUTime = 0;
  if (now - lastMPUTime > 100 && sensor.ping()) {
    lastMPUTime = now;
    float ax = sensor.getAccelX();
    float ay = sensor.getAccelY();
    String g = "";
    if (ax <= -800) g = "FRONT";
    else if (ax >= 800) g = "BACK";
    else if (ay <= -800) g = "slidestart";
    else if (ay >= 800) g = "slideend";

    if (g != "" && now - lastGestureTime > Gesturecooltime) {
      Serial.println("MPU → " + g);
      sendGesture(g);
      lastGesture = g;
      lastGestureTime = now;
    }
    if (abs(ax) < 200 && abs(ay) < 200) {
      lastGesture = "";
    }
  }
 }

void sendGesture(String gesture) {
  udp.beginPacket(laptopIP, port);
  udp.print(gesture);
  udp.endPacket();
}
