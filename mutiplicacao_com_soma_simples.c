/*******************************************************************************
*        This project multiplies two integers using repeated addition        *
*                      Author: Isaac dos Santos Barbosa                     *
*                        Date: April 15, 2025                                *
*******************************************************************************/

#include <stdio.h>

int main(void) // main should return int
{
    int a, b, resultado = 0;

    // Ask the user for two integers greater than 1
    printf("Enter two integers greater than 1: ");
    fflush(stdout);
    scanf("%d %d", &a, &b);

    // Validate input
    if (a <= 1 || b <= 1) {
        printf("Error: both numbers must be greater than 1.\n");
        return 1; // Exit the program with error
    }

    // Multiplication via repeated addition
    while (b > 0) {
        resultado += a; // Add 'a' to the result
        b--;            // Decrement b
    }

    // Display the result
    printf("Result of multiplication: %d\n", resultado);

    return 0; // Return 0 to indicate successful execution
}
