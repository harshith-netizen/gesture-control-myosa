---
publishDate: xxxx-xx-xx
title: Wireless Presentation Controller using Gestures
excerpt: A MYOSA-based wireless presentation controller enabling real-time slide navigation and media control using Wi-Fi based hand gestures.
image: myosa-cover.jpg
tags:
  - myosa
  - wi-fi-communication
  - gesture-control
---

>“Real-time, MYOSA powered hand gesture interface for wireless presentation control.”

---

## Acknowledgements
We would like to thank the MYOSA Innovation Challenge organizers for providing the MYOSA development platform and the opportunity to explore gesture-based human–machine interaction.  
We also acknowledge the guidance and support provided by our faculty mentor **Dr.Supraja Reddy** throughout the project.  
Special thanks to **Prof. Satyanarayana Katukojwalawala** for his guidance and support throughout this project.  

---

## Overview
**The Wireless Presentation Controller using MYOSA** is a gesture-based, contactless system designed to control presentations without relying on physical input devices such as keyboards or clickers. The project enables presenters to navigate slides using **left**, **right**, **up**, and **down** hand gestures, as well as perform **zoom-in** and **zoom-out** operations, allowing more natural and intuitive interaction with presentation content.

The system operates using the MYOSA board as the central processing and control unit. A gesture sensor detects directional hand movements, while motion data from the accelerometer and gyroscope enhances accuracy and minimizes false detections. These sensor inputs are processed in real time on the MYOSA board, where each recognized gesture is mapped to a specific presentation command such as slide navigation or zoom control. The commands are transmitted wirelessly to a laptop or PC using **Wi-Fi**, ensuring stable and low-latency communication. An OLED display provides real-time feedback by showing the connection status, recognized gestures, and the active control mode.

The use of **Wi-Fi communication** offers significant advantages over Bluetooth-based systems. Wi-Fi provides **better connectivity**, **longer operational range**, and **more reliable data transmission**, especially in large rooms such as classrooms, auditoriums, and conference halls. In addition, implementing **encryption and secure communication** is easier and more robust over Wi-Fi, making the system safer for professional and institutional environments.

This project is intended for students, educators, professionals, and presenters who deliver presentations in classrooms, seminars, conferences, and meetings. It addresses the limitations of traditional presentation controllers that restrict mobility, require physical interaction, and offer limited control functionality. By leveraging the MYOSA platform and Wi-Fi-based communication, the system provides a portable, secure, and customizable solution that demonstrates effective human–machine interaction through advanced gesture-based control.

* **Slide Right Gesture** – Moves to the **next slide**  
* **Slide Left Gesture** – Moves to the **previous slide**  
* **Slide Up Gesture** – Scrolls or navigates **upward** within the slide or content  
* **Slide Down Gesture** – Scrolls or navigates **downward** within the slide or content  

* **Zoom-In Gesture** – Zooms into slide content for detailed viewing  
* **Zoom-Out Gesture** – Zooms out to the normal slide view  

* **Post-Zoom Navigation** –  
  After zooming in, the slide content can be moved **left**, **right**, **up**, and **down** using corresponding hand gestures, allowing the presenter to focus on specific regions of the slide.

* **Presentation Mode Gesture** – Enters **presentation (slideshow) mode** directly using a gesture, eliminating the need for manual keyboard interaction.

* **Exit / ESC Mode Gesture** – Exits presentation mode using a gesture equivalent to the **ESC** key, enabling complete hands-free control.


**Key features:**  
 **Real-Time Gesture Recognition**  
- **Wi-Fi Based Wireless Control**  
- **Touch-Free Human–Computer Interaction**  
- **Lightweight & Scalable Embedded Design**  
---

## Demo / Examples

### **Images**
<p align="center">
  <img src="/gesture-demo.jpg" width="800"><br/>
  <i>Hand gesture detection using MYOSA sensor</i>
</p>

### **Videos**
<video controls width="100%">
  <source src="/gesture-demo.mp4" type="video/mp4">
</video>

---

## Key Features

### Real-Time Gesture Recognition  
The system accurately detects intuitive hand gestures using the MYOSA gesture sensor.  
These gestures are processed instantly, enabling smooth and responsive control.

### Wi-Fi–Based Wireless Communication  
Gesture commands are transmitted over Wi-Fi, eliminating the need for physical remotes.  
This ensures stable, low-latency communication during live presentations.

### Touch-Free Presentation Control  
Users can navigate slides and control media without touching any device.  
This improves hygiene, presenter mobility, and overall user experience.

### Optimized Embedded System Design  
Unused sensors and blocking delays are disabled to enhance performance.  
This results in faster response, better reliability, and efficient power usage.

---
## Usage Instructions

Follow the steps below to use the MYOSA Gesture-Based Wireless Presentation Controller.

### 1. Hardware Setup
- Power on the **MYOSA motherboard** using a USB cable or battery.
- Ensure the MYOSA gesture sensor is enabled and properly initialized.

### 2. Network Configuration
- Connect the MYOSA motherboard to the same **Wi-Fi network** as the target device (laptop/PC).
- Verify successful Wi-Fi connection through OLED display.
---
### 3. Upload Firmware
Follow the steps below to quickly set up and use the software component of the Wireless Presentation Controller on a laptop or PC.

#### 3.1. Install Requirements
Open **Command Prompt** (Windows) or **Terminal** (Linux/macOS) and run the following commands to install the required Python packages:

```plaintext
pip install pyautogui
pip install socket
```
These packages are used for simulating keyboard actions and enabling basic network communication over Wi-Fi.
#### 3.2.Run the Receiver Script
Navigate to the folder containing the project files and execute the receiver script:
```plaintext
python gesture_receiver.py
```
### 4.Use During Presentations

-Open PowerPoint or any compatible presentation application.  

-Keep gesture_receiver.py running in the background.

-Use the gesture device to: 

      -Move to the next or previous slide.
      -Navigate up and down within slide content.  
      -Enter presentation mode (F5).  
      -Exit presentation using ESC gesture.  
      -Perform zoom in and zoom out operations.  
      -Navigate left, right, up, and down within zoomed slide content.  
---
## Tech Stack

### Hardware & Software Components

- **MYOSA Motherboard** – Main microcontroller responsible for gesture processing and Wi-Fi communication  

- **MPU6050** – 6-axis accelerometer and gyroscope used for motion and gesture detection  

- **SSD1306 OLED Display** – 128×64 OLED used for live gesture/status display (I2C address: `0x3C`)  

- **Python with PyAutoGUI** – Used on the laptop side for keyboard automation and presentation control  

- **Wi-Fi (UDP Protocol)** – Enables wireless transmission of gesture data using UDP on port `12345`

---

## Requirements / Installation
### List all dependencies clearly:
```plaintext
pip install pyautogui
**Note:** `socket` is part of the Python standard library; no separate installation is required
```
### Start the receiver:
```plaintext
python gesture_receiver.py
```


      
