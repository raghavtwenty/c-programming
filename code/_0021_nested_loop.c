/*
Filename: _0021_nested_loop.c
Title: Nested loop
Author: Raghava | GitHub: @raghavtwenty
Date Created: July 31, 2024 | Last Updated: July 31, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

int main() {
    // nested for loop
    // for loop - initial value, stop value, step value
    for (int i = 1; i <= 3; i++) { // outer loop
        for (int j = 1; j <= 2; j++) { // inner loop
            printf("i: %d, j: %d\n", i, j);
        }
    }

    return 0;
}
