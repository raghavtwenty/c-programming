/*
Filename: _0017_patterns.c
Title: Program To Print Integer and Character Patterns
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 5, 2024 | Last Updated: October 5, 2024
Language: C | Version: clang-14

Description:
This program prompts the user to enter an integer value and prints patterns based on that value. 
It first prints the character corresponding to each integer value from n down to 1, 
then prints the integers from 2 up to n.
*/

// Importing the standard input-output library
#include <stdio.h>

// Main
int main()
{
    // Variable declaration
    int n, i = 0, j = 0;
    char temp; // Variable to store the character representation

    // Prompting the user to enter an integer value
    printf("\nEnter An Integer Value: ");
    scanf("%d", &n);  // Reading the integer value

    // First loop: Printing the character corresponding to each integer value from n down to 1
    for (i = n; i >= 1; i--)
    {
        temp = (char)(i + '0'); // Convert integer to character
        printf("%c\n", temp); // Print the character
    }

    // Second loop: Printing integers from 2 up to n
    for (j = 2; j <= n; j++)
    {
        printf("%d\n", j); // Print the integer
    }

    return 0;
}
