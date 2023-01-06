#include <accelerometer.h>

void main() {
    accelerometer_init();  // Initialize the accelerometer

    while (1) {  // Loop indefinitely
        int x, y, z;  // Declare variables to hold the acceleration values

        // Read the acceleration values
        accelerometer_read(&x, &y, &z);

        // Print the acceleration values to the console
        printf("Acceleration: X=%d Y=%d Z=%d\n", x, y, z);

        delay_ms(500);  // Delay for 500 ms
    }
}
