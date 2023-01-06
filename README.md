# tec-SDCC

## SDCC (Small Device C Compiler) 
is a free, open-source compiler for the C programming language. It was originally developed by Sandeep Dutta for use with the 8051 microcontroller, but has since been extended to support a wide range of microcontrollers and microprocessors. To compile a program with SDCC, you need to use the sdcc command followed by the source file name. For example, to compile a C program named ```myprogram.c``` you would use the command "sdcc myprogram.c". 
You can also use the -o option to specify an output file name, or the -c option to just compile the program without linking. 

## Zilog Z80 microprocessor. 
The Z80 is an 8-bit microprocessor that was widely used in the 1970s and 1980s in a variety of computer and consumer electronics products. It is still used today in some retrocomputing and hobbyist projects.

Here are some of the features of SDCC's support for the Z80:
- Generates code for the Z80 and its derivatives (e.g. Z180, EZ80)
- Supports all standard Z80 instructions and addressing modes
- Optimizing code generation for size and speed
- Provides a library of functions for accessing hardware devices and performing common tasks
- Interfacing with a variety of hardware devices, including serial ports, parallel ports, and ADCs
- Generating code for various output formats, including Intel HEX, binary, and relocatable object files

To use SDCC with the Z80, you will need to specify the --model-z80 flag when compiling your code. This will enable the Z80-specific features of the compiler and ensure that the generated code is compatible with the Z80.

use the sdcc command followed by the source file name and the ```-mz80``` option.   ```sdcc -mz80 myprogram.c```. 
Again You can also use the -o option to specify an output file name, or the -c option to just compile the program without linking.

## peripherals supported
not full list
- ADC (analog-to-digital converter)
- Accelerometer
- Audio codec
- Barometer
- Bluetooth module
- DAC (digital-to-analog converter)
- DMA (direct memory access) controller
- Ethernet interface
- GPIO (general-purpose input/output)
- GPS module
- GSM/GPRS modem
- Gyroscope
- Humidity sensor
- I2C bus
- Interrupts
- IR (infrared) receiver/transmitter
- LCD display
- Light sensor
- Magnetometer
- Motor controller
- NFC (near field communication) module
- OLED display
- Parallel port
- Pressure sensor
- Proximity sensor
- PWM (pulse-width modulation)
- Real-time clock
- SD card interface
- Serial port
- Servo motor controller
- Speech recognition module
- Stepper motor controller
- Temperature sensor
- Timers
- Touchscreen
- Touchscreen controller
- USB interface
- Watchdog timer
- Zigbee module




to use a serial port, 
you might use the serial.h library and functions such as serial_init(), serial_putchar(), and serial_getchar().
```serial.c```

## ADC (analog-to-digital converter) 
This code initializes the ADC and then reads the value from ADC channel 0 in an infinite loop. It prints the value to the console and delays for 500 ms before reading the value again.
```adc.c```



## DAC (digital-to-analog converter) 
is much the same, This code initializes the DAC and then writes all possible DAC values in an infinite loop, with a 50 ms delay between each value.
```dac.c```


##  I2C 
send: This code initializes the I2C bus and then sends a message to the device at address 0x01 in an infinite loop, with a 500 ms delay between each message.
```i2c-s.c```
read: This code initializes the I2C bus and then reads a message from the device at address 0x01 in an infinite loop, with a 500 ms delay between each read. The received message is printed to the console.
```i2c-r.c```

## PWM (pulse-width modulation) 
```pwm.c```



