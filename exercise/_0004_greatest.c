/*
Filename: _0004_greatest.c
Title: Greatest of Two Numbers
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 22, 2024 | Last Updated: August 22, 2024
Language: C | Version: clang-14

Description:
This program compares two floating-point numbers entered by the user and determines which one is greater. 
If the numbers are equal, the program informs the user that both numbers are the same.
*/

// Include the standard input/output library
#include <stdio.h>  

// Main function: Entry point of the program
int main()
{
    // Declare two floating-point variables: 'x' and 'y' for input
    float x, y;

    // Display the purpose of the program to the user
    printf("\nGreatest of Two Numbers\n");

    // Prompt the user to enter the first number and store the input in variable 'x'
    printf("Enter 1st Number: ") && scanf("%f", &x);

    // Prompt the user to enter the second number and store the input in variable 'y'
    printf("Enter 2nd Number: ") && scanf("%f", &y);

    // Compare the two numbers and display the appropriate message
    if (x > y)
        printf("\n1st Number Is Greater Than 2nd Number.\n");
    else if (x == y)
        printf("\nBoth Numbers Are Equal.\n");
    else
        printf("\n2nd Number Is Greater Than 1st Number.\n");

    // Return 0 to indicate successful execution of the program
    return 0;
}
