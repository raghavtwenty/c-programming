/*
Filename: _0011_factorial.c
Title: Factorial of a Number
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 24, 2024 | Last Updated: August 24, 2024
Language: C | Version: clang-14

Description:
This program calculates the factorial of a given integer. The user is prompted to input 
an integer, and the program then calculates the factorial using a loop and displays the result.
*/

// Include the standard input/output library
#include <stdio.h>  

// Main function: Entry point of the program
int main()
{
    // Declare integer variables: 'num' for input, 'fact' for factorial, and 'i' for loop control
    int num, fact = 1;
    int i = 1;  // Initialize loop counter to 1

    // Display the purpose of the program to the user
    printf("\nFactorial Of A Number.\n\n");

    // Prompt the user to enter an integer and store it in the variable 'num'
    printf("Enter an Integer: ");
    scanf("%d", &num);

    // Calculate the factorial using a while loop
    while (i <= num) {
        fact *= i;  // Multiply fact by the current value of 'i'
        i++;        // Increment 'i' for the next iteration
    }

    // Display the calculated factorial
    printf("\nFactorial of %d is %d\n", num, fact);

    // Return 0 to indicate successful execution of the program
    return 0;
}
