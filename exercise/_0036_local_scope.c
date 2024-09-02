/* 
Filename: _0036_local_scope.c
Title: Variable Local Scope Illustration in C
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 2, 2024 | Last Updated: September 2, 2024
Language: C | Version: clang-14

Description:
This program demonstrates the scope of variables in C by showing how variables with the same name can exist in different blocks (local scopes) and how their values are independent within their respective scopes. The program uses nested blocks to illustrate how variable shadowing works.
*/

// Importing Necessary Libraries
#include<stdio.h>  // Standard input/output library

// Main Function: Entry point of the program
int main()
{
    // Display the purpose of the program
    printf("\nProgram To Illustrate Scope Of Variables.\n\n");

    // Declare and initialize three variables
    int x = 1, y = 2, z = 3;

    // Print the initial values of x, y, and z
    printf("Initial Values Are: x = %d, y = %d, z = %d\n", x, y, z);

    // Start a new block scope
    {
        // Declare and initialize new variables x and y, which will shadow the outer x and y
        int x = 10;      // This x is local to this block and hides the outer x
        float y = 50.0;  // This y is local to this block and hides the outer y
        
        // Print the values of x, y, and z within this block
        printf("\nAfter Changing The Values Of x & y : x = %d, y = %f, z = %d\n", x, y, z);

        // Start another nested block scope
        {
            // Declare and initialize a new variable z, which will shadow the outer z
            int z = 700;  // This z is local to this block and hides the outer z

            // Print the values of x, y, and z within this nested block
            printf("\nAfter Changing The Value Of z : x = %d, y = %f, z = %d\n", x, y, z);
        } // End of the nested block, z from this block goes out of scope
    } // End of the first block, x and y from this block go out of scope

    // Return 0 to indicate successful execution of the program
    return 0;
}
