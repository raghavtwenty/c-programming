/*
Filename: _0036_array_input.c
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
    int array[5];

    // Prompt user for array elements
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Displaying the array
    printf("You entered: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
