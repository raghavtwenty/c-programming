/*
Filename: _0053_string_append.c
Title: Program to Append a String to Another String
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 8, 2024 | Last Updated: September 8, 2024
Language: C | Version: clang-14

Description:
This program takes two strings as input from the user: the first string and the string to append to the first one. The program then uses the `strcat()` function from the `string.h` library to append the second string to the first. It then displays the result.
*/


// Importing Required Libraries
#include <stdio.h>   // Standard input/output library for printf, puts, gets
#include <string.h>  // String manipulation functions, including strcat()


// Main function: Entry point of the program
int main()
{
    // Display the purpose of the program
    puts("\nAppending A String To An Existing String.\n\n") ;

    // Declare two character arrays to store the user input
    char str[999], ch[999] ;

    // Prompt the user to enter the first string
    puts("Enter The First String: ") && gets(str) ;
    
    // Prompt the user to enter the string to append
    puts("Enter The String To Append: ") && gets(ch) ;

    // Use strcat() to append the second string to the first string
    puts("Appended String: ") && puts(strcat(str, ch)) ;

    // Return 0 to indicate successful execution
    return 0 ;
}
