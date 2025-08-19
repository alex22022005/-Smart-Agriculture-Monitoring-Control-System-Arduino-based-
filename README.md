# 🌱 Smart Agriculture Monitoring & Control System (Arduino-based)

An **IoT-enabled smart agriculture system** built using Arduino to monitor temperature, humidity, and soil moisture while controlling irrigation automatically.  
The system uses **DHT11**, **Soil Moisture Sensor**, **LCD Display**, **Servo Motor**, and **DC Motor** for real-time data collection and automated responses.

---

## 📌 Features
- 🌡️ **Temperature & Humidity Monitoring** using DHT11 sensor.
- 🌱 **Soil Moisture Detection** for real-time plant health monitoring.
- 💧 **Automated Irrigation** using DC motor based on soil conditions.
- 🔄 **Servo Motor Control** for temperature-based actions.
- 📟 **16x2 LCD Display** for live environmental data.
- 🖥 **Serial Monitor Output** for debugging and logging.

---

## 🛠 Components Used
| Component               | Quantity |
|------------------------|----------|
| Arduino UNO / Nano     | 1        |
| DHT11 Sensor           | 1        |
| Soil Moisture Sensor   | 1        |
| 16x2 LCD (I2C)         | 1        |
| Servo Motor (SG90)     | 1        |
| DC Motor               | 1        |
| Motor Driver / MOSFET  | 1        |
| Jumper Wires           | As needed |
| Breadboard             | 1        |
| Power Supply           | 1        |

---

## 📜 Code
The full Arduino code is available in [`smart_agriculture.ino`](https://github.com/alex22022005/-Smart-Agriculture-Monitoring-Control-System-Arduino-based-/blob/main/2ndyrsproject.ino).  
It handles:
- Reading DHT11 temperature & humidity
- Reading soil moisture levels
- Controlling servo & DC motor
- Displaying data on LCD
- Serial output for debugging

---

## 🔌 Pin Configuration
| Component             | Arduino Pin |
|----------------------|-------------|
| DHT11 Data           | A2          |
| Soil Moisture Sensor | A3          |
| Servo Motor Signal   | D9          |
| DC Motor Control     | D8 (PWM)    |
| LCD (I2C)            | SDA/SCL     |

---

## 🚀 How to Run
1. **Install Arduino IDE** (if not already installed)
2. Install the following libraries from **Library Manager**:
   - `LiquidCrystal_I2C`
   - `DHT sensor library`
   - `Servo`
3. Connect the components as per the circuit diagram.
4. Upload `smart_agriculture.ino` to your Arduino board.
5. Open the **Serial Monitor** (9600 baud rate) to view sensor data.

---
## 📌 Applications
- Smart Irrigation Systems
- Greenhouse Automation
- Home Gardening
- Agricultural Research

---

## 📄 License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

## ✨ Author
Developed by **Antony Alex(https://github.com/alex22022005)**  
🚀 Bringing IoT into Agriculture!
