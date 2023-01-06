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
