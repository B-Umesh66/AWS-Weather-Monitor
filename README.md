# AWS Weather Monitor (ESP8266)

AWS Weather Monitor is an IoT project that connects an ESP8266 microcontroller to **AWS IoT Core** to securely publish simulated weather data using MQTT over TLS.

The project demonstrates how resource-constrained devices can communicate securely with cloud platforms using certificates, time synchronization, and lightweight messaging protocols.

---

## 📌 Project Overview

This project simulates a weather monitoring device that sends temperature and humidity data to AWS IoT Core at regular intervals. The ESP8266 establishes a secure connection using X.509 certificates and mutual TLS authentication. It also subscribes to a cloud topic to receive messages from AWS.

---

## ✨ Key Features

- Secure Wi-Fi connectivity using ESP8266  
- Time synchronization via NTP for TLS certificate validation  
- Secure MQTT (MQTTS) communication  
- Mutual authentication using device certificates and private keys  
- Periodic publishing of simulated weather data  
- Subscription to cloud messages from AWS IoT  

---

## 🧰 Hardware Requirements

- ESP8266 Wi-Fi module  
  - NodeMCU  
  - Wemos D1 Mini  
- Micro USB cable  
- Computer with Arduino IDE  

---

## 🖥️ Software Requirements

- Arduino IDE with ESP8266 Board Manager installed  
- Required Arduino libraries:
  - PubSubClient (for MQTT communication)
  - ArduinoJson (for payload handling)

---

## ☁️ AWS IoT Core Configuration

To run this project, the following setup is required in AWS IoT Core:

- Create an IoT Thing for the ESP8266 device  
- Generate device certificates and private key  
- Download Amazon Root CA  
- Create and attach an IoT policy allowing:
  - Connect
  - Publish
  - Subscribe
  - Receive  

Sensitive credentials are stored locally and excluded from version control to maintain security.

---

## 🔧 Device Configuration

The project requires configuring:
- Wi-Fi credentials  
- AWS IoT MQTT endpoint  
- Device certificates  

All sensitive information is kept outside the repository to prevent accidental exposure.

---

## ▶️ How It Works

1. The ESP8266 connects to a Wi-Fi network  
2. System time is synchronized using NTP  
3. A secure TLS connection is established with AWS IoT Core  
4. Simulated weather data is published at fixed intervals  
5. The device listens for incoming cloud messages  

---

## 🔐 Security Considerations

- Mutual TLS authentication ensures secure device identity  
- Certificates are stored in program memory to optimize RAM usage  
- Sensitive files are excluded using `.gitignore`  
- Secure communication prevents unauthorized access  

---

## 🚀 Possible Enhancements

- Integration with real sensors such as DHT11 or DHT22  
- AWS IoT Rules for data storage or analytics  
- OTA firmware updates  
- AWS IoT Device Shadow support  
- Dashboard visualization using AWS services

---
## ✨ Project Image
![IMG_20250610_093808](https://github.com/user-attachments/assets/b9a68b91-c174-4830-bda0-3e3d78d7bb4a)
