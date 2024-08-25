/*
Filename: _0013_simple_interest.c
Title: Simple Interest Calculation
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 25, 2024 | Last Updated: August 25, 2024
Language: C | Version: clang-14

Description:
This program calculates the simple interest for a given principal amount, rate of interest, and time in years. 
The user is prompted to input the principal amount, rate of interest (in percentage), and time period. 
The program then calculates and displays the simple interest using the formula SI = (P * R * T) / 100.
*/

// Include the standard input/output library
#include <stdio.h>  

// Main function: Entry point of the program
int main()
{
    // Declare variables: 'si' for simple interest, 'p' for principal amount, 'r' for rate of interest, 't' for time, 'r1' for rate conversion
    float si, p, r, t, r1;

    // Display the purpose of the program to the user
    printf("\nSimple Interest.\n\n");

    // Prompt the user to enter the principal amount and store it in 'p'
    printf("Enter Principal Amount: ") && scanf("%f", &p);

    // Prompt the user to enter the rate of interest (in percentage) and store it in 'r'
    printf("Enter Rate Of Interest In Percentage: ") && scanf("%f", &r);

    // Prompt the user to enter the time period (in years) and store it in 't'
    printf("Enter Time In Years: ") && scanf("%f", &t);

    // Convert the rate of interest from percentage to a decimal by dividing by 100
    r1 = r / 100;

    // Calculate the simple interest using the formula SI = P * R * T
    si = p * r1 * t;

    // Display the calculated simple interest
    printf("\nSimple Interest: %f\n", si);

    // Return 0 to indicate successful execution of the program
    return 0;
}
