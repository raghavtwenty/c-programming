/*
Filename: _0024_calculator.c
Title: Simple Calculator in C
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 28, 2024 | Last Updated: August 28, 2024
Language: C | Version: clang-14

Description:
This program implements a simple calculator that can perform basic arithmetic operations (addition, subtraction, multiplication, and division) on two floating-point numbers. The program uses both `if-else` statements and `switch-case` statements to demonstrate the computation of the result based on the operator provided by the user.
*/


// Include the standard input/output library
#include <stdio.h>   

// Main function: Entry point of the program
int main()
{
    float a, b, result;   // Declare variables for the operands and the result
    char c;               // Declare a variable to store the operator

    // Display a message to indicate the start of the program
    printf("\nSimple Calculator\n");

    // Prompt the user to enter an arithmetic expression
    printf("\nEnter The Expression To Be Computed: ") && scanf("%f %c %f", &a, &c, &b);

    // Using If...Else... statements to compute the result based on the operator
    printf("\nUsing If...Else...\n");
    if (c == '+')
        result = a + b;
    else if (c == '-')
        result = a - b;
    else if (c == '*')
        result = a * b;
    else if (c == '/')
        result = a / b;
    else
    {
        // Handle invalid operations
        printf("Invalid Operation!\n");
        return 1;  // Return non-zero value to indicate an error
    }

    // Display the result of the computation
    printf("%f %c %f = %f\n", a, c, b, result);

    // Using Switch Case statements to compute the result based on the operator
    printf("\nUsing Switch Case\n");
    switch (c)
    {
        case '+':
            printf("Addition Result: %f\n", a + b);
            break;
        case '-':
            printf("Subtraction Result: %f\n", a - b);
            break;
        case '*':
            printf("Multiplication Result: %f\n", a * b);
            break;
        case '/':
            printf("Division Result: %f\n", a / b);
            break;
        default:
            // Handle invalid operations in switch-case
            printf("Invalid Operation!\n");
            return 1;  // Return non-zero value to indicate an error
    }

    return 0;  // Return 0 to indicate successful execution of the program
}
