/*******************************************************************************
*        This project converts an 8-bit binary number to hexadecimal         *
*                      Author: Isaac dos Santos Barbosa                     *
*                        Date: April 15, 2025                                *
*******************************************************************************/

#include <stdio.h>

int main(void) // main should return int
{
    char bintotal[9]; // 8 bits + null terminator
    char hexavaloress[] = "0123456789ABCDEF"; // Mapping from 0-15 to hexadecimal characters

    int decimal = 0; // To store the decimal value

    // Ask the user to enter an 8-bit binary number
    printf("Enter an 8-bit binary number: ");
    fflush(stdout);
    scanf("%8s", bintotal); // Read up to 8 characters

    // Convert the 8-bit binary number to decimal
    decimal = (bintotal[0] - '0') * 128 +
              (bintotal[1] - '0') * 64 +
              (bintotal[2] - '0') * 32 +
              (bintotal[3] - '0') * 16 +
              (bintotal[4] - '0') * 8 +
              (bintotal[5] - '0') * 4 +
              (bintotal[6] - '0') * 2 +
              (bintotal[7] - '0') * 1;

    // Convert decimal to hexadecimal and display
    int high_digit = decimal / 16;  // Most significant digit
    int low_digit  = decimal % 16;  // Least significant digit

    printf("Hexadecimal: %c%c\n", hexavaloress[high_digit], hexavaloress[low_digit]);

    return 0; // Return 0 to indicate successful execution
}
