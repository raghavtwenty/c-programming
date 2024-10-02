/*
Filename: _0007_char_frequency.c
Title: Program To Calculate Frequency of Characters in a String
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 2, 2024 | Last Updated: October 2, 2024
Language: C | Version: clang-14

Description:
This program reads a string from the user and calculates the frequency of each character in the string. 
It first prompts the user to input the string, and then iterates through the string to count how often 
each character appears, printing the result.
*/

// Importing the standard input-output and string libraries
#include<stdio.h>
#include<string.h>

// Main
int main()
{
    // Variable declaration
    char s[1000];  // Array to store the string
    int i, j, n, count = 0;  // Variables for iteration and frequency count

    // Prompting the user to enter a string
    printf("FREQUENCY COUNT OF CHARACTER IN STRING\n");
    printf("Enter a string: ");
    scanf("%s", s);  // Reading the input string

    // Loop to determine the length of the string
    for (j = 0; s[j]; j++)
        n = j;  // Storing the length of the string in 'n'

    // Loop to calculate and display frequency of each character
    for (i = 0; i < n; i++)
    {
        count = 1;  // Reset count for each character
        if (s[i])  // Proceed only if the character has not been marked
        {
            // Inner loop to check if the character appears again in the string
            for (j = i + 1; j < n; j++)
            {
                if (s[i] == s[j])  // If the character matches, increase the count
                {
                    count++;
                    s[j] = '\0';  // Mark the character as processed by setting it to '\0'
                }
            }
            // Printing the frequency of the character
            printf("'%c' = %d\n", s[i], count);
        }
    }

    return 0;  
}
