/*
Filename: _0061_factorial_recursion.c
Title: Program To Find Factorial Using Recursion
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 11, 2024 | Last Updated: September 11, 2024
Language: C | Version: clang-14

Description:
This program calculates the factorial of a given number using recursion. The factorial function is defined as the product of the given number and the factorial of the number minus one. The base case is when the number is zero, where the function returns 1 (since 0! is defined as 1). The program takes an integer as input from the user, and outputs its factorial.
*/


// Importing Required Libraries
#include <stdio.h>  // Standard input/output library for functions like printf, scanf


// Function to calculate factorial using recursion
int factorial(int num)
{
    // Base case: if the number is 0, return 1 (since 0! = 1)
    if (num == 0)
    {
        return 1 ;
    }
    // Recursive case: return the product of the number and the factorial of (num - 1)
    return num * factorial(num - 1);
}


// Main function: Entry point of the program
int main()
{
    // Display the purpose of the program
    printf("\nProgram To Find Factorial Using Recursion.\n\n") ;

    // Declare an integer variable 'num' to hold the user's input
    int num ;

    // Prompt the user to input a number and store it in the 'num' variable
    printf("Enter The Number: ") ;
    scanf("%d", &num) ;

    // Display the result: factorial of the entered number
    printf("\nFactorial Of %d Is : %d\n", num, factorial(num)) ;

    // Return 0 to indicate successful execution
    return 0 ;
}
