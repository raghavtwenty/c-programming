/*
Filename: _0007_cir_circle.c
Title: Circumference of a Circle
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 23, 2024 | Last Updated: August 23, 2024
Language: C | Version: clang-14

Description:
This program calculates the circumference of a circle based on the radius entered by the user. 
It uses the formula `Circumference = 2 * π * r` where `r` is the radius of the circle, and `π` is approximated as 3.14.
*/


// Include the standard input/output library
#include <stdio.h>  

// Main function: Entry point of the program
int main()
{
    // Declare a floating-point variable 'r' for the radius and 'Cir' for the circumference
    float r, Cir;

    // Display the purpose of the program to the user
    printf("\nCircumference of a Circle\n");

    // Prompt the user to enter the radius of the circle and store it in variable 'r'
    printf("Enter Radius of the Circle: ") && scanf("%f", &r);

    // Calculate the circumference using the formula 2 * π * r
    Cir = 2 * 3.14 * r;

    // Display the calculated circumference
    printf("\nThe Circumference of the Circle: %f \n", Cir);

    // Return 0 to indicate successful execution of the program
    return 0;
}
