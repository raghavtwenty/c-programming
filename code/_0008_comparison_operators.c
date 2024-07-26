/*
Filename: _0008_comparison_operators.c
Title: Comparison operators
Author: Raghava | GitHub: @raghavtwenty
Date Created: July 26, 2024 | Last Updated: July 26, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

int main() {
    // Variables
    int a = 10, b = 5;
    
    // Equal to (==)
    if (a == b) {
        printf("a is equal to b\n");
    } else {
        printf("a is not equal to b\n");
    }
    
    // Not equal to (!=)
    if (a != b) {
        printf("a is not equal to b\n");
    } else {
        printf("a is equal to b\n");
    }
    
    // Greater than (>)
    if (a > b) {
        printf("a is greater than b\n");
    } else {
        printf("a is not greater than b\n");
    }
    
    // Less than (<)
    if (a < b) {
        printf("a is less than b\n");
    } else {
        printf("a is not less than b\n");
    }
    
    // Greater than or equal to (>=)
    if (a >= b) {
        printf("a is greater than or equal to b\n");
    } else {
        printf("a is not greater than or equal to b\n");
    }
    
    // Less than or equal to (<=)
    if (a <= b) {
        printf("a is less than or equal to b\n");
    } else {
        printf("a is not less than or equal to b\n");
    }

    // Demonstrating with floating-point numbers
    float x = 10.5, y = 5.5;
    
    // Equal to (==)
    if (x == y) {
        printf("x is equal to y\n");
    } else {
        printf("x is not equal to y\n");
    }
    
    // Not equal to (!=)
    if (x != y) {
        printf("x is not equal to y\n");
    } else {
        printf("x is equal to y\n");
    }
    
    // Greater than (>)
    if (x > y) {
        printf("x is greater than y\n");
    } else {
        printf("x is not greater than y\n");
    }
    
    // Less than (<)
    if (x < y) {
        printf("x is less than y\n");
    } else {
        printf("x is not less than y\n");
    }
    
    // Greater than or equal to (>=)
    if (x >= y) {
        printf("x is greater than or equal to y\n");
    } else {
        printf("x is not greater than or equal to y\n");
    }
    
    // Less than or equal to (<=)
    if (x <= y) {
        printf("x is less than or equal to y\n");
    } else {
        printf("x is not less than or equal to y\n");
    }

    return 0;
}
