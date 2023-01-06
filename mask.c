In this example, the interrupt_handler function is defined as the ISR for the maskable interrupt. 
The IM2_IENABLE function enables maskable interrupts, and the _setvecti function 
sets the interrupt vector to point to the interrupt_handler function. 
When the interrupt occurs, the processor will jump to the interrupt_handler function to handle 
the interrupt, before returning to the original task. 
The _wait function causes the processor to wait for an interrupt to occur.
Keep in mind that this is just one example of how to handle a maskable interrupt in SDCC for the Z80 processor. 
There are many other ways to do this, and the exact implementation may vary depending on your specific needs.

;;;;;
#include <z80.h>

// Interrupt service routine (ISR) for the maskable interrupt
void interrupt_handler() __critical {
  // Do some processing here
  // ...
}

void main() {
  // Enable maskable interrupts
  IM2_IENABLE();

  // Set interrupt vector
  _setvecti(0, interrupt_handler);

  // Do some other processing here
  // ...

  // Wait for interrupt
  _wait();
}
;;;;;;;;;

In this example, there are three devices that can generate maskable interrupts. 
Each device has its own ISR defined, and the interrupt vectors are set to point to 
the appropriate ISR for each device. When an interrupt occurs, 
the processor will jump to the correct ISR based on the interrupt vector that was set.
;
#include <z80.h>

// Interrupt service routines (ISRs) for each device
void device1_isr() __critical {
  // Do some processing for device 1
  // ...
}

void device2_isr() __critical {
  // Do some processing for device 2
  // ...
}

void device3_isr() __critical {
  // Do some processing for device 3
  // ...
}

void main() {
  // Enable maskable interrupts
  IM2_IENABLE();

  // Set interrupt vectors for each device
  _setvecti(0, device1_isr);
  _setvecti(1, device2_isr);
  _setvecti(2, device3_isr);

  // Do some other processing here
  // ...

  // Wait for interrupt
  _wait();
}
;;;;;;;;;;;;;;;;;;
