# Arduino-Based Storm Safety Switch Box for Home Appliance Protection

An automated embedded safety system designed to protect household electrical appliances during adverse weather conditions. The system monitors rainfall and abnormal sound levels associated with thunderstorms and automatically disconnects the electrical load when potentially unsafe conditions are detected.

## 🌟 Project Overview

Electrical storms can result in sudden voltage fluctuations, transient surges, and other electrical disturbances that may damage household appliances. This project develops a low-cost Arduino-based safety mechanism that monitors environmental conditions and provides automatic load isolation.

Using a rain sensor and sound sensor, the system identifies conditions that may indicate an approaching storm. When the predefined detection criteria are satisfied, the Arduino activates a relay to disconnect the connected load. Once the environment remains safe for a specified period, the system restores the connection automatically.

## 🚀 Key Features

* 🌧️ Real-time rainfall monitoring
* 🔊 Thunderstorm sound-level detection
* ⚡ Automatic electrical load isolation
* 🔌 Relay-controlled appliance disconnection
* 💡 Visual indication using LEDs
* ⏱️ Configurable safety delay before reconnection
* 🔄 Automatic restoration after safe conditions
* 💰 Affordable and simple embedded implementation
* 🏠 Suitable for small-scale residential applications

## 🎯 Problem Statement

Electrical appliances connected to the mains can be vulnerable to electrical disturbances during thunderstorms. Conventional protection methods generally require manual intervention or provide protection only after a surge has already occurred.

The proposed system focuses on environmental-condition-based preventive protection by:

Monitoring weather-related conditions continuously
Identifying rainfall and abnormal sound activity
Automatically isolating the connected electrical load
Keeping appliances disconnected while unsafe conditions persist
Restoring the load after a predefined safe interval

## 🏗️ System Architecture

```text
                         +----------------------+
                         |    DC Power Supply   |
                         +----------+-----------+
                                    |
                                    v
                         +----------------------+
                         |     Arduino UNO      |
                         |  Control Unit        |
                         +----------+-----------+
                                    |
                    +---------------+---------------+
                    |                               |
                    v                               v
             +-------------+                 +-------------+
             | Rain Sensor |                 | Sound Sensor|
             +------+------+                 +------+------+
                    |                               |
                    +---------------+---------------+
                                    |
                                    v
                         +----------------------+
                         | Sensor Processing &  |
                         | Storm Detection      |
                         +----------+-----------+
                                    |
                                    v
                         +----------------------+
                         |    Relay Module      |
                         +----------+-----------+
                                    |
                                    v
                         +----------------------+
                         | Protected Electrical |
                         |       Load           |
                         +----------------------+

                    +----------------------+
                    | Status LEDs / Alerts  |
                    +----------------------+
```

## 🛠️ Hardware Components

| Component              |    Quantity | Purpose                          |
| ---------------------- | ----------: | -------------------------------- |
| Arduino UNO            |           1 | Main control unit                |
| Rain Sensor Module     |           1 | Detects rainfall                 |
| Sound Sensor Module    |           1 | Detects sudden/high sound levels |
| Relay Module           |           1 | Controls load connection         |
| Green LED              |           1 | Indicates normal operation       |
| Red LED                |           1 | Indicates protection mode        |
| Breadboard             |           1 | Prototype circuit assembly       |
| Jumper Wires           | As required | Circuit connections              |
| 9V Battery / DC Supply |           1 | Powers the prototype             |

## 💻 Software Requirements

1. Arduino IDE
2. Arduino UNO board support package
3. Embedded C/C++
4. Arduino sensor and GPIO libraries

## ⚙️ Working Principle

### 🟢 Normal Operating Condition

During normal weather conditions:

> The rain sensor reports a safe condition

> The sound sensor remains below the configured threshold

> Arduino keeps the relay in the normal operating state

> The connected load remains powered

> The green LED indicates normal operation

### 🔴 Storm Protection Condition

When rainfall or abnormal sound levels are detected:

> Sensors continuously send readings to the Arduino

> Arduino compares the readings with predefined thresholds

> The controller enters protection mode

> The relay disconnects the protected load

> The red LED indicates that protection is active

> The system keeps the load isolated while unsafe conditions continue

### 🔄 Automatic Recovery

After the detected conditions return to normal:

> Arduino continues monitoring the sensors

> A configurable safety delay is applied

> If the environment remains within safe limits, the relay is restored

> The green LED is activated again

This delay helps prevent frequent ON/OFF switching caused by temporary sensor fluctuations.

## 📊 Prototype Performance

| Parameter                  | Prototype Value |
| -------------------------- | --------------: |
| Detection Response         |        < 500 ms |
| Reconnection Delay         |     5–8 seconds |
| Operating Voltage          |           5V DC |
| Typical Controller Current |       ~50–80 mA |
| Estimated Prototype Cost   |         < ₹1500 |
| Control Platform           |     Arduino UNO |

*Performance values depend on sensor calibration, threshold selection, environmental conditions, and prototype implementation.*

## 🔌 Circuit Connections

### Rain Sensor

```text
VCC  → Arduino 5V
GND  → Arduino GND
A0   → Arduino A0
```

### Sound Sensor

```text
VCC  → Arduino 5V
GND  → Arduino GND
A0   → Arduino A1
```

### Relay Module

```text
VCC  → Arduino 5V
GND  → Arduino GND
IN   → Arduino D7
```

### Status LEDs

```text
Green LED → Normal Operation
Red LED   → Protection Mode
```

> ⚠️ For an academic prototype, the relay should preferably control a low-voltage demonstration load. Any connection to household mains voltage should be designed, enclosed, and tested by a qualified professional using appropriate electrical protection.

## 📷 System Demonstration

### 🟢 Normal Mode

```text
Weather Conditions: Safe

Rain Sensor     → No Rain
Sound Sensor    → Normal
Relay           → Connected
Green LED       → ON

Protected Load  → POWERED
```

### 🔴 Protection Mode

```text
Weather Conditions: Unsafe

Rain Sensor / Sound Sensor
            ↓
      Storm Detected
            ↓
      Arduino Processing
            ↓
       Relay OFF
            ↓
     Load Disconnected
            ↓
       Red LED ON
```

## 🎯 Applications

The proposed system can be adapted for:

* 🏠 Residential electrical protection
* 🏢 Small commercial buildings
* 🌾 Agricultural equipment
* 🏡 Rural electrical installations
* 🔌 Demonstration smart-home systems
* 📡 Remote monitoring systems
* ⚙️ Embedded electrical safety projects
* 🤖 IoT-based home automation systems

## 🔮 Future Enhancements

The prototype can be further developed by integrating:

### 📶 IoT Connectivity

ESP8266 or ESP32 can be added for remote monitoring and control.

### 📱 Mobile Notifications

Users can receive alerts whenever the system enters protection mode.

### ⚡ Voltage Monitoring

A voltage/current sensing module can be incorporated to detect abnormal electrical conditions.

### 🌩️ Dedicated Lightning Detection

A dedicated lightning detection sensor can improve storm-event identification compared with relying only on rain and sound sensors.

### ☁️ Cloud Monitoring

Sensor readings and protection events can be stored on a cloud platform for analysis.

### 🤖 Machine Learning

Historical environmental data can be analyzed to improve storm-condition classification.

### 🏠 Smart Home Integration

The system can be connected with other home-automation devices for centralized electrical safety management.

## 👨‍💻 Team Members

| Name                   | USN        |
| ---------------------- | ---------- |
| Samarth Nagappa Tuppad | 1DB23EC132 |
| Shreya R               | 1DB23EC147 |
| Srujana M V            | 1DB23EC158 |
| V N Varshitha          | 1DB23EC172 |

## 🎓 Academic Information

**Department:** Electronics & Communication Engineering

**Institution:** Don Bosco Institute of Technology, Bengaluru

**University:** Visvesvaraya Technological University (VTU), Belagavi

**Academic Year:** 2025–2026

## 📜 License

This project is developed as an academic embedded-systems project for educational, experimental, and prototype-development purposes. The prototype is intended to demonstrate automated environmental-condition-based load isolation and should not be treated as a certified electrical protection device.
