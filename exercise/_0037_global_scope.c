/*
Filename: _0037_global_scope.c
Title: Program demonstrating the use of global scope variables
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 3, 2024 | Last Updated: September 3, 2024
Language: C | Version: clang-14

Description:
This program demonstrates the use of global scope variables in C. The variables `num1` and `num2` are declared globally, allowing them to be accessed and modified by any function within the program. The program includes functions for addition, subtraction, and multiplication, which operate on these global variables.
*/


// Importing Required Libraries
#include <stdio.h>  // Standard input/output library


// Global Declaration: Declaring global variables that can be accessed by any function in this file
int num1, num2;  


// Main Function: Entry point of the program
int main()
{   
    // Display the purpose of the program
    printf("\nProgram For Global Scope Declaration.\n\n");
    
    // Function Declarations: Declaring the functions used in the program
    void addition();       // Function to perform addition
    void subtraction();    // Function to perform subtraction
    void multiplication(); // Function to perform multiplication
    
    // Initialize global variables
    num1 = 10;  // Assigning value 10 to global variable 'num1'
    num2 = 20;  // Assigning value 20 to global variable 'num2'
    
    // Output the initial values of the global variables
    printf("Number 1 = %d, Number 2 = %d\n", num1, num2);
    
    // Call the functions to perform arithmetic operations
    addition();      // Call the addition function
    subtraction();   // Call the subtraction function 
    multiplication();// Call the multiplication function

    // Return 0 to indicate successful execution of the program
    return 0;
}


// Addition Function: Performs addition of the global variables 'num1' and 'num2'
void addition()
{
    int result;  // Local variable to store the result of the addition
    result = num1 + num2;  // Add the global variables
    printf("Addition = %d\n", result);  // Output the result
}


// Subtraction Function: Performs subtraction of the global variables 'num1' and 'num2'
void subtraction()
{
    int result;  // Local variable to store the result of the subtraction
    result = num1 - num2;  // Subtract 'num2' from 'num1'
    printf("Subtraction = %d\n", result);  // Output the result
}


// Multiplication Function: Performs multiplication of the global variables 'num1' and 'num2'
void multiplication()
{
    int result;  // Local variable to store the result of the multiplication
    result = num1 * num2;  // Multiply the global variables
    printf("Multiplication = %d\n", result);  // Output the result
}
