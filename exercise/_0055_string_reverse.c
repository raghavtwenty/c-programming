/*
Filename: _0055_string_reverse.c
Title: Program to Reverse a String
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 9, 2024 | Last Updated: September 9, 2024
Language: C | Version: clang-14

Description:
This program reverses a string inputted by the user using the `strrev()` function. The program takes a string, reverses its characters, and displays the reversed string.
*/


// Importing Required Libraries
#include <stdio.h>   // Standard input/output functions like printf, puts, fgets
#include <string.h>  // String manipulation functions like strrev()


// Main function: Entry point of the program
int main()
{
    // Display the purpose of the program
    printf("\nProgram To Reverse The String.\n\n") ;

    // Declare a character array (string) to store the user's input
    char str[999] ;

    // Prompt the user to enter a string
    puts("Enter A String To Reverse: ") ;
    
    // Use fgets to safely read the string with a maximum of 998 characters
    fgets(str, 999, stdin) ;

    // Remove the newline character from fgets if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';  // Replaces the newline with a null terminator
    }

    // Reverse the string and display it
    puts("String After Reversing: ") ;
    puts(strrev(str)) ;

    // Return 0 to indicate successful execution
    return 0 ; 
}
