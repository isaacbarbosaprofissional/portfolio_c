/*******************************************************************************
*        This project calculates the average of two numbers                 *
*                      Authors: Arthur and Isaac                             *
*                        Date: April 15, 2025                                *
*******************************************************************************/

#include <stdio.h>

// Function to calculate the average of two numbers
float media(float A, float B)
{
    return (A + B) / 2; // Return the average
}

int main(void) // main should return int
{
    float nota1, nota2, MF; // Declare local variables

    // Ask the user for the two grades
    printf("Enter the two grades: ");
    fflush(stdout);
    scanf("%f %f", &nota1, &nota2); // Read the grades

    MF = media(nota1, nota2); // Calculate the average
    printf("Your average is: %.1f\n", MF); // Display the average

    return 0; // Return 0 to indicate successful execution
}
