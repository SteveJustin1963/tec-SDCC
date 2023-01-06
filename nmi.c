#include <interrupt.h>

void interrupt_handler() __interrupt {
    // This function will be called whenever an interrupt occurs

    // Clear the interrupt flag
    interrupt_clear();

    // Perform the necessary action for the interrupt
    // (e.g. reading data from a sensor, sending data over a serial port, etc.)
}

void main() {
    interrupt_init();  // Initialize the interrupt system

    // Enable the NMI interrupt
    interrupt_enable(INTERRUPT_NMI);

    while (1) {
        // Main program loop
    }
}
;;;;;;;;;;;;;;;;;;;;
#include <interrupt.h>

void interrupt_handler() __interrupt {
    // This function will be called whenever an interrupt occurs

    // Clear the interrupt flag
    interrupt_clear();

    // Perform the necessary action for the interrupt
    // (e.g. reading data from a sensor, sending data over a serial port, etc.)
}

void main() {
    interrupt_init();  // Initialize the interrupt system

    // Set the mode for the NMI interrupt
    interrupt_set_mode(INTERRUPT_NMI, INTERRUPT_MODE_LEVEL_TRIGGERED);

    // Enable the NMI interrupt
    interrupt_enable(INTERRUPT_NMI);

    while (1) {
        // Main program loop
    }
}
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
