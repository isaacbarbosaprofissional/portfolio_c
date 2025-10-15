/*******************************************************************************
*             This code reads a name from the user and displays it             *
*                      Author: Isaac dos Santos Barbosa                        *
*                         Date: April 15, 2025                                 *
*******************************************************************************/

#include <stdio.h>

int main(void)  // main should return int
{
    char nome[100]; // Declare a character array to store the name

    printf("Enter your name: "); // Ask the user to enter their name
    scanf("%s", nome); // Read the name from input
    printf("The stored name is: %s", nome); // Print the stored name

    return 0; // Return 0 to indicate successful execution
}
