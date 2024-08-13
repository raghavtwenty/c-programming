/*
Filename: _0025_functions.c
Title: functions in c
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 13, 2024 | Last Updated: August 13, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

// Function with no arguments and no return value
void greet() {
    printf("Hello, World!\n");
}

// Function with no arguments but with return value
int getTen() {
    return 10;
}

// Main 
int main() {
    greet(); // No argument, no return value

    int ten = getTen(); // No argument, with return value
    printf("getTen returned: %d\n", ten);
}

