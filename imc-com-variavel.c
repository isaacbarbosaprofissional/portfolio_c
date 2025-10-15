/*******************************************************************************
*        This project calculates BMI (Body Mass Index) and classifies it      *
*                      Authors: Isaac, Lucas, Thiago, Thomas                  *
*                        Date: April 15, 2025                                 *
*******************************************************************************/

#include <stdio.h>

// Function to calculate BMI
float imc(float weight, float height)
{
    return weight / (height * height); // BMI formula
}

int main(void) // main should return int
{
    float altura1, massa1, imc_res; // Variables for height, weight, and BMI

    // Ask user for height
    printf("Enter your height in meters: ");
    fflush(stdout);
    scanf("%f", &altura1);

    // Ask user for weight
    printf("Enter your weight in kilograms: ");
    fflush(stdout);
    scanf("%f", &massa1);

    // Calculate BMI
    imc_res = imc(massa1, altura1);

    // Display BMI
    printf("Your BMI is: %.2f kg/m^2\n", imc_res);

    // Classify BMI
    if (imc_res < 18.5)
    {
        printf("Classification: Underweight\n");
        printf("Obesity grade: 0\n");
    }
    else if (imc_res < 24.9)
    {
        printf("Classification: Normal\n");
        printf("Obesity grade: 0\n");
    }
    else if (imc_res < 29.9)
    {
        printf("Classification: Overweight\n");
        printf("Obesity grade: I\n");
    }
    else if (imc_res < 39.9)
    {
        printf("Classification: Obesity\n");
        printf("Obesity grade: II\n");
    }
    else
    {
        printf("Classification: Severe Obesity\n");
        printf("Obesity grade: III\n");
    }

    return 0; // Return 0 to indicate successful execution
}
