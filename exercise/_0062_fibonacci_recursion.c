/*
Filename: _0062_fibonacci_recursion.c
Title: Program To Print The Fibonacci Series Using Recursion
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 11, 2024 | Last Updated: September 11, 2024
Language: C | Version: clang-14

Description:
This program prints the Fibonacci series up to a given number of terms using recursion. The Fibonacci sequence starts with 0 and 1, and each subsequent number is the sum of the two preceding ones. The program takes an integer input representing the number of terms, and recursively calculates each term in the series.
*/


// Importing Required Libraries
#include <stdio.h>  // Standard input/output library for functions like printf, scanf


// Function to calculate the Fibonacci number at position 'i' using recursion
int fibonacci(int i)
{ 
    // Base case 1: if 'i' is 0, return 0 (the first term in the Fibonacci series)
    if(i == 0) 
    {
        return 0 ;
    }
    // Base case 2: if 'i' is 1, return 1 (the second term in the Fibonacci series)
    else if(i == 1) 
    {
        return 1 ;
    }
    // Recursive case: return the sum of the two preceding Fibonacci numbers
    else
    {
        return (fibonacci(i - 1) + fibonacci(i - 2)) ; 
    }
}


// Main function: Entry point of the program
int main()
{
    // Display the purpose of the program
    printf("\nProgram To Print The Fibonacci Series Using Recursion.\n\n") ;

    // Declare integer variables 'num' to store the number of terms and 'i' for loop iteration
    int num ;

    // Prompt the user to input the number of terms and store it in 'num'
    printf("Enter The Number: ") ;
    scanf("%d", &num) ;

    // Display the Fibonacci series
    printf("\nFibonacci Series: ") ;

    // Loop through the first 'num' terms and print the corresponding Fibonacci number
    for (int i = 1; i <= num; i++)
    {
        printf("%d ", fibonacci(i)) ;
    }

    // Return 0 to indicate successful execution
    return 0 ;
}
