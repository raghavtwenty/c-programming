/*
Filename: _0051_string_copy.c
Title: Program to Copy One String to Another
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 7, 2024 | Last Updated: September 7, 2024
Language: C | Version: clang-14

Description:
This program takes a string input from the user and copies it to another string using the `strcpy()` function from the `string.h` library. It demonstrates how to perform string operations like copying in C.
*/


// Importing Required Libraries
#include <stdio.h>   // Standard input/output library
#include <string.h>  // String manipulation functions, including strcpy()


// Main function: Entry point of the program
int main()
{
    // Display the purpose of the program
    puts("\nProgram To Copy One String To The Other.\n\n") ;

    // Declare two character arrays: one for input and another to store the copied string
    char str[999], strcp[999] ; 
    
    // Prompt the user to enter the original string
    puts("Enter The String: ") && gets(str) ; 
    
    // Copy the content of 'str' to 'strcp' using strcpy()
    strcpy(strcp, str) ;
    
    // Display the copied string
    puts("Copied String: ") && puts(strcp) ;

    // Return 0 to indicate successful execution
    return 0 ;
}
