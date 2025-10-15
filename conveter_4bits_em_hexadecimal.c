/*******************************************************************************
*        This project converts a 4-bit binary number to hexadecimal          *
*                      Author: Isaac dos Santos Barbosa                     *
*                        Date: April 15, 2025                                *
*******************************************************************************/

#include <stdio.h>

int main(void) // main should return int
{
    char bintotal[5]; // 4 bits + null terminator
    int decimal; // To store the decimal value

    // Ask the user to enter a 4-bit binary number
    printf("Enter a 4-bit binary number: ");
    fflush(stdout);
    scanf("%4s", bintotal); // Read up to 4 characters

    // Convert binary to decimal
    decimal = (bintotal[0] - '0') * 8 +
              (bintotal[1] - '0') * 4 +
              (bintotal[2] - '0') * 2 +
              (bintotal[3] - '0') * 1;

    // Convert decimal to hexadecimal representation
    if (decimal >= 10 && decimal <= 15) {
        printf("%c\n", 'A' + (decimal - 10)); // A-F
    } else if (decimal <= 9) {
        printf("%d\n", decimal); // 0-9
    }

    return 0; // Return 0 to indicate successful execution
}
