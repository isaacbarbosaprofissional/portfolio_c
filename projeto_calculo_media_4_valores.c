/*******************************************************************************
*        This project calculates the average of four grades and evaluates   *
*                      Authors: Thiago and Isaac                             *
*                        Date: April 15, 2025                                *
*******************************************************************************/

#include <stdio.h>

int main(void) // main should return int
{
    float nota1, nota2, nota3, nota4, media; // Define the variables

    // Ask the user for four grades
    printf("Enter the four grades: ");
    fflush(stdout);
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    // Calculate the average
    media = (nota1 + nota2 + nota3 + nota4) / 4;

    // Display the average
    printf("Your average is: %.1f\n", media);

    // Evaluate the result
    if (media >= 9) { // Average 9 or higher: excellence
        printf("APPROVED WITH EXCELLENCE\n");
    }
    else if (media >= 6) { // Average 6 or higher: approved
        printf("APPROVED\n");
    }
    else { // Average below 6: failed
        printf("FAILED\n");
    }

    return 0; // Return 0 to indicate successful execution
}
