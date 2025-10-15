/*******************************************************************************
*             This code demonstrates basic string manipulation                 *
*                      Author: Isaac dos Santos Barbosa                        *
*                           Date: April 15, 2025                               *
*******************************************************************************/

#include <stdio.h>

void main(void)
{
    char letra[10] = "Joao"; // Declare a string "Joao"
    printf("\nThe string is: %s", letra); // Print the string
    printf("\nThe SECOND letter is: %c", letra[1]); // Print the second character of the string
    letra[1] = 'U'; // Change the second character to 'U'
    printf("\nNow the second letter is: %c", letra[1]); // Print the updated second character
    printf("\n\nThe resulting string: %s", letra); // Print the resulting string
}
