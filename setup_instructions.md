# Setup Instructions

## Step 1: Install Arduino IDE
Download and install Arduino IDE from:
https://www.arduino.cc/en/software

## Step 2: Install ESP32 Board
1. Open Arduino IDE
2. Go to File → Preferences
3. Add ESP32 Board URL in Additional Board Manager

https://dl.espressif.com/dl/package_esp32_index.json

4. Go to Tools → Board → Board Manager
5. Install ESP32 Board Package

## Step 3: Install Required Libraries
Install the following libraries using Library Manager:

- Adafruit BMP085 Library
- SparkFun MAX30105 Library
- Blynk Library

## Step 4: Connect Hardware

ESP32 → Sensors Connections

BMP180
VCC → 3.3V
GND → GND
SDA → GPIO21
SCL → GPIO22

MAX30102
VIN → 3.3V
GND → GND
SDA → GPIO21
SCL → GPIO22

GSR Sensor
VCC → 3.3V
GND → GND
Signal → GPIO34

## Step 5: Upload Code
1. Connect ESP32 to PC
2. Open Arduino IDE
3. Select correct COM port
4. Upload project code

## Step 6: Open Blynk Dashboard
Login to Blynk app and monitor real-time health data.
