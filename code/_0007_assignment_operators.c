/*
Filename: _0007_assignment_operators.c
Title: Assignment operators
Author: Raghava | GitHub: @raghavtwenty
Date Created: July 26, 2024 | Last Updated: July 26, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

int main() {
    // Variables
    int a = 10, b = 5;
    int result;

    // Simple assignment
    result = a; 
    printf("Assignment: result = a -> result = %d\n", result);
    
    // Add and assign
    result += b; 
    printf("Add and assign: result += b -> result = %d\n", result);
    
    // Subtract and assign
    result -= b; 
    printf("Subtract and assign: result -= b -> result = %d\n", result);
    
    // Multiply and assign
    result *= b; 
    printf("Multiply and assign: result *= b -> result = %d\n", result);
    
    // Divide and assign
    result /= b; 
    printf("Divide and assign: result /= b -> result = %d\n", result);
    
    // Modulus and assign
    result %= b; 
    printf("Modulus and assign: result %%= b -> result = %d\n", result);
    
    // Demonstrate use of assignment operators with float
    float x = 10.5, y = 2.5;
    
    // Simple assignment
    x = y; 
    printf("\nAssignment: x = y -> x = %.2f\n", x);
    
    // Add and assign
    x += y;
    printf("Add and assign: x += y -> x = %.2f\n", x);
    
    // Subtract and assign
    x -= y; 
    printf("Subtract and assign: x -= y -> x = %.2f\n", x);
    
    // Multiply and assign
    x *= y; 
    printf("Multiply and assign: x *= y -> x = %.2f\n", x);
    
    // Divide and assign
    x /= y; 
    printf("Divide and assign: x /= y -> x = %.2f\n", x);

    return 0;
}
