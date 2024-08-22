/*
Filename: _0006_rectangle_area_perimeter.c
Title: Area and Perimeter of a Rectangle
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 22, 2024 | Last Updated: August 22, 2024
Language: C | Version: clang-14

Description:
This program calculates the area and perimeter of a rectangle based on the 
length and breadth entered by the user. It then displays the calculated area 
and perimeter to the user.
*/

// Include the standard input/output library
#include <stdio.h> 

// Main function: Entry point of the program
int main()
{
    // Declare floating-point variables for length, breadth, perimeter, and area
    float x, y, Perimeter = 0, Area = 0;

    // Display the purpose of the program to the user
    printf("\nArea and Perimeter of a Rectangle\n");

    // Prompt the user to enter the length of the rectangle and store it in variable 'x'
    printf("Enter Length: ") && scanf("%f", &x);

    // Prompt the user to enter the breadth of the rectangle and store it in variable 'y'
    printf("Enter Breadth: ") && scanf("%f", &y);

    // Calculate the perimeter of the rectangle
    Perimeter = 2 * (x + y);

    // Calculate the area of the rectangle
    Area = x * y;

    // Display the calculated perimeter
    printf("\nCalculated Perimeter: %f", Perimeter);

    // Display the calculated area
    printf("\nCalculated Area: %f\n", Area);

    // Return 0 to indicate successful execution of the program
    return 0;
}
