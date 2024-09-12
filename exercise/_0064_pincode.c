/*
Filename: _0064_pincode.c
Title: Program to Get and Display a 6-Digit Pincode
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 12, 2024 | Last Updated: September 12, 2024
Language: C | Version: clang-14

Description:
This program prompts the user to input six integer values, representing a pincode.
It then stores these values in an array and displays the full 6-digit pincode.
*/

// Importing required libraries
#include <stdio.h>

// Main function: Entry point of the program
int main()
{
    // Display the purpose of the program
    printf("\nProgram To Get Pincode From The User And Display The Same.\n\n");

    // Declare an integer array to store 6 digits of the pincode
    int arr[6];

    // Get input from the user in a loop
    for (int i = 0; i < 6; i++)
    {
        // Prompt the user to enter each digit of the pincode
        printf("Enter the %dth digit of the pincode: ", i + 1);

        // Store the input in the corresponding index of the array
        scanf("%d", &arr[i]);
    }

    // Display the complete pincode
    printf("\nPincode: ");
    for (int i = 0; i < 6; i++)
    {
        // Print each digit consecutively to form the full pincode
        printf("%d", arr[i]);
    }

    // Print a newline for formatting
    printf("\n");

    // Return 0 to indicate successful execution
    return 0;
}
