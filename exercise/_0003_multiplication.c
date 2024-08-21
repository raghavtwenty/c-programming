/*
Filename: _0003_multiplication.c
Title: Multiplication of Two Numbers
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 21, 2024 | Last Updated: August 21, 2024
Language: C | Version: clang-14

Description:
This program performs the multiplication of two floating-point numbers entered by the user. 
It prompts the user to input two numbers, calculates their product, and displays the result.
*/

// Include the standard input/output library
#include <stdio.h>  

// Main function: Entry point of the program
int main()
{
    // Declare three floating-point variables: 'x' and 'y' for input, and 'mul' for the result
    float x, y, mul = 0;

    // Display the purpose of the program to the user
    printf("\nMultiplication\n");

    // Prompt the user to enter the first number and store the input in variable 'x'
    printf("Enter 1st Number: ") && scanf("%f", &x);

    // Prompt the user to enter the second number and store the input in variable 'y'
    printf("Enter 2nd Number: ") && scanf("%f", &y);

    // Perform the multiplication of 'x' and 'y' and store the result in 'mul'
    mul = x * y;

    // Display the result of the multiplication
    printf("\nMultiplication: %f \n", mul);

    // Return 0 to indicate successful execution of the program
    return 0;
}
