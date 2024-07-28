/*
Filename: _0015_nested_if.c
Title: nested if condition
Author: Raghava | GitHub: @raghavtwenty
Date Created: July 28, 2024 | Last Updated: July 28, 2024
Language: C | Version: clang-14
*/

#include <stdio.h>

int main() {
    int num = 15;

    // Outer if statement
    if (num > 0) {
        // If outer statement is true, then inside if checks
        if (num % 2 == 0) {
            printf("The number is positive and even.\n");
        // inside else
        } else {
            printf("The number is positive and odd.\n");
        }
    }

    return 0;
}
