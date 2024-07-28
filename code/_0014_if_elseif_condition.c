/*
Filename: _0014_if_elseif_condition.c
Title: If elseif condition
Author: Raghava | GitHub: @raghavtwenty
Date Created: July 28, 2024 | Last Updated: July 28, 2024
Language: C | Version: clang-14
*/

#include <stdio.h>

int main() {
    int num = 0;

    // If statement true
    if (num > 0) {
        printf("The number is positive.\n");
    // Looks for other condition check
    } else if (num < 0) {
        printf("The number is negative.\n");
    // else should be the final in if elseif
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
