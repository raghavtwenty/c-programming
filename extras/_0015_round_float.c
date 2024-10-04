/*
Filename: _0015_round_float.c
Title: Program To Round A Floating-Point Number
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 4, 2024 | Last Updated: October 4, 2024
Language: C | Version: clang-14

Description:
This program reads a floating-point number from the user and rounds it to the nearest integer using the `round()` function from the `math.h` library. The result is then displayed to the user.
*/

// Importing the standard input-output and math libraries
#include <stdio.h>
#include <math.h>

// Function to round a floating-point number
int rou(float a)
{
    return round(a);  // Returning the rounded integer value
}

// Main function
int main()
{
    // Variable declaration
    float a;

    // Prompting the user to enter a float value
    printf("Enter a float value: ");
    scanf("%f", &a);  // Reading the floating-point number

    // Displaying the rounded value using the ro() function
    printf("\nRound of %f is: %d\n", a, rou(a));

    return 0;  
}
