/*
Filename: _0031_pascals_tri.c
Title: Pascal's Triangle Printer in C
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 1, 2024 | Last Updated: September 1, 2024
Language: C | Version: clang-14

Description:
This program prints a simple version of Pascal's Triangle using asterisks (*) to the console. The user specifies the number of lines to be displayed, and the program generates that many rows of Pascal's Triangle, where each row contains an increasing number of asterisks.
*/

// Include the standard input/output library
#include <stdio.h>

// Main function: Entry point of the program
int main()
{
    int n, i = 1;  // Declare and initialize variables: 'n' for the number of lines and 'i' for the outer loop counter

    // Display a message to indicate the start of the program
    printf("\nPascal's Triangle\n\n");

    // Prompt the user to enter the number of lines for Pascal's Triangle
    printf("Enter Number Of Lines To Be Displayed: ");
    scanf("%d", &n);  // Read the user's input

    // Outer loop to iterate over each line
    while (i <= n)
    {
        int j = 1;  // Initialize an inner loop counter 'j' for the number of asterisks in each line

        // Inner loop to print the asterisks for the current line
        while (j <= i)
        {
            printf("*");  // Print an asterisk without a newline
            j++;  // Increment the inner loop counter
        }

        printf("\n");  // Print a newline after each row of asterisks
        i++;  // Increment the outer loop counter to move to the next line
    }

    return 0;  // Return 0 to indicate successful execution of the program
}
