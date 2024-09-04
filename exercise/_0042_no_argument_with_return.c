/*
Filename: _0042_no_argument_with_return.c
Title: Functions with no arguments and with return type
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 4, 2024 | Last Updated: September 4, 2024
Language: C | Version: clang-14

Description:
This program calculates and returns the area and perimeter of a rectangle using functions that take no arguments but return the calculated values. The dimensions of the rectangle are taken as input from the user in the main function and are accessed globally within the area and perimeter functions.
*/

// Importing Required Libraries 
#include <stdio.h>  // Standard input/output library


// Global Variable Declaration: To store the dimensions of the rectangle
float length, width ;  // Global variables to be used across functions


// Function to calculate and return the area of the rectangle
// No arguments are passed to this function, but it returns the calculated area
float arearectangle(void) 
{
    return length * width ;  // Return the area of the rectangle
}


// Function to calculate and return the perimeter of the rectangle
// No arguments are passed to this function, but it returns the calculated perimeter
float perimeterrectangle(void) 
{
    return 2 * (length + width) ;  // Return the perimeter of the rectangle
}


// Main Function: Entry point of the program
int main() 
{
    // Display the purpose of the program
    printf("\nPerimeter And Area Of The Rectangle.\n\n") ; 

    // Prompt the user to enter the length of the rectangle
    printf("Enter The Length Of The Rectangle: ") && scanf("%f", &length) ; 
    
    // Prompt the user to enter the width of the rectangle
    printf("Enter The Width Of The Rectangle: ") && scanf("%f", &width) ; 
    
    // Call the area function and print the result
    printf("\nThe Area Of Rectangle: %.2f", arearectangle()); 
    
    // Call the perimeter function and print the result
    printf("\nThe Perimeter Of The Rectangle: %.2f\n", perimeterrectangle());

    // Return 0 to indicate successful execution
    return 0 ; 
}
