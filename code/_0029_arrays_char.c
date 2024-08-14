/*
Filename: _0029_arrays_char.c
Title: Arrays with characters in c
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 14, 2024 | Last Updated: August 14, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

// Main
int main() {
    // Declaration and initialization of a string
    char str[6] = "Hello";

    // Accessing string elements
    for (int i = 0; i < 5; i++) {
        printf("str[%d] = %c\n", i, str[i]);
    }

    // Printing the string
    printf("String: %s\n", str);

    return 0;
}
