/*
Filename: _0030_arrays_strings.c
Title: Arrays with strings in c
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 14, 2024 | Last Updated: August 14, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

// Main
int main() {
    // Declaration and initialization of a 2D array of strings
    char names[3][10] = {"Alice", "Bob", "Charlie"};
    // 3 - number of elements
    // 10 - max length of each element

    // Accessing array elements
    for (int i = 0; i < 3; i++) {
        printf("names[%d] = %s\n", i, names[i]);
    }

    return 0;
}
