/*
Filename: _0013_if_else_condition.c
Title: If else condition
Author: Raghava | GitHub: @raghavtwenty
Date Created: July 28, 2024 | Last Updated: July 28, 2024
Language: C | Version: clang-14
*/

#include <stdio.h>

int main() {
    int num = -10;

    // If statement true
    if (num > 0) {
        printf("The number is positive.\n");
    } else {
        // Else executes if the above condition is false
        printf("The number is non-positive.\n");
    }

    return 0;
}
