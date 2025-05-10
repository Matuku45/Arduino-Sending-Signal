# Arduino-Sending-Signal

This project allows Java to communicate with an Arduino via serial port using user input from the console.

## 🔌 What It Does

- Opens a serial connection between Java and an Arduino board.
- Takes integer input from the user via the terminal.
- Sends that value as a byte to the Arduino.
- The Arduino can act on the received value (e.g., turn an LED on/off or trigger other actions).

## 🛠 Requirements

- Java JDK (8+)
- Arduino Uno (or compatible board)
- USB cable
- [jSerialComm Library](https://fazecast.github.io/jSerialComm/)
- Arduino IDE
