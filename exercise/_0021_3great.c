/*
Filename: _0021_3great.c
Title: Find the Greatest of Three Numbers
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 27, 2024 | Last Updated: August 27, 2024
Language: C | Version: clang-14

Description:
This program takes three floating-point numbers as input from the user and determines the greatest among them using a conditional (ternary) operator.
*/

// Include the standard input/output library
#include <stdio.h>   

// Main function: Entry point of the program
int main()
{
    float a, b, c, d;  // Declare float variables for three numbers and the greatest number

    // Display the purpose of the program to the user
    printf("\nGreatest Of Three Numbers.\n\n");

    // Prompt the user to input three numbers
    printf("Enter 1st Number: ") &&  scanf("%f", &a);

    printf("Enter 2nd Number: ") && scanf("%f", &b);

    printf("Enter 3rd Number: ") && scanf("%f", &c);

    // Determine the greatest number using the conditional (ternary) operator
    d = (a >= b) && (a >= c) ? a : ((b > c) ? b : c);

    // Display the greatest number to the user
    printf("\nGreatest Number: %f\n", d);

    // Return 0 to indicate successful execution of the program
    return 0;
}
