/*
Filename: _0023_continue.c
Title: continue statement in c
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 12, 2024 | Last Updated: August 12, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

// Main
int main() {
    // Start, end, step
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue; // Skip the iteration when i equals 5
        }
        // 5 alone will not printed
        printf("i: %d\n", i);
    }

    return 0;
}
