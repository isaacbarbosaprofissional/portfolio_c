/*******************************************************************************
*        This project converts a 4-bit binary number to decimal              *
*                      Author: Isaac dos Santos Barbosa                     *
*                        Date: April 15, 2025                                *
*******************************************************************************/

#include <stdio.h>

int main(void) // main should return int
{
    char bin4[5]; // Array to store 4-bit binary number (plus null terminator)
    int A = 0, B = 0, C = 0, D = 0, final;

    printf("Enter a 4-bit binary number: "); // Ask the user for a 4-bit binary
    fflush(stdout);
    scanf("%4s", bin4); // Read up to 4 characters

    // Convert each bit to its decimal value
    if (bin4[0] == '1') A = 8;
    if (bin4[1] == '1') B = 4;
    if (bin4[2] == '1') C = 2;
    if (bin4[3] == '1') D = 1;

    final = A + B + C + D; // Sum all decimal values
    printf("Decimal value: %d\n", final); // Display the decimal result

    return 0; // Return 0 to indicate successful execution
}
