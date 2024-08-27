/*
Filename: _0020_isalpha.c
Title: Check Whether a Character is an Alphabet
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 27, 2024 | Last Updated: August 27, 2024
Language: C | Version: clang-14

Description:
This program checks whether the input character is an alphabet (A-Z or a-z) 
using the `isalpha` function from the `ctype.h` library. 
It then prints whether the character is an alphabet or not.
*/

// Include the standard input/output library
#include <stdio.h>  
// Include the ctype.h library for character handling functions 
#include <ctype.h>   

// Main function: Entry point of the program
int main()
{
    char str;  // Declare a character variable to store the input character

    // Display the purpose of the program to the user
    printf("\nAlphabet Or Not.\n\n");

    // Prompt the user to input a character
    printf("Enter The Character: ") && scanf("%c", &str);  

    // Check if the input character is an alphabet using the isalpha function
    if (isalpha(str) != 0)
        printf("\nIt's An Alphabet.\n");  // Print if the character is an alphabet
    else
        printf("\nIt's Not An Alphabet.\n");  // Print if the character is not an alphabet

    // Return 0 to indicate successful execution of the program
    return 0;
}
