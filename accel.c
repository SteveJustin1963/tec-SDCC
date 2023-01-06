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


\\\\\\\\\\\\
forth

\ Include any required libraries or header files here

: accelerometer_init  \ Initialize the accelerometer
  \ Implementation goes here
;

: accelerometer_read  \ Read the acceleration values
  \ x y z  \ Declare local variables
  \ Implementation goes here
;

: delay_ms  \ Delay for the given number of milliseconds
  \ ms  \ Declare local variable
  \ Implementation goes here
;

: main
  accelerometer_init
  begin
    s" Acceleration: X=" . x . cr
    accelerometer_read x y z
    s" Y=" . y . cr
    s" Z=" . z . cr
    500 ms
  again
;
\\\\\\\\\\\\
