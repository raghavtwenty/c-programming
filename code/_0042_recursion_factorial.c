/*
Filename: _0042_recursion_factorial.c
Title: Factorial using recursion 
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 19, 2024 | Last Updated: August 19, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

// Factorial
int factorial(int n) {
    // Base case if n is 0 or 1, return 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case n * factorial(n - 1)
    return n * factorial(n - 1);
}

// Main
int main() {
    int number;
    
    // Get input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    // Check if the input is valid
    if (number < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        printf("Factorial of %d is %d\n", number, factorial(number));
    }
    
    return 0;
}
