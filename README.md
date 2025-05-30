# ESP32 Wi-Fi Scanner

This project uses an ESP32 microcontroller to scan for nearby Wi-Fi networks and display their SSID, signal strength (RSSI), and encryption status in the Serial Monitor.

## 📡 How It Works

- The ESP32 is set to **station mode** and scans for nearby 2.4GHz Wi-Fi networks.
- For each network found, it prints:
  - Network name (SSID)
  - Signal strength in dBm
  - Whether it is open or secured

## 🔧 Hardware Used

- ESP32 DevKit v1
- USB connection to PC
- No external components required

## 🖥️ How to Use

1. Upload the `WiFiScanner.ino` sketch to your ESP32 using the Arduino IDE.
2. Open the Serial Monitor (baud rate 115200).
3. Every 10 seconds, a fresh scan of Wi-Fi networks will be displayed.

## 🧠 Skills Demonstrated

- ESP32 development using Arduino IDE
- Working with the `WiFi.h` library
- Serial communication
- Embedded system debugging and project documentation

## 📅 Author

**Garen Shanoian**, May 2025
