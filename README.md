COMPANY NAME: CODTECH IT SOLUTIONS INTERN ID: CT06DG486 GUIDE: NEELA SANTOSH DOMAIN: EMBEDDED SYSTEMS DURATION: 6 WEEKS
This project is a **Home Automation System** designed and simulated using Wokwi, an online simulation platform for Arduino and ESP32 projects. The main objective is to control multiple home appliances (such as lights, fans, and AC) remotely using simple serial commands or Bluetooth-based commands, allowing users to switch devices ON or OFF easily.

# Overview
In this project, multiple devices (represented by LEDs in simulation) are controlled using commands sent through the Serial Monitor. In real-world applications, these commands can be sent via Bluetooth modules (like HC-05) using a smartphone app.  
When a specific character command is sent (e.g., "L" to turn on light, "l" to turn off light), the corresponding device pin is activated or deactivated. Each appliance is simulated using an LED, which turns ON or OFF based on received commands, helping to visualize the system operation clearly in simulation.

# Simulation Platform
The entire system was simulated on **Wokwi**, a powerful web-based simulator for embedded projects. Wokwi allows you to virtually connect components, upload code, and see real-time behavior, making it ideal for prototyping and learning without physical hardware.  

# Applications
- Smart homes**: Control lights, fans, AC, and other appliances remotely.
- Elderly and patient assistance**: Easily control devices without needing to move.
- Energy management**: Switch off devices remotely to save electricity.
- Office automation**: Control equipment and lights in conference rooms or cabins.
- IoT-based home monitoring**: Integrate with IoT apps to control and monitor devices over the internet.

# Educational Importance
- Basics of controlling outputs (GPIO pins) using microcontrollers.
- Handling serial communication and parsing received commands.
- Simulating real-world appliances safely using LEDs.
- Designing logic for smart systems and future IoT projects.

# Possible Extensions
- Replace LEDs with relay modules to control real AC appliances.
- Integrate with a Bluetooth module (e.g., HC-05) to receive commands from a smartphone app.
- Add sensors (e.g., motion or temperature) for automated control without manual commands.
- Use Wi-Fi connectivity to control devices from anywhere in the world.
- Add a mobile app interface for more user-friendly control.

# How it works
- Each appliance is assigned a specific character command.
- When the correct command is received over serial, the microcontroller updates the corresponding GPIO pin to turn the device ON or OFF.
- The Serial Monitor in Wokwi is used to simulate Bluetooth or app-based commands in this project.
- LEDs are used to represent different appliances for easy visualization.

# Output
