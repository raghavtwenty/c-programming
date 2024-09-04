/*
Filename: _0041_no_argument_no_return.c
Title: Function with no arguments and no return type
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 4, 2024 | Last Updated: September 4, 2024
Language: C | Version: clang-14

Description:
This program calculates and displays the area and perimeter of a rectangle using a function that has no arguments and does not return any value. The dimensions of the rectangle are taken as input from the user in the main function and are accessed by the area and perimeter function using global variables.
*/


// Importing Required Libraries 
#include<stdio.h>  // Standard input/output library


// Global Variable Declaration: To store the dimensions of the rectangle
float length, width ;  // Global variables to be used across functions


// Function to calculate and print the area and perimeter of the rectangle
// No arguments are passed to this function, and it does not return any value
void arearectangleperi(void)
{
    // Calculate and display the area of the rectangle
    printf("\nThe Area Of Rectangle: %.2f", length * width) ; 
    
    // Calculate and display the perimeter of the rectangle
    printf("\nThe Perimeter Of Rectangle: %.2f\n", 2 * (length + width)) ;
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
    
    // Call the function to calculate and display the area and perimeter
    arearectangleperi() ;

    // Return 0 to indicate successful execution
    return 0 ; 
}
