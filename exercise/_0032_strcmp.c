/*
Filename: _0032_strcmp.c
Title: String Comparison in C
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 1, 2024 | Last Updated: September 1, 2024
Language: C | Version: clang-14

Description:
This program compares two strings entered by the user and determines if they are equal or not. The comparison is case-sensitive and uses the `strcmp` function from the standard C library to evaluate the strings.
*/

// Importing necessary libraries
#include <stdio.h>  // Standard input/output library
#include <string.h> // String handling library

// Main function: Entry point of the program
int main()
{
    // Display a message indicating the start of the string comparison program
    printf("\nString Comparison.\n\n");

    // Declare two character arrays to store the input strings
    char str1[10] = " ", str2[10] = " ";
    
    // Prompt the user to enter the first string
    printf("Enter The First String: ") && scanf("%s", &str1[0]); // Read the input and store it in the first array
    
    // Prompt the user to enter the second string
    printf("Enter The Second String: ") && scanf("%s", &str2[0]); // Read the input and store it in the second array
    
    // Compare the two strings using strcmp function
    if (strcmp(str1, str2) == 0) // strcmp returns 0 if the strings are equal
    {
        // If the strings are equal, print a confirmation message
        printf("\nThe Two Strings Are Equal.\n");
    }
    else
    {
        // If the strings are not equal, print a mismatch message
        printf("\nString Entries Don't Match.\n");
    }

    return 0; // Return 0 to indicate successful execution of the program
}
