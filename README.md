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


## to use a serial port, 
you might use the serial.h library and functions such as serial_init(), serial_putchar(), and serial_getchar().
```
#include <serial.h>

void main() {
    serial_init(9600);  // Initialize the serial port with a baud rate of 9600

    serial_putchar('H');  // Send the character 'H' over the serial port
    serial_putchar('e');  // Send the character 'e' over the serial port
    serial_putchar('l');  // Send the character 'l' over the serial port
    serial_putchar('l');  // Send the character 'l' over the serial port
    serial_putchar('o');  // Send the character 'o' over the serial port

    char c = serial_getchar();  // Wait for a character to be received over the serial port
    serial_putchar(c);  // Send the received character back to the sender
}
```
make a loop

```
#include <serial.h>

void main() {
    serial_init(9600);  // Initialize the serial port with a baud rate of 9600

    char message[] = "Hello";  // Create an array with the message to send
    int i;  // Declare a variable to use in the loop

    for (i = 0; i < 5; i++) {  // Loop through the characters in the message
        serial_putchar(message[i]);  // Send the character over the serial port
    }

    char c = serial_getchar();  // Wait for a character to be received over the serial port
    serial_putchar(c);  // Send the received character back to the sender
}
```

## ADC (analog-to-digital converter) 
This code initializes the ADC and then reads the value from ADC channel 0 in an infinite loop. It prints the value to the console and delays for 500 ms before reading the value again.
```
#include <adc.h>

void main() {
    adc_init();  // Initialize the ADC

    while (1) {  // Loop indefinitely
        int value = adc_read(0);  // Read the value from ADC channel 0
        printf("ADC value: %d\n", value);  // Print the value to the console
        delay_ms(500);  // Delay for 500 ms
    }
}
```
## DAC (digital-to-analog converter) 
is much the same, This code initializes the DAC and then writes all possible DAC values in an infinite loop, with a 50 ms delay between each value.
```
#include <dac.h>

void main() {
    dac_init();  // Initialize the DAC

    while (1) {  // Loop indefinitely
        for (int i = 0; i < 256; i++) {  // Loop through all possible DAC values
            dac_write(i);  // Write the DAC value
            delay_ms(50);  // Delay for 50 ms
        }
    }
}
```

##  I2C 
send: This code initializes the I2C bus and then sends a message to the device at address 0x01 in an infinite loop, with a 500 ms delay between each message.
```
#include <i2c.h>

void main() {
    i2c_init();  // Initialize the I2C bus

    while (1) {  // Loop indefinitely
        // Send a message to the device at address 0x01
        i2c_start();
        i2c_write(0x01);  // Send the address of the device (with the write bit set)
        i2c_write(0xAA);  // Send a message byte
        i2c_stop();

        delay_ms(500);  // Delay for 500 ms
    }
}
```
read: This code initializes the I2C bus and then reads a message from the device at address 0x01 in an infinite loop, with a 500 ms delay between each read. The received message is printed to the console.

```
#include <i2c.h>

void main() {
    i2c_init();  // Initialize the I2C bus

    while (1) {  // Loop indefinitely
        // Read a message from the device at address 0x01
        i2c_start();
        i2c_write(0x01);  // Send the address of the device (with the write bit set)
        i2c_write(0x00);  // Send the register address to read from
        i2c_stop();
        i2c_start();
        i2c_write(0x01 | 0x01);  // Send the address of the device (with the read bit set)
        char c = i2c_read(0);  // Read a byte from the device
        i2c_stop();

        printf("Received: %c\n", c);  // Print the received byte to the console

        delay_ms(500);  // Delay for 500 ms
    }
}
```


