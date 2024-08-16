/*
Filename: _0035_fgets_input.c
Title: Input via fgets in c
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 16, 2024 | Last Updated: August 16, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

int main() {
    // Memory allocation
    char stringInput[100];

    // Prompt user for a string
    printf("Enter a string: ");
    fgets(stringInput, sizeof(stringInput), stdin); // Reads a line of text

    // Remove the newline character if present
    size_t len = strlen(stringInput);
    if (len > 0 && stringInput[len - 1] == '\n') {
        stringInput[len - 1] = '\0';
    }

    // Displaying the input
    printf("You entered string: %s\n", stringInput);

    return 0;
}
