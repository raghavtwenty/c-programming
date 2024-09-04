/*
Filename: _0040_with_argument_with_return.c
Title: Function with arguments and return type
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 4, 2024 | Last Updated: September 4, 2024
Language: C | Version: clang-14

Description:
This program calculates and returns the area and circumference of a circle using two separate functions. Each function takes the radius as an argument and returns the calculated value. The main function handles user input and prints the results.
*/


// Importing Required Libraries
#include <stdio.h>  // Standard input/output library


// Function to calculate the circumference of the circle
// Accepts the radius as an argument and returns the calculated circumference
float circumferencecircle(float r) 
{
    return 6.28 * r ;  // Returns the circumference (C = 2 * π * r)
}


// Function to calculate the area of the circle
// Accepts the radius as an argument and returns the calculated area
float area(float r)
{
    return 3.14 * r * r ;  // Returns the area (A = π * r^2)
}


// Main Function: Entry point of the program
int main()
{
    // Display the purpose of the program
    printf("\nArea And Circumference Of The Circle.\n\n") ;

    // Variable Declaration: To store the radius of the circle
    float radius ;

    // Prompt the user to enter the radius
    printf("Enter The Radius: ") && scanf("%f", &radius) ; 

    // Call the circumferencecircle function and print the result
    printf("The Circumference Of The Circle With Radius %.2f Is: %.2f", radius, circumferencecircle(radius)); 

    // Call the area function and print the result
    printf("\nThe Area Of The Circle With Radius %.2f Is: %.2f\n", radius, area(radius)) ; 

    // Return 0 to indicate successful execution
    return 0;
}
