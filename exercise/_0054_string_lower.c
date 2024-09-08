/*
Filename: _0054_string_lower.c
Title: Program to Convert Uppercase to Lowercase in a String
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 8, 2024 | Last Updated: September 8, 2024
Language: C | Version: clang-14

Description:
This program accepts a string from the user and converts all uppercase characters to lowercase using the `strlwr()` function. The result is then displayed. The program is primarily focused on case conversion within a string.
*/


// Importing Required Libraries
#include <stdio.h>   // Standard input/output functions like printf, puts, gets
#include <string.h>  // String manipulation functions, including strlwr()


// Main function: Entry point of the program
int main()
{
    // Display the purpose of the program
    printf("\nUppercase To Lowercase.\n\n") ;

    // Declare a character array to store the user's input string
    char str[999] ;

    // Prompt the user to enter a string
    puts("Enter A String To Convert: ") && gets(str) ;

    // Convert the string to lowercase using strlwr() and display it
    puts("After Converting To Lowercase: ") ;
    puts(strlwr(str)) ;

    // Return 0 to indicate successful execution
    return 0 ; 
}
