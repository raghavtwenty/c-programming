/*
Filename: _0048_frequency_string.c
Title: Program to Find Frequency of Characters in a String
Date Created: September 6, 2024 | Last Updated: September 6, 2024
Author: Raghava | GitHub: @raghavtwenty
Language: C | Version: clang-14

Description:
This program calculates the frequency of a specified character in a user-provided string. The user is prompted to input a string and a character, and the program counts how many times the character appears in the string using a loop structure.
*/

// Importing Required Libraries 
#include <stdio.h>   // Standard input/output library

// Main Function: Entry point of the program
int main()
{
    // Display the purpose of the program
    printf("\nFinding The Frequency Of Characters In A String.\n\n");

    // Declare variables to store the string, the character to be counted, and the frequency count
    char str[2000], ch;
    int count = 0;
    
    // Prompt the user to input a string
    puts("Enter The String: ") && gets(str);  // Use `gets` to read the string

    // Prompt the user to input the character to find its frequency
    puts("Enter A Character To Find Its Frequency: ");
    gets(&ch);  // Use `gets` to read a single character

    // Loop through the string to count the occurrences of the specified character
    for (int i = 0; str[i] != '\0'; ++i)
    {
        if (ch == str[i])  // If the current character matches `ch`
            ++count;  // Increment the count
    }

    // Display the frequency of the character
    printf("\nFrequency Of %c = %d", ch, count);

    // Return 0 to indicate successful execution
    return 0;
}
