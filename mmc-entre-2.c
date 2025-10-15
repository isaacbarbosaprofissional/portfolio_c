/*******************************************************************************
*       This project calculates the LCM (Least Common Multiple) of two numbers *
*                      Author: Isaac dos Santos Barbosa                        *
*                        Date: April 15, 2025                                  *
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n1, n2, max;

    // Ask the user for two positive integers
    printf("Enter two positive integers: ");
    fflush(stdout);
    scanf("%d %d", &n1, &n2);

    // Determine the starting point (the maximum of the two numbers)
    max = (n1 > n2) ? n1 : n2;

    // Infinite loop until LCM is found
    while(1)
    {
        if(max % n1 == 0 && max % n2 == 0) // Check if max is divisible by both numbers
        {
            printf("The LCM of the two numbers is: %d\n", max);
            break;
        }
        ++max; // Increment max and check again
    }

    return 0; // Return 0 to indicate successful execution
}
