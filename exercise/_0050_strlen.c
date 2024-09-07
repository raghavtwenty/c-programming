/*
Filename: _0050_strlen.c
Title: Program to Find the Length of a String
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 7, 2024 | Last Updated: September 7, 2024
Language: C | Version: clang-14

Description:
This program prompts the user to enter a string and then calculates and displays the length of that string. It utilizes the `strlen()` function from the `string.h` library to determine the number of characters in the input string, excluding the null terminator. The program demonstrates basic string handling and usage of standard library functions in C.
*/


// Importing Necessary Libraries
#include <stdio.h>    // For standard input/output functions
#include <string.h>   // For string manipulation functions like strlen()


// Main Function: Entry point of the program
int main()
{
    // Display the purpose of the program
    printf("\nFinding Length Of The String.\n\n");
    
    // Declare a character array to store the input string
    char arr[999]; 

    // Prompt the user to enter the string
    // `gets()` reads a line from stdin into the buffer pointed to by arr until a terminating newline or EOF
    // Note: `gets()` is deprecated and unsafe. It's recommended to use `fgets()` instead to prevent buffer overflow.
    puts("Enter The String: ") && gets(arr);
    
    // Calculate and display the length of the entered string
    // `strlen()` returns the number of characters in the string excluding the null terminator
    printf("\nLength Of The String: %lu\n", strlen(arr));
    
    // Return 0 to indicate successful execution
    return 0; 
}
