/*
Filename: _0017_ternary_operators.c
Title: Ternary operators
Author: Raghava | GitHub: @raghavtwenty
Date Created: July 29, 2024 | Last Updated: July 29, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

// Main
int main() {
    // Variable initialization
    int num = 20;
    const char* result; // Pointers

    // Ternary operation, whatever is before : will be executed if true else later part will be executed
    result = (num > 0) ? "The number is positive." : "The number is non-positive.";

    printf("%s\n", result);

    return 0;
}
