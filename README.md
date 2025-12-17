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
## Overview
The Wireless Presentation Controller using MYOSA is a gesture-based, contactless system designed to control presentations without relying on physical input devices such as keyboards or clickers. The project enables users to navigate presentation slides using left, right, up, and down hand gestures, and also perform zoom-in and zoom-out operations, allowing presenters to interact with content more naturally and efficiently.

The system operates using the MYOSA board as the central processing and control unit. A gesture sensor detects directional hand movements, while motion data from the accelerometer and gyroscope improves accuracy and reduces false detections. These sensor inputs are processed in real time on the MYOSA board, where each recognized gesture is mapped to a specific presentation command such as slide navigation or zoom control. The commands are transmitted wirelessly to a laptop or PC using Wi-Fi, enabling reliable and low-latency communication. An OLED display provides real-time feedback by showing connection status, recognized gestures, and the active control mode.

This project is intended for students, educators, professionals, and presenters who deliver presentations in classrooms, seminars, conferences, and meetings. It is particularly useful in environments where hands-free control, freedom of movement, or hygiene considerations are important.

The project addresses the limitations of traditional presentation controllers, which restrict mobility, require physical interaction, and offer limited control functionality. By leveraging the MYOSA platform and Wi-Fi communication, this solution provides a portable, cost-effective, and customizable alternative that demonstrates advanced human–machine interaction through gesture-based control.


**Key features:**
* Contactless interaction
* Real-time gesture detection
* BLE-based keyboard control
* Portable and low power

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

## Features (Detailed)

### **1. Gesture Detection**
The MYOSA sensor detects hand movements such as left, right, near, and far gestures within a short range.

### **2. ESP32 Processing**
The ESP32 processes gesture data and maps each gesture to a predefined keyboard action.

### **3. BLE Keyboard Output**
Using BLE HID, the ESP32 sends keyboard commands to control slides or media applications wirelessly.

---

## Usage Instructions
1. Power the MYOSA board using USB.
2. Pair the device with a PC or laptop via Bluetooth.
3. Open a presentation or media player.
4. Perform hand gestures in front of the sensor.

---

## Tech Stack
* **ESP32**
* **MYOSA Gesture Sensor**
* **Arduino IDE**
* **BLE HID Library**

---

## Requirements / Installation
```bash
Install Arduino IDE
Add ESP32 board support
Install MYOSA and BLE Keyboard libraries
