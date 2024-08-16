/*
Filename: _0034_scanf_input.c
Title: Input via scanf in c
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 16, 2024 | Last Updated: August 16, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

// Main
int main() {
    // Memory allocation
    int integerInput;
    float floatInput;
    char charInput;
    char stringInput[100];

    // Prompt user for an integer
    printf("Enter an integer: ");
    scanf("%d", &integerInput);
    
    // Prompt user for a floating-point number
    printf("Enter a floating-point number: ");
    scanf("%f", &floatInput);
    
    // Prompt user for a character
    printf("Enter a character: ");
    scanf(" %c", &charInput); // Note the space before %c to consume any leftover newline character
    
    // Prompt user for a string
    printf("Enter a string: ");
    scanf("%s", stringInput); // This reads a word (stops at whitespace)

    // Displaying the inputs
    printf("You entered integer: %d\n", integerInput);
    printf("You entered float: %f\n", floatInput);
    printf("You entered character: %c\n", charInput);
    printf("You entered string: %s\n", stringInput);

    return 0;
}
