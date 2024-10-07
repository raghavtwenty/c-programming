/*
Filename: _0023_calculator.c
Title: Basic Calculator Program
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 7, 2024 | Last Updated: October 7, 2024
Language: C | Version: clang-14

Description:
This program performs basic arithmetic operations such as addition, subtraction, multiplication, division, modulus, and power. 
The user is prompted to input two numbers and choose the desired operation from a menu. The program then calls the corresponding function and displays the result.
*/

// Importing Required Libraries
#include <stdio.h>
#include <math.h> 

// Function to perform addition
void add(float a, float b) {
    printf("\nSUM OF TWO NUMBERS : %f\n", a + b);
}

// Function to perform subtraction
void sub(float a, float b) {
    printf("\nSUBTRACTION OF TWO NUMBERS : %f\n", a - b);
}

// Function to perform multiplication
void mul(float a, float b) {
    printf("\nMULTIPLICATION OF TWO NUMBERS : %f\n", a * b);
}

// Function to perform division
void div(float a, float b) {
    // Check if the divisor is zero
    if (b == 0)
        printf("\nDIVISION BY ZERO IS NOT ALLOWED\n");
    else
        printf("\nDIVISION OF TWO NUMBERS : %f\n", a / b);
}

// Function to perform modulus operation (works only for integers)
void mo(int a, int b) {
    // Check if the divisor is zero
    if (b == 0)
        printf("\nMODULUS BY ZERO IS NOT ALLOWED\n");
    else
        printf("\nMODULUS OF TWO NUMBERS : %d\n", a % b);
}

// Function to calculate power (a^b)
void po(float a, float b) {
    printf("\nPOWER OF TWO NUMBERS (a^b) : %f\n", pow(a, b));
}

// Main function
int main() {
    float a, b;    // Variables to store user input numbers
    int c;         // Variable to store user choice of operation

    // Prompt the user for two numbers
    printf("\nEnter 1st number : ") && scanf("%f", &a);

    printf("\nEnter 2nd number : ") && scanf("%f", &b);

    // Display the menu of operations
    printf("\n1. ADD\n2. SUBTRACT\n3. MULTIPLY\n4. DIVIDE\n5. MODULUS\n6. POWER\n");

    // Get the user's choice
    printf("Enter choice : ");
    scanf("%d", &c);

    // Perform the operation based on the user's choice
    switch(c) {
        case 1:
            add(a, b);      // Addition
            break;
        case 2:
            sub(a, b);      // Subtraction
            break;
        case 3:
            mul(a, b);      // Multiplication
            break;
        case 4:
            div(a, b);      // Division
            break;
        case 5:
            mo((int)a, (int)b);  // Modulus (requires integer values)
            break;
        case 6:
            po(a, b);       // Power (a^b)
            break;
        default:
            // If the user input is invalid
            printf("\nINVALID INPUT\n");
    }

    return 0;
}
