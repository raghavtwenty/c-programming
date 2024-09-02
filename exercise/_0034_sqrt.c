/* 
Filename: _0034_sqrt.c
Title: Square Root Calculation in C
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 2, 2024 | Last Updated: September 2, 2024
Language: C | Version: clang-14

Description:
This program calculates the square root of a number entered by the user. It uses the standard math library function `sqrt()` to compute the square root and displays the result to the user.
*/

// Importing necessary libraries
#include <stdio.h>  // Standard input/output library
#include <math.h>   // Math library for mathematical functions like sqrt()

// Main function: Entry point of the program
int main()
{
    // Declare a variable to store the user's input number
    float num;

    // Prompt the user to enter a number for which they want to find the square root
    printf("\nEnter A Number To Find The Square Root: ");
    scanf("%f", &num);  // Read the input and store it in the variable 'num'
    
    // Calculate the square root of the entered number using the sqrt() function
    // and display the result
    printf("\nSquare Root: %f", sqrt(num));  // sqrt(num) computes the square root
    
    // Return 0 to indicate successful execution of the program
    return 0;
}
