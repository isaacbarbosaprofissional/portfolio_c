/*******************************************************************************
*     This project converts Celsius to Fahrenheit and simulates a thermostat   * 
*                      Authors: Arthur and Isaac                               *
*                        Date: April 15, 2025                                  *
*******************************************************************************/

#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float temF(float C)
{
    return (C * 1.8) + 32; // Perform the conversion
}

int main(void) // main should return int
{
    float temC, temFinal; // Define the variables

    // Ask the user for temperature in Celsius
    printf("Enter temperature in Celsius: ");
    fflush(stdout);
    scanf("%f", &temC); // Read input

    // Convert to Fahrenheit
    temFinal = temF(temC);
    printf("Temperature in Fahrenheit: %.1f\n", temFinal); // Display result

    // Simulate thermostat actions
    if (temC < 22)
    {
        printf("Activate heating\n"); // Heating needed
    }
    else if (temC > 22)
    {
        printf("Activate cooling\n"); // Cooling needed
    }
    else
    {
        printf("Temperature is perfect\n"); // Optimal temperature
    }

    return 0; // Return 0 to indicate successful execution
}
