# Automatic Light

An Arduino-based light that turns on automatically when the room gets dark and turns off when it's bright.

## How it works
A light-dependent resistor (LDR) measures ambient light. The Arduino Uno reads the value and switches a relay (or LED) when it crosses a set threshold.

## Components
- Arduino Uno R3
- LDR (photoresistor)
- 10 kΩ resistor
- Relay module (or LED + 220 Ω resistor)
- Jumper wires, breadboard

## Wiring
| Part | Arduino pin |
|------|-------------|
| LDR + 10 kΩ divider (midpoint) | A0 |
| Relay / LED signal | D7 |
| VCC / GND | 5V / GND |

## Usage
1. Wire the circuit as shown above.
2. Open `automatic_light.ino` in the Arduino IDE.
3. Select **Arduino Uno** and your COM port, then upload.
4. Adjust the `THRESHOLD` value in the code to fit your room.

## Possible improvements
- Add hysteresis to avoid flickering near the threshold
- Add a motion sensor so it only lights when someone is present
- Add a manual override button

## Author
Amin — [GitHub](https://github.com/Amin-79E)
