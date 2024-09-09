/*
Filename: _0056_string_char.c
Title: Program to Convert String Into Specified Characters
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 9, 2024 | Last Updated: September 9, 2024
Language: C | Version: clang-14

Description:
This program converts all characters in a given string to a specified character (e.g., '*'). The user inputs a string, and the program modifies every character in the string to the specified character.
*/


// Importing Required Libraries
#include <stdio.h>   // Standard input/output functions like printf, puts, fgets
#include <string.h>  // String manipulation functions like strlen()


// Function to replace all characters in a string with a specified character
void replaceWithChar(char *str, char ch) {
    // Loop through the string and replace each character
    for (int i = 0; i < strlen(str); i++) {
        str[i] = ch;
    }
}


// Main function: Entry point of the program
int main()
{
    // Display the purpose of the program
    printf("\nProgram To Convert String Into Specified Characters.\n\n") ;

    // Declare a character array (string) to store the user's input
    char str[999], ch ;

    // Prompt the user to enter a string
    puts("Enter A String To Convert: ") ;
    
    // Use fgets to safely read the string with a maximum of 998 characters
    fgets(str, 999, stdin) ;

    // Remove the newline character from fgets if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';  // Replaces the newline with a null terminator
    }

    // Prompt the user to enter the character to replace all characters in the string
    printf("Enter The Character To Replace With: ");
    scanf("%c", &ch);

    // Replace all characters in the string with the specified character
    replaceWithChar(str, ch);

    // Output the modified string
    puts("\nAfter Converting To Specified Character: ") ;
    puts(str) ;

    // Return 0 to indicate successful execution
    return 0 ; 
}
