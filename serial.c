#include <serial.h>

void main() {
    serial_init(9600);  // Initialize the serial port with a baud rate of 9600

    serial_putchar('H');  // Send the character 'H' over the serial port
    serial_putchar('e');  // Send the character 'e' over the serial port
    serial_putchar('l');  // Send the character 'l' over the serial port
    serial_putchar('l');  // Send the character 'l' over the serial port
    serial_putchar('o');  // Send the character 'o' over the serial port

    char c = serial_getchar();  // Wait for a character to be received over the serial port
    serial_putchar(c);  // Send the received character back to the sender
}
;;;;;;;;;;;;;;;
make a loop

#include <serial.h>

void main() {
    serial_init(9600);  // Initialize the serial port with a baud rate of 9600

    char message[] = "Hello";  // Create an array with the message to send
    int i;  // Declare a variable to use in the loop

    for (i = 0; i < 5; i++) {  // Loop through the characters in the message
        serial_putchar(message[i]);  // Send the character over the serial port
    }

    char c = serial_getchar();  // Wait for a character to be received over the serial port
    serial_putchar(c);  // Send the received character back to the sender
}
;;;;;;;;;;;;;;;;
