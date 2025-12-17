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
The Gesture Control System using MYOSA is a contactless human–computer interaction project that allows users to control presentations and media applications using hand gestures.  
The MYOSA gesture sensor detects directional hand movements, which are processed by the ESP32 and transmitted as keyboard commands via BLE.

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
