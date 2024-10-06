/*
Filename: _0019_number_string.c
Title: Program To Print Number Words Based On Integer Input
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 6, 2024 | Last Updated: October 6, 2024
Language: C | Version: clang-14

Description:
This program prompts the user to enter an integer value and prints the corresponding English word 
for numbers from 0 to 9. It also handles numbers greater than 9 and negative numbers by providing 
appropriate messages.
*/

// Importing the standard input-output library
#include <stdio.h>

// Main
int main()
{
    // Variable declaration
    int a;

    // Prompting the user to enter an integer value
    printf("\nEnter An Integer Value: ") && scanf("%d", &a);  

    // Conditional statements to print the corresponding word or message
    if (a == 0)
        printf("\nZero");
    else if (a == 1)
        printf("\nOne");
    else if (a == 2)
        printf("\nTwo");
    else if (a == 3)
        printf("\nThree");
    else if (a == 4)
        printf("\nFour");
    else if (a == 5)
        printf("\nFive");
    else if (a == 6)
        printf("\nSix");
    else if (a == 7)
        printf("\nSeven");
    else if (a == 8)
        printf("\nEight");
    else if (a == 9)
        printf("\nNine");
    else if (a > 9)
        printf("\nNumber Greater Than 9.");
    else // Handles the case for negative numbers
        printf("\nNumber Less Than 0.");

    return 0;  
}
