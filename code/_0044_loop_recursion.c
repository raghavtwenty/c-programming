/*
Filename: _0044_loop_recursion.c
Title: Difference between loops and recursion
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 19, 2024 | Last Updated: August 19, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

// Recursive
int sumOfNaturalNumbersRecursive(int n) {
    // Base case if n is 1, return 1
    if (n == 1) {
        return 1;
    }
    // Recursive case n + sum of natural numbers up to n-1
    return n + sumOfNaturalNumbersRecursive(n - 1);
}

// Loop
int sumOfNaturalNumbersLoop(int n) {
    int sum = 0;
    
    // Loop from 1 to n and add the values to sum
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    
    return sum;
}

int main() {
    int number, sumRec, sumLoop;
    
    // Get input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    // Check if the input is valid
    if (number <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        // Using recursion
        sumRec = sumOfNaturalNumbersRecursive(number);
        
        // Using loop
        sumLoop = sumOfNaturalNumbersLoop(number);
        
        // Print the results of both methods
        printf("Sum of the first %d natural numbers (Recursive): %d\n", number, sumRec);
        printf("Sum of the first %d natural numbers (Loop): %d\n", number, sumLoop);
    }
    
    return 0;
}
