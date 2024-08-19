/*
Filename: _0043_natural_numbers.c
Title: Natural numbers using recursion
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 19, 2024 | Last Updated: August 19, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

// Natural numbers
int sumOfNaturalNumbers(int n) {
    // Base case if n is 1, return 1
    if (n == 1) {
        return 1;
    }
    // Recursive case n + sum of natural numbers up to n-1
    return n + sumOfNaturalNumbers(n - 1);
}

// Main
int main() {
    int number;
    
    // Get input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    // Check if the input is valid
    if (number <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Sum of the first %d natural numbers is %d\n", number, sumOfNaturalNumbers(number));
    }
    
    return 0;
}
