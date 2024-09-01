/* 
Filename: _0033_simple_interest.c
Title: Simple Interest Calculation in C
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 1, 2024 | Last Updated: September 1, 2024
Language: C | Version: clang-14

Description:
This program calculates the simple interest based on the principal amount, rate of interest, and time period provided by the user. The calculation is done using a separate function `simpleinterest`, which takes the principal, rate, and time as arguments and returns the computed simple interest.
*/

// Importing necessary libraries
#include <stdio.h> // Standard input/output library

// Simple Interest Function Definition
// This function calculates simple interest given principal (p), rate (r), and time (t)
float simpleinterest(float p, float r, float t)
{
    return (p * r * t) / 100; // Simple interest formula: (P * R * T) / 100
}

// Main function: Entry point of the program
int main()
{
    // Display a message indicating the start of simple interest computation
    printf("\nComputation Of Simple Interest.\n\n");
    
    // Declare variables to store principal amount, rate of interest, and time period
    float p, r, t;
    
    // Prompt the user to enter the principal amount
    printf("Enter Principal Amount: ") && scanf("%f", &p); // Read the input and store it in variable 'p'
    
    // Prompt the user to enter the rate of interest
    printf("Enter Rate Of Interest: ") && scanf("%f", &r); // Read the input and store it in variable 'r'
    
    // Prompt the user to enter the number of years (time period)
    printf("Enter Number Of Years: ") && scanf("%f", &t); // Read the input and store it in variable 't'
    
    // Calculate and display the computed simple interest
    printf("\nComputed Simple Interest: %.2f\n", simpleinterest(p, r, t)); // Call the simple interest function and print the result
    
    return 0; // Return 0 to indicate successful execution of the program
}
