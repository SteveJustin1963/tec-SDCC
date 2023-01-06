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

