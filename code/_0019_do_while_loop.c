/*
Filename: _0019_do_while_loop.c
Title: Do while loop
Author: Raghava | GitHub: @raghavtwenty
Date Created: July 31, 2024 | Last Updated: July 31, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

// Main
int main() {
    // Variable initialization
    int count = 1;

    // do-while loop
    do {
        printf("Count: %d\n", count);
        count++; // increment count
    } while (count <= 5); // condition is checked after loop body

    return 0;
}
