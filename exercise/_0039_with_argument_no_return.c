/*
Filename: _0038_formal_parameter.c
Title: Function with arguments and no return type
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 3, 2024 | Last Updated: September 3, 2024
Language: C | Version: clang-14

Description:
This program calculates and prints the area and circumference of a circle. The calculations are performed in a function that accepts the radius as an argument but does not return any value. The function prints the results directly.
*/


// Importing Required Libraries
#include <stdio.h>  // Standard input/output library


// Function Definition: Calculates and prints the circumference and area of a circle
void circumandarea(float radius) 
{
    // Calculate and print the circumference
    printf("\nCircumference Of The Circle With Radius %.2f Is: %.2f", radius, 6.28 * radius) ;

    // Calculate and print the area
    printf("\nArea Of The Circle With Radius %.2f Is: %.2f\n", radius, 3.14 * radius * radius) ;
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

    // Call the function circum and area with the user input as the argument
    circumandarea(radius) ; 

    // Return 0 to indicate successful execution
    return 0 ;
}
