/*******************************************************************************
*             This project calculates BMI (Body Mass Index)                  *
*                      Authors: Thiago and Isaac                             *
*                        Date: April 15, 2025                                 *
*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char alturaStr[20], massaStr[20];
    float altura1, massa1, imc;

    // Read height as string
    printf("Enter your height in meters: ");
    fflush(stdout);
    scanf("%s", alturaStr);
    // Replace comma with dot if needed
    for(int i=0; i<strlen(alturaStr); i++)
        if(alturaStr[i] == ',') alturaStr[i] = '.';
    altura1 = atof(alturaStr); // Convert to float

    // Read weight as string
    printf("Enter your weight in kilograms: ");
    fflush(stdout);
    scanf("%s", massaStr);
    for(int i=0; i<strlen(massaStr); i++)
        if(massaStr[i] == ',') massaStr[i] = '.';
    massa1 = atof(massaStr);

    // Calculate BMI
    imc = massa1 / (altura1 * altura1);
    printf("Your BMI is: %.2f kg/m^2\n", imc);

    return 0;
}
