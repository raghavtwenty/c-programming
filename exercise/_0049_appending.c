/*
Filename: _0049_appending.c
Title: Appending a Character to an Existing String
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 7, 2024 | Last Updated: September 7, 2024
Language: C | Version: clang-14

Description:
This program takes an existing string input from the user and appends a single character at the end of it. The `strcat()` function from the `string.h` library is used to concatenate the character to the string. The program demonstrates basic string manipulation using user input.
*/


// Importing Required Libraries
#include <stdio.h>   // For standard input/output functions
#include <string.h>  // For string manipulation functions such as strcat()


// Main Function: Entry point of the program
int main()
{
    // Display the purpose of the program
    puts("\nAppending A Character To An Existing String.\n\n");

    // Declare a character array to store the string and a variable to store the character
    char str[999], ch;

    // Prompt the user to enter the string
    puts("Enter The First String: ") && gets(str);

    // Prompt the user to enter the character to append
    puts("Enter The Character To Append: ") && gets(&ch);

    // Append the character to the string using the strcat() function
    puts("String After Appending Character: ") && puts(strcat(str, &ch));

    // Return 0 to indicate successful execution
    return 0;
}
