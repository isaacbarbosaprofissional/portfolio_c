/*******************************************************************************
*        This project prints the multiplication table of a number           *
*                      Authors: Isaac, Lucas, Thiago, Thomas               *
*                        Date: April 15, 2025                                *
*******************************************************************************/

#include <stdio.h>

int main(void) // main should return int
{
    int numero, i, resultado; // Declare integer variables for number, loop, and result

    // Ask the user for a number
    printf("Enter a number: ");
    fflush(stdout);
    scanf("%d", &numero); // Read the number

    // Loop from 1 to 10 and print the multiplication table
    for(i = 1; i <= 10; i++) {
        resultado = numero * i; // Calculate the result
        printf("%d x %d = %d\n", numero, i, resultado); // Display the result
    }

    return 0; // Return 0 to indicate successful execution
}
