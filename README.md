# Roboteq SDC21XX Controllers

This is a wio package for Cosa that provides ability to control Roboteq SDC21XX Brushless DC motor controllers.

## Usage
Datasheet can be found from this series of controllers at [this link](https://www.roboteq.com/index.php/docman/motor-controllers-documents-and-files/documentation/datasheets/sdc21xx-datasheet/63-sdc21xx-datasheet/file).

This package uses PWM signal to control the controller, so make sure you set the pin you are connecting to as a PWM pin. This can be done through [Roboteq+ PC Utility](https://www.roboteq.com/index.php/docman/motor-controllers-documents-and-files/nxtgen-downloads-1/pc-utility).


Define a controller `wlp::SDC21XX sdc(Board::PWM1)`. You have to provide it `PWM` pin.

change speed using:
```cpp
sdc.set_speed(0);
sdc.set_speed(37);
sdc.set_speed(100);
```

## Install
```bash
wio install cosa-roboteq-sdc21xx
```
