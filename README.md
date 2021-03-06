# Infineon XENSIV™ - Getting Started Box IoT
<img src="https://raw.githubusercontent.com/infineon/assets/master/Pictures/getting_started_box_iot.jpg" width=600>

All you need to know about your new Infineon XENSIV™ - Getting Started Box IoT.

## Quick start

* [XMC Microcontrollers](#XMC)
* [ESP32](#ESP32)

* [TLV493D-A1B6 – 3D Magnetic Hall Sensor](#TLV493D)
* [DPS310 – Barometric Pressure Sensor](#DPS310)
* [TLI4970-D050T4 – Current Sensor](#TLI4970)
* [IM69D130 – Digital MEMS Silicon Microphone](#IM69D)
* [OPTIGA™ Trust E – Hardware Security Chip](#TrustE)
* [Dual-Adapter equipped with OPTIGA™ Trust X](#DualAdapter)

* [Usage Example](#UsageExamples)

## A box consists of:

### Microcontrollers
* XMC 1100 Boot Kit – 32-bit Microcontroller based on ARM® Cortex®-M in Arduino Uno formfactor
* 2x XMC™ 2Go – 32-bit Microcontroller based on ARM® Cortex®-M in Shield2Go formfactor
* ESP32 – Wemos Formfactor including BLE and WIFI functionality

### Sensors in Shield2Go formfactor
* TLV493D-A1B6 – 3D Magnetic Hall Sensor
* Rotate Knob – Add on component for 3D Magnetic Hall Sensor
* Joystick - Add on component for 3D Magnetic Hall Sensor
* OPTIGA™ Trust E – Hardware Security Chip
* DPS310 – Barometric Pressure Sensor for consumer
* TLI4970-D050T4 – Current Sensor with integrated current rail
* IM69D130 – Digital MEMS Silicon Microphone

### Accessories
* Dual-Adapter Trust-X – Adapter for Infineon Shield2Go with Wemos formfactor equipped with OPTIGA™ Trust X
* Triple-Adapter – Adapter for Infineon Shield2Go with Arduino Uno formfactor
* USB-Cable
* Solderless Connectors

## About the Shields2Go
Infineon’s Shield2Go boards are equipped with one featured Infineon IC and provide a standardized form factor and pin layout for fast orientation. All boards come with solderless connectors allowing designers to stack the boards instead of soldering them. This makes the Shield2Go boards simple, reusable and flexible. In addition, each Shield2Go comes with a dedicated and ready-to-use, free Arduino library. The Shield2Go boards are compatible with all Arduino solutions with Infineon’s My IoT adapters. This combination of flexible hardware components and accompanying software speeds up the prototyping process. Designers can now focus and select only those components that they intend to design and which their layout requires, thus reducing the cost for a “box” or all-in-one solution of components that are rarely used in its entirety.

# Installation instructions

## Microcontrollers

### Arduino IDE
Please download and install the Arduino IDE from [here](https://www.arduino.cc/).

### XMC™ 2Go XMC1100 and XMC1100 for Arduino
<a name="XMC"></a>
To add support for the XMC microcontroller series to your Arduino IDE please follow [this](https://github.com/Infineon/XMC-for-Arduino) guide. If you have already installed the XMC package in your Arduino IDE, consider **updating** it via the **Board manager**.

### ESP32 WEMOS D1 MINI
<a name="ESP32"></a>
Paste the following URL into the 'Additional Boards Manager URLs' input field under **File** > **Preferences** to add the ESP32 boards to the Arduino IDE.

```
https://dl.espressif.com/dl/package_esp32_index.json
```

![Adding a Board JSON](https://raw.githubusercontent.com/infineon/assets/master/Pictures/Preferences_JSON.png)

To install the boards, please navigate to **Tools** > **Board** > **Boards Manager...** and search for ESP32. You will find options to install the board files for the microcontrollers. Click "Install" to add the boards to your Arduino IDE.

![ESP-32 Board Entry](https://raw.githubusercontent.com/infineon/assets/master/Pictures/Boards_Manager_Entry_for_ESP32.PNG)

In the boards list **Tools** > **Board**, the ESP32 microcontroller boards are added and can be used from now on.
For the ESP32 WEMOS D1 MINI choose the board **MH ET LIVE ESP32MINIKit**.

## Shield2Go Boards

For a quick start with the Shield2Go boards you need to install the library for the respective Shield either with the built-in **Library Manager** of the Arduino IDE or directly from **github**.

### TLV493D-A1B6 3D Magnetic Sensor Shield2Go
<a name="TLV493D"></a>
<img src="https://github.com/Infineon/Assets/blob/master/Pictures/TLV493D-Sense-Shield2Go_Top_plain.jpg_2045671804.jpg" width=300>

#### Library installation

Download the latest release as ZIP archive from [here](https://github.com/Infineon/TLV493D-A1B6-3DMagnetic-Sensor/releases).
In your Arduino IDE navigate to **Sketch** > **Include Library** > **Add .ZIP Library...** and choose the downloaded ZIP archive.

#### Examples

For example sketches navigate to **File** > **Examples**, scroll down to **"Examples from Custom Libraries"** and choose one of the examples in **TLV493D-A1B6**.

#### Full documentation

Please refer to the official [TLV493D-A1B6 3D Sense Shield2Go repository](https://github.com/Infineon/TLV493D-A1B6-3DMagnetic-Sensor) for a full documentation.

### DPS310 Pressure Sensor Shield2Go
<a name="DPS310"></a>
<img src="https://github.com/Infineon/Assets/blob/master/Pictures/DPS310-Pressure-Shield2Go_Top.png" width=300>

#### Automatic library installation via the Library Manager

In your Arduino IDE navigate to **Sketch** > **Include Library** > **Manage Libraries...** and search for **DPS310**. Install the library.

#### Manual library installation

Download the latest release as ZIP archive from [here](https://github.com/Infineon/DPS310-Pressure-Sensor/releases).
In your Arduino IDE navigate to **Sketch** > **Include Library** > **Add .ZIP Library...** and choose the downloaded ZIP archive.

#### Examples

For example sketches navigate to **File** > **Examples**, scroll down to **"Examples from Custom Libraries"** and choose one of the examples in **DPS310**.

#### Full documentation

Please refer to the official [DPS310 Pressure Shield2Go repository](https://github.com/Infineon/DPS310-Pressure-Sensor) for a full documentation.

### TLI4970 Current Sensor Shield2Go
<a name="TLI4970"></a>
<img src="https://github.com/Infineon/Assets/blob/master/Pictures/TLI4970_PP.jpg" width=300>

#### Library installation

Download the latest release as ZIP archive from [here](https://github.com/Infineon/TLI4970-D050T4-Current-Sensor/releases).
In your Arduino IDE navigate to **Sketch** > **Include Library** > **Add .ZIP Library...** and choose the downloaded ZIP archive.

<span style="color:red">**Important note:**</span>. Please install the One Wire library from PaulStoffregen before you install or use the library for the TLI4970-D050T4 Current Sensor. You can find the One Wire library in the **Library Manager** in the Arduino IDE **Sketch > Include Library > Manage Libraries**.

#### Examples

For example sketches navigate to **File** > **Examples**, scroll down to **"Examples from Custom Libraries"** and choose one of the examples in **TLI4970**.

#### Full documentation

Please refer to the official [TLI4970 Current Sense Shield2Go repository](https://github.com/Infineon/TLI4970-D050T4-Current-Sensor) for a full documentation.

### Optiga™ Trust E Shield2Go
<a name="TrustE"></a>
<img src="https://github.com/Infineon/Assets/blob/master/Pictures/OPTIGA Trust E Security Shield2Go_Top_plain.jpg" width=300>

#### Library installation

Download the latest release as ZIP archive from [here](https://github.com/Infineon/OPTIGA-Trust-E-Security-Controller/releases).
In your Arduino IDE navigate to **Sketch** > **Include Library** > **Add .ZIP Library...** and choose the downloaded ZIP archive.

#### Examples

For example sketches navigate to **File** > **Examples**, scroll down to **"Examples from Custom Libraries"** and choose one of the examples in **OPTIGATrustE**.

#### Full documentation

Please refer to the official [Optiga™ Trust E Shield2Go repository](https://github.com/Infineon/OPTIGA-Trust-E-Security-Controller) for a full documentation.

### IM69D MEMS Microphone Shield2Go
<a name="IM69D"></a>
<img src="https://github.com/Infineon/Assets/blob/master/Pictures/IM69D130_Microphone_Shield2Go_Transformed_Resized.jpg" width=350>

The IM69D is a I2S (Inter-IC Sound) device and does **not** need a special library. It works out-of-the-box with the XMC microcontroller series. The ESP32 is not yet natively supported.

#### Examples

For example sketches navigate to **File** > **Examples**, scroll down to **"Examples for XMC1100 ..."** (depends on which board you have choosen) and choose one of the examples in **I2S**.

Please refer to the official [IM69D MEMS Microphone Shield2Go repository](https://github.com/Infineon/IM69D130-Microphone-Shield2Go) for a full documentation.

## Dual-Adapter Trust-X

The Dual-Adapter Trust-X is a adapter for combining Infineon Shield2Go boards with Wemos formfactor microcontroller boards. The adapter is equipped with an OPTIGA™ Trust X chip.

### OPTIGA™ Trust X
<a name="DualAdapter"></a>
<img src="https://github.com/Infineon/Assets/raw/master/Pictures/OPTIGA-Trust-X.png">

#### Automatic library installation via the Library Manager

In your Arduino IDE navigate to **Sketch** > **Include Library** > **Manage Libraries...** and search for **OptigaTrustX**. Install the library.

#### Manual library installation

Download the latest release as ZIP archive from [here](https://github.com/Infineon/arduino-optiga-trust-x/releases).
In your Arduino IDE navigate to **Sketch** > **Include Library** > **Add .ZIP Library...** and choose the downloaded ZIP archive.

#### Examples

For example sketches navigate to **File** > **Examples**, scroll down to **"Examples from Custom Libraries"** and choose one of the examples in **OPTIGATrustX**.

#### Full documentation

Please refer to the official [OPTIGA™ Trust X repository](https://github.com/Infineon/arduino-optiga-trust-x) for a full documentation.

# Examples
<a name="UsageExamples"></a>

## Joystick and Pressure Sensor on the ESP32 Wemos D1 Mini

This example shows how to use the Getting Started Box IoT in order to show sensor data from the 3D Magnetic Sensor and the Pressure Sensor on a Website, which is hosted by the ESP32 Wemos D1 Mini.

### Hardware

Required Hardware:
<img src="https://github.com/Infineon/Assets/raw/master/Pictures/IoTBox-Joystick_Pressure-Hardware.png">

Now connect all devices together:
1. Mount the 3D-printed Joystick Adapter onto the TLV493D-A1B6 Shield2Go and tighten the screw.
2. Plug the TLV493D Shield2Go with connected Joystick-Adapter into Socket 1 of the Dual Adapter.
3. Connect DPS310 Shield2Go to Socket 2 of the Dual Adapter.
4. Connect the Dual Adapter to the ESP32 Wemos D1 Mini. Make sure it's connected the right way (check with the picture below).
5. Use a micro USB-cable to connect the ESP32 Wemos D1 Mini to the PC.

Afterwards it should look like this:

<img src="https://github.com/Infineon/Assets/raw/master/Pictures/IoTBox-Joystick_Pressure-ConnectedHardware.jpg" height=300>


### Software

To get the software for this example, download this repository from GitHub by clicking on the following field in the latest [release](https://github.com/Infineon/Getting_Started_Box_IoT/releases) of this repository:

<img src="https://raw.githubusercontent.com/infineon/assets/master/Pictures/Releases_Generic.jpg">

After downloading you can extract the ZIP-file and then navigate to "*examples/Joystick_Pressure/*".
Open the *Joystick.ino* with the Arduino IDE and follow these steps to upload the sketch:
1.  Click on **Tools** > **Board** and select the Board  **MH ET LIVE ESP32MINIKit** there. (If you do not find the Board, make sure you've installed the ESP32-Boards as described [here](#ESP32))
2. Select the right COM-port via **Tools** > **Port**. Mostly it's the port with the highest number. If you are not sure which COM-port your ESP32 Wemos D1 Mini is connected to, simply unplug it and check which COM-Port number disappeared in the list (you have to reopen the list in order to refresh it).
3. Upload the Sketch via **Sketch** > **Upload**.

### Result

After uploading the sketch, the ESP32 Wemos D1 Mini sets up a WiFi - access point with the SSID "myIoT" and the password "ifxIoT2019":

<img src="https://github.com/Infineon/Assets/raw/master/Pictures/IoTBox-Joystick_Pressure-ConnectToWifi.png">

A webserver is started by the ESP32 on its local IP. The website can be seen when a device is connected to the access point and calls http://192.168.4.1 in the browser.

<img src="https://github.com/Infineon/Assets/raw/master/Pictures/IoTBox-Joystick_Pressure-ESP32_Standard_IP.png">
<img src="https://github.com/Infineon/Assets/raw/master/Pictures/iOTBox-Joystick_Pressure-Website.png" width=500>

The SSID, Password and URL can also be seen via the Serial Monitor in the Arduino IDE (Baudrate: 115200, maybe a reset by pressing the button on the ESP32 Wemos D1 Mini with open Serial Monitor is necessary in order to see the output)
<img src="https://github.com/Infineon/Assets/raw/master/Pictures/iOTBox-Joystick_Pressure-SerialMonitor.png">

That's it. Now you can monitor the sensor values on the website.