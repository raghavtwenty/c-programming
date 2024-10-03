/*
Filename: _0011_grade_calculator.c
Title: Program To Calculate Grade Based On Marks
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 3, 2024 | Last Updated: October 3, 2024
Language: C | Version: clang-14

Description:
This program takes the user's marks as input and assigns a grade based on predefined ranges. 
*/

// Importing the standard input-output library
#import <stdio.h>

// Main
int main()
{
    // Variable to store the student's mark
    float mark;

    // Prompting the user to enter their mark
    printf("Enter the mark: ") && scanf("%f", &mark);  

    // Conditional statements to determine and print the grade based on the mark
    if (mark >= 90)
        printf("A grade.\n");  // A grade for marks >= 90
    else if (mark >= 80 && mark < 90)
        printf("B grade.\n");  // B grade for marks between 80 and 89
    else if (mark >= 70 && mark < 80)
        printf("C grade.\n");  // C grade for marks between 70 and 79
    else if (mark >= 60 && mark < 70)
        printf("D grade.\n");  // D grade for marks between 60 and 69
    else if (mark >= 33 && mark < 60)
        printf("F grade.\n");  // F grade for marks between 33 and 59
    else
        printf("E grade.\n");  // E grade for marks below 33 (failing)

    return 0;  
}
