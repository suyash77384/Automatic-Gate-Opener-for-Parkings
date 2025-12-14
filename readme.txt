🚪 Automatic Gate Opener Using Arduino & PIR Sensor

📌 Project Overview
This project demonstrates an automatic gate opening system using an Arduino microcontroller. The gate opens automatically when motion is detected by a PIR sensor and closes after a fixed delay using a servo motor.

🎯 Objectives
To design an automatic gate control system
To detect human motion using a PIR sensor
To control a servo motor using Arduino
To reduce manual effort and improve convenience

⚙️ Components Used
Arduino UNO / Nano
PIR Motion Sensor (HC-SR501)
Servo Motor (SG90 / MG90)
Jumper Wires
External 5V Power Supply (for servo)
Optional: LED + 220Ω resistor

🔌 Circuit Connections
PIR Sensor
VCC → 5V
GND → GND
OUT → Digital Pin 2
Servo Motor
Red → 5V (External recommended)
Brown/Black → GND
Yellow → Digital Pin 9
Optional LED
Anode → Digital Pin 13 (via resistor)
Cathode → GND

🧠 Working Principle
The PIR sensor detects motion and sends a HIGH signal to the Arduino. The Arduino processes this signal and rotates the servo motor to open the gate. After a fixed delay, the servo returns to its original position, closing the gate automatically.

💻 Software Requirements
Arduino IDE
Servo Library (built-in)

📂 Code
The Arduino code is included in the repository. Upload it to the Arduino board using the Arduino IDE after making the correct connections.

📌 Applications
Home automation
Parking gate systems
Office entrances
Smart security systems

✅ Advantages
Low cost
Simple design
Automatic operation
Easy to upgrade

🔧 Future Enhancements
RFID or keypad access control
PIR sensor for vehicle detection
Buzzer or alarm system
Wireless control using Bluetooth or Wi-Fi

🧪 Project Type
Embedded Systems
Arduino Automation
Diploma Mini Project

👨‍💻 Author
Suyash Ravindra Sonawane
Diploma in Electronics / Electronics & Telecommunication

📜 License


This project is for educational purposes only.s
