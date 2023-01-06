 
#include <pwm.h>

void main() {
    pwm_init(50);  // Initialize the PWM with a frequency of 50 Hz

    while (1) {  // Loop indefinitely
        for (int i = 0; i <= 100; i++) {  // Loop through all possible duty cycles
            pwm_write(i);  // Set the duty cycle
            delay_ms(50);  // Delay for 50 ms
        }
    }
}
```
duty cycle 20:80
```
for (int i = 20; i <= 80; i++) {  // Loop through the range of duty cycles
    pwm_write(i);  // Set the duty cycle
    delay_ms(50);  // Delay for 50 ms
}
 
