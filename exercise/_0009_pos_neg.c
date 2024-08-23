/*
Filename: _0009_positive_or_negative.c
Title: Positive or Negative Number Check
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 23, 2024 | Last Updated: August 23, 2024
Language: C | Version: clang-14

Description:
This program checks whether a given integer is positive, negative, or zero. The user 
is prompted to input an integer, and the program then determines if the number is 
positive, negative, or zero based on the input.
*/

// Include the standard input/output library
#include <stdio.h>  

// Main function: Entry point of the program
int main()
{
    // Declare an integer variable 'num' for input
    int num;

    // Display the purpose of the program to the user
    printf("\nThe number is Positive or Negative.\n");

    // Prompt the user to enter an integer and store it in the variable 'num'
    printf("\nEnter any Integer number to check: ") && scanf("%d", &num);

    // Check if the number is positive
    if (num > 0)
        printf("\nThe number you have entered is Positive.\n");
    // Check if the number is negative
    else if (num < 0)
        printf("\nThe number you have entered is Negative.\n");
    // If the number is neither positive nor negative, it must be zero
    else
        printf("\nThe number you have entered is Zero.\n");

    // Return 0 to indicate successful execution of the program
    return 0;
}
