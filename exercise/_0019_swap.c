/*
Filename: _0019_swap.c
Title: Swapping Two Numbers Without Using a Temporary Variable
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 27, 2024 | Last Updated: August 27, 2024
Language: C | Version: clang-14

Description:
This program swaps the values of two integers without using a temporary variable. 
It uses arithmetic operations to exchange the values of the two variables.
*/


// Include the standard input/output library
#include <stdio.h> 

// Main function: Entry point of the program
int main()
{
    int a, b;  // Declare integer variables for the two numbers

    // Display the purpose of the program to the user
    printf("\nSwap Two Numbers Without Using a Temporary Variable\n\n");

    // Prompt the user to input the first number
    printf("Enter 1st Number:  ") && scanf("%d", &a);

    // Prompt the user to input the second number
    printf("Enter 2nd Number:  ") && scanf("%d", &b);

    // Swap the values of the two numbers using arithmetic operations
    a = a + b;  // Store the sum of a and b in a
    b = a - b;  // Subtract the original value of b (stored in a) from a to get the original value of a
    a = a - b;  // Subtract the new value of b (original value of a) from a to get the original value of b

    // Display the swapped values to the user
    printf("\nAfter Swapping:\n");
    printf("1st Number: %d\n", a);
    printf("2nd Number: %d\n", b);

    // Return 0 to indicate successful execution of the program
    return 0;
}
