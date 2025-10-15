/*******************************************************************************
*        This project converts Celsius to Fahrenheit                         *
*                      Authors: Thiago and Isaac                             *
*                        Date: April 15, 2025                                 *
*******************************************************************************/

#include <stdio.h>

int main(void) // main should return int
{
    float temC, temF; // Here we define the variables

    printf("Enter temperature in Celsius: "); // Ask the user for temperature in Celsius
    fflush(stdout); // Ensure prompt appears before input
    scanf("%f", &temC); // Read the temperature entered

    temF = (temC * 1.8) + 32; // Perform the conversion

    printf("Your temperature in Fahrenheit: %.1f\n", temF); // Display the result

}
