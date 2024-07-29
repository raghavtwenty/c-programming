/*
Filename: _0018_while_loop.c
Title: While loop
Author: Raghava | GitHub: @raghavtwenty
Date Created: July 29, 2024 | Last Updated: July 29, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

// Main
int main() {

    // Variable initialization 
    int count = 1;

    // while loop
    while (count <= 5) {
        // until the condition is true the block executes
        printf("Count: %d\n", count);
        count++; // increment count
    }

    return 0;
}
