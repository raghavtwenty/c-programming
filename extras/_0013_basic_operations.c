/*
Filename: _0013_basic_operations.c
Title: Program To Perform Basic Arithmetic Operations
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 4, 2024 | Last Updated: October 4, 2024
Language: C | Version: clang-14

Description:
This program performs basic arithmetic operations (addition and subtraction) on two integers and two float values. 
It prompts the user to enter two integers and two floating-point numbers, then displays the results of both addition 
and subtraction for each pair of numbers.
*/

// Importing the standard input-output library
#import <stdio.h>

// Main
int main()
{
    // Variable declaration
    int a, b;  // Variables to store integer inputs
    float c, d;  // Variables to store float inputs

    // Prompting the user to enter two integers
    printf("\nEnter Two Integers With Space: ") && scanf("%d %d", &a, &b);  

    // Prompting the user to enter two float values
    printf("\nEnter Two Float values With Space: ") && scanf("%f %f", &c, &d); 

    // Performing addition and subtraction on integers
    printf("\n%d %d", a + b, a - b);

    // Performing addition and subtraction on float values
    printf("\n%f %f\n", c + d, c - d);

    return 0;  
}
