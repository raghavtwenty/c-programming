/*
Filename: _0063_n_natural_numbers.c
Title: Program To Print N Natural Numbers Using Recursion
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 11, 2024 | Last Updated: September 11, 2024
Language: C | Version: clang-14

Description:
This program prints the first N natural numbers using recursion. The function recursively counts down from the input number until it reaches 1, printing each number along the way. The recursion stops once the base case (when the number is less than or equal to 0) is met.
*/


// Importing Required Libraries
#include <stdio.h>  // Standard input/output library for functions like printf, scanf


// Function to print natural numbers from 'num' to 1 using recursion
void natural (int num)
{
    // Base case: if the number is less than or equal to 0, stop the recursion
    if (num <= 0) 
    {
        return; // No output, just stop the function
    }
    else 
    {
        // Print the current number
        printf ("%d\n", num) ;

        // Recursive call with (num - 1) to print the next lower number
        natural (num - 1) ;   
    }
}


// Main function: Entry point of the program
int main ()
{
    // Display the purpose of the program
    printf ("\nProgram To Print N Natural Numbers Using Recursion.\n\n") ;

    // Declare an integer variable 'num' to store the user's input
    int num ;

    // Prompt the user to input a number and store it in 'num'
    printf ("Enter The Number Of Terms: ") ;
    scanf("%d", &num) ;

    // Print the natural numbers using the recursive function
    printf ("\nN Natural Numbers Are: \n") ;
    natural (num) ;

    // Return 0 to indicate successful execution
    return 0 ;
}
