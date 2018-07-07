# Roboteq SDC21XX Controllers

This is a wio package for controlling Roboteq SDC21XX Brushless DC motor controllers.

**Wio Version**: >=0.3.2

**Platform**: AVR

**Framework**: Cosa

**Board**: All AVR boards supported

```bash
wio install cosa-roboteq-sdc21xx@latest --save
```

## Usage
Datasheet can be found from this series of controllers at [this link](https://www.roboteq.com/index.php/docman/motor-controllers-documents-and-files/documentation/datasheets/sdc21xx-datasheet/63-sdc21xx-datasheet/file).

This package uses PWM signal to control the controller, so make sure you set the pin you are connecting to as a PWM pin. This can be done through [Roboteq+ PC Utility](https://www.roboteq.com/index.php/docman/motor-controllers-documents-and-files/nxtgen-downloads-1/pc-utility).
