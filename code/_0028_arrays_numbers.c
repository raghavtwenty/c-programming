/*
Filename: _0028_arrays_numbers.c
Title: Arrays with numbers in c
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 14, 2024 | Last Updated: August 14, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

// Main
int main() {
    // Declaration and initialization
    int numbers[5] = {1, 2, 3, 4, 5};

    // Accessing array elements
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;
}
