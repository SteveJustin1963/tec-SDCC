In this example, the trap_handler function is defined as the TSR for the trap. 
The IM2_TENABLE function enables traps, and the _setvectt function sets 
the trap vector to point to the trap_handler function. 
The _trap function is used to trigger the trap, and the _wait function 
causes the processor to wait for a trap to occur.
;;;;;;;;;;;;;;;
#include <z80.h>

// Trap service routine (TSR) for the trap
void trap_handler() __critical {
  // Do some processing here
  // ...
}

void main() {
  // Enable traps
  IM2_TENABLE();

  // Set trap vector
  _setvectt(0, trap_handler);

  // Do some other processing here
  // ...

  // Trigger the trap
  _trap();

  // Wait for trap
  _wait();
}
;;;;;

