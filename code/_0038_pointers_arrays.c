/*
Filename: _0038_pointers_arrays.c
Title: Arrays with pointers
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 17, 2024 | Last Updated: August 17, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};  // Array
    int *p = arr;                  // Pointer to array

    // Iteration
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(p + i));  // Access array element using pointer arithmetic
    }

    return 0;
}
