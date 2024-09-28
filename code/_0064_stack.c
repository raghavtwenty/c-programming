/*
Filename: _0064_stack.c
Title: Simple Stack
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 28, 2024 | Last Updated: September 28, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <string.h> 
#include <stdlib.h> 
#include <stdio.h>   

#define max 20  // Define the maximum size of the stack as 20

// Global variables
int count, stack[max];  // Declare a counter `count` and an array `stack` with a maximum size of 20

// Function to push a character onto the stack
void push(char x)
{
    // Check if the stack is full (overflow condition)
    if(count == max-1)
    {
        printf("Stack overflow");  // If the stack is full, print an error message
    }
    else
    {
        // Increment the `count` index and store the character at that position in the stack
        stack[++count] = x;
    }
}

// Function to pop a character from the stack and print it
void pop()
{
    // Print the character at the current top of the stack, then decrement `count`
    printf("%c", stack[count--]);
}

// Main function to reverse a string using the stack
int main()
{
    char *str = "HELLO";  // Initialize a string to be reversed
    int i, n = strlen(str);  // Get the length of the string using `strlen`

    // Push each character of the string onto the stack
    for(i = 0; i < n; i++)
        push(str[i]);

    // Pop and print each character from the stack to reverse the string
    for(i = 0; i < n; i++)
        pop();

    return 0;  
}
