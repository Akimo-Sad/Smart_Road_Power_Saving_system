# Smart Road Power Saving System 🚗💡

An intelligent and energy-efficient streetlight automation system designed to conserve power by dynamically controlling streetlight brightness using vehicle detection sensors.

---

## 📌 Features
- **Energy Efficiency:** Saves up to 70-80% power during low-traffic/nighttime hours.
- **Automated Sensing:** Detects approaching vehicles using IR Sensors.
- **Dynamic Lighting:**
  - **Idle State:** Lights stay dim (20% power) when no vehicles are nearby.
  - **Active State:** Lights automatically brighten to full capacity (100%) when a vehicle approaches.

---

## 🛠️ Hardware Requirements
- Arduino Uno / Nano
- IR Motion Sensors / Infrared Sensors (x2)
- LED Module / Relay Switch with Streetlamp
- Breadboard & Jumper Wires
- Power Supply (5V/12V)

---

## ⚡ Circuit & Logic Flow
1. **Default Mode:** Roadlights operate in energy-saving dim mode.
2. **Detection:** Sensor 1 triggers upon vehicle approach.
3. **Activation:** Arduino boosts streetlight intensity to maximum brightness for safe navigation.
4. **Reset:** Once the vehicle moves past Sensor 2, lights automatically return to dim mode.

---

## 🚀 How to Run the Code
1. Open `main.ino` in your **Arduino IDE**.
2. Connect your Arduino hardware via USB.
3. Select the correct Board and Port from the `Tools` menu.
4. Upload the sketch to your board.
