/*******************************************************************************
*        This project calculates the GCD (Greatest Common Divisor) of two numbers *
*                      Author: Isaac dos Santos Barbosa                     *
*                        Date: April 15, 2025                                *
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n1, n2;

    // Ask the user for two numbers
    printf("Enter two numbers:\n");
    scanf("%d %d", &n1, &n2); // Read the two numbers

    // Calculate GCD using Euclidean subtraction method
    while(n1 != n2)
    {
        if(n1 > n2)
        {
            n1 = n1 - n2;
        }
        else
        {
            n2 = n2 - n1;
        }
    }

    // Print the GCD
    printf("The GCD of the two numbers is: %d\n", n1);

    return 0; // Return 0 to indicate successful execution
}
