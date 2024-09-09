/*
Filename: _0057_string_frequency.c
Title: Program To Count The Frequencies Of Characters In A String
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 9, 2024 | Last Updated: September 9, 2024
Language: C | Version: clang-14

Description:
This program takes a string as input from the user and counts the frequency of each character in the string. It iterates through each character, counts how many times it appears, and outputs the result.
*/


// Importing Required Libraries
#include <stdio.h>   // Standard input/output functions like printf, scanf
#include <string.h>  // String manipulation functions like strlen


// Main function: Entry point of the program
int main()
{
    // Display the purpose of the program
    printf("\nProgram To Count Frequencies Of The Characters In A String.\n\n") ;

    // Declare a character array (string) to store the user's input
    char str[100] ;

    // Declare a variable to store the length of the string
    int len ;

    // Prompt the user to enter a string
    printf("Enter The String: ") ;
    scanf("%s", str) ;  // Reading a single word from input (no spaces allowed with %s)

    // Get the length of the string using strlen() and store it in 'len'
    len = strlen(str) ;

    // Outer loop to select a character and count its frequency
    for (int i = 0 ; i < len ; i++) 
    {
        int count = 1 ;  // Initialize the count for the current character

        // Inner loop to compare the selected character with the rest of the string
        for (int j = i + 1 ; j < len ; j++) 
        {
            // If characters match, increment the count and set the duplicate to '\0'
            if (str[i] == str[j]) 
            {
                count++ ;
                str[j] = '\0';  // Set the duplicate character to null character to avoid counting again
            } 
        }

        // Only print the character if it hasn't already been processed (i.e., it's not '\0')
        if (str[i] != '\0') 
        {
            printf("%c Appears %d Times.\n", str[i], count) ;
        }
    }

    // Return 0 to indicate successful execution
    return 0 ;
}
