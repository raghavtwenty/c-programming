/*
Filename: _0005_digits.c
Title: Program To Count Digits in a String
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 1, 2024 | Last Updated: October 1, 2024
Language: C | Version: clang-14

Description:
This program reads a string entered by the user and counts the number of numeric digits (0-9) present in the string. 
The program loops through each character of the string and checks if it is a digit using a series of conditional checks. 
If a digit is found, the count is incremented. The final count is then printed.
*/

// Importing the necessary libraries for input-output operations and string manipulation
#include <stdio.h>  
#include <string.h> 

// Main
int main()
{
    // Title of the program
    printf("\nProgram To Count Digits In A String.\n\n");

    // Declaration of a string with a size of 999 characters and other necessary variables
    char str[999];
    int i = 0, count = 0;

    // Prompt the user to enter the string
    puts("Enter The String: ") && gets(str);

    // Loop through each character in the string until the null character '\0' is encountered
    for (; str[i] != '\0';)
    {
        // Check if the current character is a digit (0-9)
        if (str[i] == '1' || 
            str[i] == '2' || 
            str[i] == '3' || 
            str[i] == '4' || 
            str[i] == '5' || 
            str[i] == '6' || 
            str[i] == '7' || 
            str[i] == '8' || 
            str[i] == '9' || 
            str[i] == '0')
        {
            // Increment the count if a digit is found
            count++;
        }

        // Move to the next character in the string
        i++;
    }

    // Print the total number of digits found in the string
    printf("\nFrequency Of Digits: %d\n", count);

    return 0;
}
