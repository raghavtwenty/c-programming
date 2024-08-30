/*
Filename: _0029_mid_ternary.c
Title: Find the Middle of Three Numbers in C
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 30, 2024 | Last Updated: August 30, 2024
Language: C | Version: clang-14

Description:
This program determines the middle value of three integers provided by the user. The middle value is the number that is neither the maximum nor the minimum of the three. The program uses a nested conditional (ternary) operator to find the middle value.
*/

// Include the standard input/output library
#include <stdio.h>

// Main function: Entry point of the program
int main() 
{ 
    int a, b, c, d;  // Declare integer variables to hold the three input numbers and the middle value

    // Prompt the user to enter three numbers
    printf("\nEnter 3 numbers: ") && scanf("%d %d %d", &a, &b, &c);  // Read the three integers from user input

    // Determine the middle value using a nested ternary operator
    d = (a < b) && (a > c) ? a : ((c < a) && (c > b) ? c : b);

    // Print the middle value
    printf("The middle of these numbers is: %d\n\n", d);

    // Return 0 to indicate successful execution of the program
    return 0;
}
