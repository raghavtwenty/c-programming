/*
Filename: _0024_goto.c
Title: goto statement in c
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 12, 2024 | Last Updated: August 12, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

// Main
int main() {
    // Initialize
    int i = 0;

    // i = 1
    loop_start:
    i++;

    if (i < 3) {
        printf("i: %d\n", i);
        goto loop_start; // Jump back to loop_start
    }

    // Final show
    printf("Loop terminated.\n");
    return 0;
}
