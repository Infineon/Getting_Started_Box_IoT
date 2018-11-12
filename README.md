# Infineon XENSIV™ - Getting Started Box IoT

![Infineon XENSIV™ - Getting Started Box IoT](https://raw.githubusercontent.com/infineon/assets/master/Pictures/getting_started_box_iot.jpg)

All you need to know about your new Infineon XENSIV™ - Getting Started Box IoT.

## A box consists of:

### Microcontrollers
* XMC 1100 Bootkit – 32-bit Microcontroller based on ARM® Cortex®-M in Arduino Uno formfactor
* XMC2Go (qty 2) – 32-bit Microcontroller based on ARM® Cortex®-M in Shield2Go formfactor
* ESP32 – Wemos Formfactor including BLE and WIFI functionality

### Sensors in Shield2Go formfactor
* TLV493D-A1B6 – 3D Magnetic Hall Sensor
* Rotate Knob – Add on component for 3D Magnetic Hall Sensor
* Joystick - Add on component for 3D Magnetic Hall Sensor
* OPTIGA™ Trust E – Hardware Security Chip
* DPS310 – Barometric Pressure Sensor for Consumer
* TLI4970-D050T4 – Current Sensor with integrated current rail
* IM69D130 – Digital MEMS Silicon Microphone

### Accessories
* Dual-Adapter Trust-X – Adapter for Infineon Shield2Go with Wemos formfactor equipped with OPTIGA™ Trust X
* Triple-Adapter – Adapter for Infineon Shield2Go with Arduino Uno formfactor (alternatively: Grove Base_Shield_V2)
* Grove-Adapter (qty 2) – Adapter with Shield2Go formfactor for easy-to-use
* Grove-Cables (qty 2)
* USB-Cable
* Soldering Connectors

## About the Shield2Go formfactor
Infineon’s Shield2Go boards are equipped with one featured Infineon IC and provide a standardized form factor and pin layout for fast orientation. All boards come with solderless connectors allowing designers to stack the boards instead of soldering them. This makes the Shield2Go boards simple, reusable and flexible. In addition, each Shield2Go comes with a dedicated and ready-to-use, free Arduino library. The Shield2Go boards are compatible with all Arduino solutions with Infineon’s My IoT adapters. This combination of flexible hardware components and accompanying software speeds up the prototyping process. Designers can now focus and select only those components that they intend to design and which their layout requires, thus reducing the cost for a “box” or all-in-one solution of components that are rarely used in its entirety.

# Installation instructions

## Microcontrollers

### Arduino IDE
Please download and install the Arduino IDE from [here](https://www.arduino.cc/).

### XMC 2Go XMC1100 and XMC1100 for Arduino
To add support for the XMC microcontroller series to your Arduino IDE please follow [this](https://github.com/Infineon/XMC-for-Arduino) guide.

### ESP32 WEMOS D1 MINI
Paste the following URL into the 'Additional Boards Manager URLs' input field under File > Preferences to add the ESP32 boards to the Arduino IDE.

```
https://dl.espressif.com/dl/package_esp32_index.json
```

![Adding a Board JSON](https://raw.githubusercontent.com/infineon/assets/master/Pictures/Preferences_JSON.png)

To install the boards, please navigate to **Tools** > **Board** > **Boards Manager...** and search for ESP32. You will find options to install the board files for the microcontrollers. Click "Install" to add the boards to your Arduino IDE.

![ESP-32 Board Entry](https://raw.githubusercontent.com/infineon/assets/master/Pictures/Boards_Manager_Entry_for_ESP32.PNG)

In the boards list **Tools** > **Board**, the ESP32 microcontroller boards are added and can be used from now on.
For the ESP32 WEMOS D1 MINI choose the board **MH ET LIVE ESP32MINIKit**.

## Sense2Go Shields

For a quick start with the Sense2Go Shields you need to install the library for the respective Shield either with the built-in **Library Manager** of the Arduino IDE or directly from **github**.

### TLV493D-A1B6 3D Magnetic Sensor Shield2Go

<img src="https://github.com/Infineon/Assets/blob/master/Pictures/TLV493D-Sense-Shield2Go_Top_plain.jpg_2045671804.jpg" width=300>

#### Library installation

Download the latest release as ZIP archive from [here](https://github.com/Infineon/TLV493D-A1B6-3DMagnetic-Sensor/releases).
In your Arduino IDE navigate to **Sketch** > **Include Library** > **Add .ZIP Library...** and choose the downloaded ZIP archive.

#### Full documentation

Please refer to the official [TLV493D-A1B6 3D Sense Shield2Go repository](https://github.com/Infineon/TLV493D-A1B6-3DMagnetic-Sensor) for a full documentation.

### DPS310 Pressure Sensor Shield2Go

<img src="https://github.com/Infineon/Assets/blob/master/Pictures/DPS310-Pressure-Shield2Go_Top.png" width=300>

#### Automatic library installation via the Library Manager

In your Arduino IDE navigate to **Sketch** > **Include Library** > **Manage Libraries...** and search for **DPS310**. Install the library.

#### Manual library installation

Download the latest release as ZIP archive from [here](https://github.com/Infineon/DPS310-Pressure-Sensor/releases).
In your Arduino IDE navigate to **Sketch** > **Include Library** > **Add .ZIP Library...** and choose the downloaded ZIP archive.

#### Full documentation

Please refer to the official [DPS310 Pressure Shield2Go repository](https://github.com/Infineon/DPS310-Pressure-Sensor) for a full documentation.

### TLI4970 Current Sensor Shield2Go

<img src="https://github.com/Infineon/Assets/blob/master/Pictures/TLI4970_PP.jpg" width=300>

#### Library installation

Download the latest release as ZIP archive from [here](https://github.com/Infineon/TLI4970-D050T4-Current-Sensor/releases).
In your Arduino IDE navigate to **Sketch** > **Include Library** > **Add .ZIP Library...** and choose the downloaded ZIP archive.

#### Full documentation

Please refer to the official [TLI4970 Current Sense Shield2Go repository](https://github.com/Infineon/TLI4970-D050T4-Current-Sensor) for a full documentation.

### Optiga™ Trust E Shield2Go

<img src="https://github.com/Infineon/Assets/blob/master/Pictures/OPTIGA Trust E Security Shield2Go_Top_plain.jpg" width=300>

#### Library installation

Download the latest release as ZIP archive from [here](https://github.com/Infineon/OPTIGA-Trust-E-Security-Controller/releases).
In your Arduino IDE navigate to **Sketch** > **Include Library** > **Add .ZIP Library...** and choose the downloaded ZIP archive.

#### Full documentation

Please refer to the official [Optiga™ Trust E Shield2Go repository](https://github.com/Infineon/OPTIGA-Trust-E-Security-Controller) for a full documentation.

### IM69D MEMS Microphone Shield2Go

<img src="https://github.com/Infineon/Assets/blob/master/Pictures/IM69D130_Microphone_Shield2Go_Transformed_Resized.jpg" width=350>

Please refer to the official [IM69D MEMS Microphone Shield2Go repository](https://github.com/Infineon/IM69D130-Microphone-Shield2Go) for a full documentation.
