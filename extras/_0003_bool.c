/*
Filename: _0003_bool.c
Title: Program To Perform true, false with built-in library
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 30, 2024 | Last Updated: September 30, 2024
Language: C | Version: clang-14

Description:
This program demonstrates comparison operations between a floating-point number and an integer in C. The comparison results are stored in a `double` type variable and then printed. In C, boolean results of comparisons are represented as integers: `true` is 1 and `false` is 0. These values are implicitly cast to a `double` for display in the output.
*/

// Importing standard libraries
#import <stdio.h>     
#import <stdbool.h>   

// Main
int main()
{
    // Variable declarations
    float a = 0.95;    // 'a' is initialized with a floating-point value
    int b = 1;         // 'b' is initialized with an integer value

    // Performing comparison (a < b)
    // The result of the comparison is a boolean value (true or false)
    // In C, true = 1, false = 0. The result is implicitly cast to a double for printing.
    double c = a < b;  // This will evaluate to true (1) because 0.95 is less than 1
    printf("%f\n", c); // Prints the result as a double (1.000000)

    // Performing comparison (a > b)
    // This will evaluate to false (0) because 0.95 is not greater than 1
    double e = a > b;
    printf("%f\n", e); // Prints the result as a double (0.000000)

    return 0;  
}
