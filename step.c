;;;;;;;;;;;;
code initializes the stepper motor controller and sets the step mode to 1/4-step mode 
and the speed to 200 steps per second. 
It then moves the motor 100 steps in the forward direction and waits for it to stop moving. 
It then moves the motor 100 steps in the reverse direction and waits for it to stop moving again.

;
;
#include <stepper.h>

void main() {
    stepper_init();  // Initialize the stepper motor controller

    // Set the step mode to 1/4-step mode
    stepper_set_step_mode(STEPPER_STEP_MODE_1_4);

    // Set the speed to 200 steps per second
    stepper_set_speed(200);

    // Move the motor 100 steps in the forward direction
    stepper_move(100, STEPPER_DIRECTION_FORWARD);

    // Wait for the motor to stop moving
    while (stepper_is_moving()) {
        delay_ms(10);
    }

    // Move the motor 100 steps in the reverse direction
    stepper_move(100, STEPPER_DIRECTION_REVERSE);

    // Wait for the motor to stop moving
    while (stepper_is_moving()) {
        delay_ms(10);
    }
}
;;;;;;;;;;;;;;;
