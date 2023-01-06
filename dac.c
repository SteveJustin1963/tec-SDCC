;;;;;
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
;;;;;;;;;;;;;

