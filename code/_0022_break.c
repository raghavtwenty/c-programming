/*
Filename: _0022_break.c
Title: Break statements in c
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 12, 2024 | Last Updated: August 12, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

// Main
int main() {
    // For loop 
    // start, end, step
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break; // Exit the loop when i equals 5
        }
        printf("i: %d\n", i);
    }

    // Final Show
    printf("Loop terminated.\n");
    return 0;
}
