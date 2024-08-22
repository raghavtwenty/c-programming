/*
Filename: _0005_odd_even.c
Title: Odd or Even
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 22, 2024 | Last Updated: August 22, 2024
Language: C | Version: clang-14

Description:
This program determines whether a given integer is odd or even. The user is prompted 
to input a number, and the program checks if it is divisible by 2. It then displays 
whether the number is odd or even.
*/

// Include the standard input/output library
#include <stdio.h>  

// Main function: Entry point of the program
int main()
{
    // Declare an integer variable 'x' for input
    int x;

    // Display the purpose of the program to the user
    printf("\nOdd or Even\n");

    // Prompt the user to enter a number and store the input in variable 'x'
    printf("Enter A Number To Check: ") && scanf("%d", &x);

    // Check if the number is divisible by 2
    if (x % 2 == 0)
        // If the number is divisible by 2, it is even
        printf("\nThe Number You Have Entered Is Even.\n");
    else
        // If the number is not divisible by 2, it is odd
        printf("\nThe Number You Have Entered Is Odd.\n");

    // Return 0 to indicate successful execution of the program
    return 0;
}
