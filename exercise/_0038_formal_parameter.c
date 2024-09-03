/*
Filename: _0038_formal_parameter.c
Title: Formal parameters in with functions in C
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 3, 2024 | Last Updated: September 3, 2024
Language: C | Version: clang-14

Description:
This program demonstrates the use of formal parameters in C. The function `addition` takes two integers as formal parameters and returns their sum. The main function initializes two integers and passes them to the `addition` function, illustrating how arguments are passed from the main function to another function using formal parameters.
*/


// Importing Required Libraries
#include <stdio.h>  // Standard input/output library


// Main Function: Entry point of the program
int main()
{
    // Display the purpose of the program
    printf("\nProgram For Formal Parameters.\n\n");

    // Function Declaration: Declaring the addition function with formal parameters
    void addition(int, int);

    // Local Variable Declarations
    int num1, num2;

    // Initialize the variables with values
    num1 = 10;  // Assign 10 to num1
    num2 = 20;  // Assign 20 to num2

    // Call the addition function with num1 and num2 as arguments
    addition(num1, num2);

    // Return 0 to indicate successful execution of the program
    return 0;
}


// Addition Function: Computes the sum of two integers passed as formal parameters
void addition(int a, int b)
{
    int sumresult;  // Local variable to store the result of the addition
    sumresult = a + b;  // Add the formal parameters 'a' and 'b'
    printf("Addition = %d\n", sumresult);  // Output the result
}
