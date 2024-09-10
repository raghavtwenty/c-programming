/*
Filename: _0060_string_replace.c
Title: Program To Replace Each Special Character With "#"
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 10, 2024 | Last Updated: September 10, 2024
Language: C | Version: clang-14

Description:
This program takes a string as input and replaces each special character (i.e., anything that is not a letter or a number) with the "#" symbol. It does this by iterating through the input string character by character and checking if each character is alphanumeric. If it is not, the character is replaced by "#".
*/


// Importing Required Libraries
#include <stdio.h>   // Standard input/output library for functions like printf, scanf


// Main function: Entry point of the program
int main()
{
    // Display the purpose of the program
    printf("\nProgram To Replace Each Special Character With #\n\n") ;

    // Declare a character array (string) to hold the user's input, and an index variable 'i'
    char str[200] ;
    int i = 0 ;

    // Prompt the user to input a string and store it in the 'str' array
    puts("Enter The String: ") ;
    gets(str) ;  // Gets the entire line input from the user

    // Print a message to indicate the transformed string
    printf("\nString After Converting:\n") ;

    // Loop through each character in the string until the null terminator '\0' is encountered
    while (str[i] != '\0')
    {
        // Check if the current character is an alphabet (lowercase/uppercase) or a digit
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')) 
        {
            // If it's a letter or digit, print it as is
            printf("%c", str[i]) ;
        }
        else
        {
            // If it's a special character, replace it with '#'
            printf("#") ;
        }
        // Move to the next character in the string
        i++ ;
    }
    
    // Print a newline character after the transformed string is fully displayed
    printf("\n") ;

    // Return 0 to indicate successful execution
    return 0 ;
}
