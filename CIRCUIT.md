# Raspberry Pi SCADA — Circuit Schematic

- Course: Raspberry Pi based SCADA System
- Author: Ashraf S A AlMadhoun
- Link: https://www.udemy.com/course/raspberry-pi-scada-system-interface-raspberrypi/?couponCode=JULYMAXDICOUNT

## Connections

- Sensors: `GPIO22`, `GPIO23` (with appropriate pull-ups/downs).
- Actuator: `GPIO24` driving a relay via transistor driver.

## Diagram (ASCII)

```
 GPIO22 <- Sensor1      GPIO24 -> [Driver] -> Relay -> Load
 GPIO23 <- Sensor2      GND   -> Common ground
```

## Purchase With Discount

Get a discounted price and instrument your SCADA system — use the course link above.

