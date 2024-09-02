/*
Filename: _0035_scope.c
Title: Normal variable scopes in c
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 2, 2024 | Last Updated: September 2, 2024
Language: C | Version: clang-14

Description:
This program demonstrates the concept of local scope in C. Local variables are those that are declared within a function or block, and they are only accessible within that scope. The program defines three local variables, assigns values to them, and then computes and prints their sum.
*/


// Importing Required Functions
#include <stdio.h>  // Standard input/output library

// Main Function: Entry point of the program
int main() 
{
    // Display the purpose of the program
    printf("\nProgram On Scope.\n\n");

    // Local Declaration: Declaring three integer variables within the local scope of the main function
    int a, b, c;

    // Actual Declaration: Assigning values to the variables
    a = 10;  // Assigning the value 10 to variable 'a'
    b = 20;  // Assigning the value 20 to variable 'b'
    c = a + b;  // Calculating the sum of 'a' and 'b' and storing it in 'c'

    // Output the values of the variables
    printf("Value Of a = %d, b = %d and c = %d\n", a, b, c);

    // Return 0 to indicate successful execution of the program
    return 0;
}
