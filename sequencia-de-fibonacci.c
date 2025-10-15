/*******************************************************************************
*                This project prints a Fibonacci sequence                      *
*                      Author: Isaac dos Santos Barbosa                        *
*                           Date: April 15, 2025                               *
*******************************************************************************/

#include <stdio.h>

int main(void) // main should return int
{
    int resultado; // Variable to store the current Fibonacci number
    int n1 = 0;    // Previous Fibonacci number
    int n2 = 1;    // Current Fibonacci number
    int loop;      // Number of Fibonacci numbers to generate

    // Ask the user for the number of Fibonacci terms
    printf("Enter the number of Fibonacci terms: ");
    fflush(stdout);
    scanf("%d", &loop); // Save user input

    // Generate Fibonacci sequence
    while (loop >= 1)
    {
        resultado = n2 + n1; // Calculate next Fibonacci number
        printf("%d ", resultado); // Display the result
        n2 = n1;     // Update previous number
        n1 = resultado; // Update current number
        loop = loop - 1; // Decrement loop counter
    }

    printf("\n"); // Move to next line after printing sequence
    return 0; // Return 0 to indicate successful execution
}
