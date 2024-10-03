/*
Filename: _0010_hello_loop.c
Title: Program To Print "Hello" 10 Times Using a Function
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 3, 2024 | Last Updated: October 3, 2024
Language: C | Version: clang-14

Description:
This program demonstrates the use of a function to print "Hello" multiple times. 
The function `hello()` is called inside a loop, and it prints the word "Hello" 10 times to the console.
*/

// Importing the standard input-output library
#include <stdio.h>

// Function to print "Hello"
void hello()
{
    printf("Hello\n");  // Printing "Hello"
}

// Main 
int main()
{
    // Loop to call the hello() function 10 times
    for (int i = 0; i < 10; i++)  // Changed loop condition to i < 10 for 10 iterations
    {
        hello();  // Calling the hello() function
    }

    return 0;  
}
