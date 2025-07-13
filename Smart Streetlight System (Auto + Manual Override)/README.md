# 🌃 Smart Streetlight System (Auto + Manual Override)

A smart embedded system that automatically controls a streetlight using an LDR sensor and allows manual override using a pushbutton — simulating real smart city infrastructure.

## 🚀 Features

- 🌞 **Auto Mode**: Uses LDR to detect darkness and turn streetlight (LED) ON/OFF
- ✋ **Manual Mode**: Toggle LED ON/OFF manually using a pushbutton
- 🔁 **Mode Switching**: Pressing the button toggles between Auto ↔ Manual Mode
- 🔧 Built with Arduino UNO, easy to simulate on Tinkercad

---

## 🔧 Hardware Used

| Component            | Quantity |
|---------------------|----------|
| Arduino UNO         | 1        |
| LDR Sensor          | 1        |
| 10kΩ Resistor       | 1        |
| Pushbutton          | 1        |
| LED (Streetlight)   | 1        |
| 220Ω Resistor       | 1        |
| Breadboard + Wires  | As needed |

📁 BOM file: [`bom.csv`](./bom.csv)

---

## 💡 Features

- 🌞 Auto Mode: LED controlled by LDR sensor
- ✋ Manual Mode: LED toggle using pushbutton
- 🔁 Smart switch between auto and manual modes
- 🧠 Built using debounce logic and analog sensing

---

## ⚙️ How It Works

1. System starts in Auto Mode
2. If it’s dark, LDR triggers LED ON (threshold = 500)
3. Pressing the button:
   - Switches to Manual Mode
   - Toggles LED ON/OFF (independent of LDR)
   - Third press switches back to Auto Mode

---

## 🧪 Tinkercad Simulation

> [https://www.tinkercad.com/things/k938vdywwq0/editel?returnTo=%2Fdashboard]

---


## 🔌 Circuit Diagram

![Streetlight Circuit](Smart Streetlight System (Auto + Manual Override)/strightlight_cricuit.png)

---

## 💡 Code Logic

- LDR reads light levels via analog input (A0)
- In Auto Mode:  
  - LDR < 500 → LED ON  
  - LDR ≥ 500 → LED OFF
- In Manual Mode:  
  - Button toggles LED ON/OFF (ignores LDR)
- Every 3rd press → returns to Auto Mode

📄 Code File: [`Smart Streetlight System .ino`](./Smart%20Streetlight%20System%20.ino)

---

## 📷 Simulation Demo

> Add your Tinkercad project link here:  
> `[Tinkercad Simulation](https://www.tinkercad.com/dashboard)`

---

## ✍️ Developed By

**Parth Pawar**  
Final Year Mechatronics Engineer  
🔗 [GitHub Profile](https://github.com/Parth-558)  
📧 parthpawar808@gmail.com

---

## 📁 Folder Structure

