/*
Filename: _0052_string_comparison.c
Title: Program to Compare Two Strings
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 8, 2024 | Last Updated: September 8, 2024
Language: C | Version: clang-14

Description:
This program takes two strings as input from the user and compares them using the `strcmp()` function from the `string.h` library. It checks whether the two strings are identical and displays the result accordingly. The program compares the strings "five year course" and "five year".
*/


// Importing Required Libraries
#include <stdio.h>   // Standard input/output library for printf, puts, gets
#include <string.h>  // String manipulation functions, including strcmp()


// Main function: Entry point of the program
int main()
{
    // Display the purpose of the program
    printf("\nComparison Of Strings Using gets and puts.\n\n") ;

    // Declare two character arrays to store the user input
    char s1[100] ;
    char s2[100] ;

    // Prompt the user to enter the first string
    puts("Enter the first string: ") && gets(s1) ;
    
    // Prompt the user to enter the second string
    puts("Enter the second string: ") && gets(s2) ;

    // Use strcmp() to compare the two strings
    if(strcmp(s1, s2) == 0)
    {
        // If strcmp() returns 0, the strings are identical
        printf("\nStrings Match.\n") ;
    }
    else
    {
        // If strcmp() returns a non-zero value, the strings are different
        printf("\nStrings Do Not Match.\n") ;
    }

    // Return 0 to indicate successful execution
    return 0 ;
}
