# 🚗 Vehicle Accident Alert System (IoT + Embedded)

An Arduino-based system that detects vibration or tilt and sends **real-time accident alerts** (MVP prototype).

---

## ⚙️ Hardware (MVP)
- Arduino UNO (or compatible)
- Vibration / Shock sensor (e.g., SW-420)
- MPU6050 (optional for tilt/accel)
- GSM Module (SIM800L) – optional for SMS alerts
- Buzzer / LED for local alert

---

## 💻 Software
- Arduino IDE
- AccidentAlert.ino (in this repo)

---

## 📊 Working Principle
When the sensor detects a strong vibration or sudden movement, the Arduino triggers an alert:
- Buzzer or LED indicates possible accident.
- (Optional) Sends an SMS using GSM module.

---

## 🚀 How to run (MVP)
1. Open `AccidentAlert.ino` in Arduino IDE.
2. Connect the vibration sensor to digital pin 2 (configurable).
3. Upload code and open Serial Monitor to view alerts.

---

## 🔧 Future Improvements
- Add GPS module for accident location tracking  
- Integrate IoT dashboard (e.g., ThingsBoard / Blynk)  
- Add GSM-based SMS alerts with accident coordinates  

---

## 👩‍💻 Author
**Jigisha Diksha**  
Ramgarh Engineering College | IoT & Embedded Developer
