# Smart Geenhouse
## This is the **final project** for the **Internet of Things (IoT)** course at **University of Tartu**, Spring 2025.
## Collaborators
- [Aleksander Tamm](https://github.com/AleksanderTamm)
- [Natig Agarzayev](https://github.com/NatigAgarzayev)
- [Noman Ashraf](https://github.com/nomanashraf11)
- [Anjish](https://github.com/anji5h)
  
## Overview

This project addresses the need for smarter, low-maintenance greenhouse management in outdoor environments. It helps monitor plant health, automate watering, control lighting — making the system more resilient to both environmental changes and unexpected outdoor interference.

## Using IoT technology, we created a system that:
- Automatically waters plants based on soil moisture
- Monitors temperature and humidity
- Opens and closes window based on temperature
- Based on the intentsity of the sunlight turns on/off growing lights

  
## Tech Stack
- ESP8266
- Capacitive Soil Moisture Sensor v1.2.
- Water pump + relay module
- Temperature + humidity sensor DHT Shield
- Servo motor
- LUX sensor TSL2561
- 2x Flexible WS2812 NeoPixel 8x8 Matrix (64 LEDs)
- Node-RED dashboard
- MQTT protocol



## Flow
- Automatically waters plants (pump) based on soil moisture (Capacitive Soil Moisture Sensor)
- Monitors temperature and humidity (DHT Shield)
- Servo motors to control window based on temperature
- Control growing lights (LED matrix) based on the intentsity of the sunlight(TSL2561)
