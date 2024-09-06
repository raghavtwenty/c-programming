/*
Filename: _0047_gets_puts.c
Title: Program to Read and Write Using `gets` and `puts`
Date Created: September 6, 2024 | Last Updated: September 6, 2024
Author: Raghava | GitHub: @raghavtwenty
Language: C | Version: clang-14

Description:
This program demonstrates how to read a string from the user using the `gets` function and write (display) it using the `puts` function. The user is prompted to enter their name, which is then displayed back to them.
*/

// Importing Required Libraries 
#include <stdio.h>   // Standard input/output library
#include <string.h>  // Library for string operations

// Main Function: Entry point of the program
int main()
{
    // Display the purpose of the program
    printf("\nProgram Using Gets And Puts.\n\n");

    // Declare a character array to store the user's input
    char name[2100];  // Buffer size large enough to hold input

    // Prompt the user to enter their name
    puts("Enter Your Name: ");
    
    // Use `gets` to read the user's input and store it in the `name` array
    gets(name);  

    // Display the entered name using `puts`
    puts("The Name You Have Entered Is: ");
    puts(name); 
    
    // Return 0 to indicate successful execution
    return 0; 
}
