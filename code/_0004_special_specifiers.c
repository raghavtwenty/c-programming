/*
Filename: _0004_special_specifiers.c
Title: Special specifiers in printf
Author: Raghava | GitHub: @raghavtwenty
Date Created: July 25, 2024 | Last Updated: July 25, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

// Main function
int main() {
    // Using \n to create a newline
    printf("Hello, World!\n");
    
    // Using \\ to insert a backslash
    printf("This is a backslash: \\\n");
    
    // Using \t to insert a horizontal tab
    printf("Column1\tColumn2\tColumn3\n");
    
    // Using \" to insert double quotes
    printf("He said, \"Hello!\"\n");
    
    // Using \' to insert single quotes
    printf("It\'s a beautiful day!\n");
    
    // Using \0 to mark the end of a string
    char str[] = "This is a string\0 with more text that will not be printed.";
    printf("%s\n", str);  // Only prints up to the null character

    return 0;
}
