;;;;;;;;;;;;
#include <adc.h>

void main() {
    adc_init();  // Initialize the ADC

    while (1) {  // Loop indefinitely
        int value = adc_read(0);  // Read the value from ADC channel 0
        printf("ADC value: %d\n", value);  // Print the value to the console
        delay_ms(500);  // Delay for 500 ms
    }
}
;;;;;;;;;;;;


