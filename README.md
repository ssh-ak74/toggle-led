#  Toggle LED

A simple ESP32 project that lets you **toggle an LED ON and OFF with a push button**.

Press the button once to turn the LED ON. Press it again to turn it OFF.

##  Features

*  Push-button input
*  LED output
*  Toggle ON/OFF behavior
*  Uses the ESP32's internal pull-up resistor
*  Built with PlatformIO
*  MIT licensed

##  Wiring

### LED

| Component       | ESP32                        |
| --------------- | ---------------------------- |
| LED anode (+)   | GPIO 25 through 1kΩ resistor |
| LED cathode (-) | GND                          |

### Push Button

| Button        | ESP32   |
| ------------- | ------- |
| One side      | GPIO 27 |
| Opposite side | GND     |

> **Note:** For a 4-pin tactile button, GPIO 27 and GND must connect to **opposite internally-connected pairs** of pins.

##  How It Works

The ESP32 uses `INPUT_PULLUP` for the button.

```text
Button released → HIGH
Button pressed  → LOW
```

Each new button press flips the LED state:

```text
Press 1 →  ON
Press 2 →  OFF
Press 3 →  ON
Press 4 →  OFF
```

The program also uses a short debounce delay to prevent one press from being detected multiple times.

##  Hardware

* ESP32 development board
* 1× LED
* 1× 1kΩ resistor
* 1× 4-pin tactile push button
* Breadboard
* Jumper wires

##  Getting Started

1. Wire the components according to the diagram above.
2. Open the project in PlatformIO.
3. Connect your ESP32.
4. Upload the program.
5. Press the button to toggle the LED.

##  Project Structure

```text
toggle-led/
├── src/
│   └── main.cpp
├── platformio.ini
├── LICENSE
└── README.md
```

##  License

This project is licensed under the **MIT License**.

See [`LICENSE`](LICENSE) for details.

---

Made with an ESP32, a button, and an LED. 🔘💡
