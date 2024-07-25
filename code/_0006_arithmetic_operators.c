/*
Filename: _0006_arithmetic_operators.c
Title: Arithmetic operators
Author: Raghava | GitHub: @raghavtwenty
Date Created: July 25, 2024 | Last Updated: July 25, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

int main() {
    int a = 10, b = 5;
    int result;
    
    // Addition
    result = a + b;
    printf("Addition: %d + %d = %d\n", a, b, result);
    
    // Subtraction
    result = a - b;
    printf("Subtraction: %d - %d = %d\n", a, b, result);
    
    // Multiplication
    result = a * b;
    printf("Multiplication: %d * %d = %d\n", a, b, result);
    
    // Division
    result = a / b;
    printf("Division: %d / %d = %d\n", a, b, result);
    
    // Modulus
    result = a % b;
    printf("Modulus: %d %% %d = %d\n", a, b, result);
    
    return 0;
}
