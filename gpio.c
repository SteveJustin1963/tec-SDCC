#include <gpio.h>

void main() {
    gpio_init();  // Initialize the GPIO pins

    // Configure a pin as an output
    gpio_configure_pin(0, GPIO_OUTPUT);

    while (1) {  // Loop indefinitely
        gpio_write_pin(0, 1);  // Set the pin high
        delay_ms(500);  // Delay for 500 ms
        gpio_write_pin(0, 0);  // Set the pin low
        delay_ms(500);  // Delay for 500 ms
    }
}
