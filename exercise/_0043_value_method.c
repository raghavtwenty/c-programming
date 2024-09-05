/*
Filename: _0043_value_method.c
Title: To swap and print the variables entered using call by value
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 5, 2024 | Last Updated: September 5, 2024
Language: C | Version: clang-14

Description:
This program demonstrates swapping two integer values using the call-by-value method in C. The values of two variables, `a` and `b`, are swapped using a helper function. However, since C uses pass-by-value, the original values in the `main` function remain unchanged.
*/


// Importing Required Libraries 
#include <stdio.h>  // Standard input/output library


// Function to Swap Values
// This function swaps the values of two integer variables, `a` and `b`, using a simple arithmetic approach
// Since the function uses call-by-value, the original variables in the `main` function are not affected
void swap(int a, int b) 
{
    // Swapping the values of `a` and `b` without using a temporary variable
    a = a + b;  // Step 1: Add `a` and `b`, store the result in `a`
    b = a - b;  // Step 2: Subtract the new `a` by `b` to get the original `a` value, store it in `b`
    a = a - b;  // Step 3: Subtract the new `b` from `a` to get the original `b` value, store it in `a`

    // Display the swapped values
    printf("The Values Of A And B After Swapping Are %d And %d\n", a, b) ;
}


// Main Function: Entry point of the program
int main()
{
    // Display the purpose of the program
    printf("\nSwapping The Values Of Two Variables.\n\n") ;

    // Variable Declaration
    int a, b ;  // Declare two integer variables `a` and `b`

    // Input: Ask the user to enter values for `a` and `b`
    printf("Enter The Value Of A: ") && scanf("%d", &a) ;  // Read the value of `a`
    printf("Enter The Value Of B: ") && scanf("%d", &b) ;  // Read the value of `b`
    
    // Output: Display the original values of `a` and `b` before swapping
    printf("\nThe Values Of A And B Before Swapping Are %d And %d\n", a, b) ; 
    
    // Call the `swap` function to swap the values of `a` and `b`
    swap(a, b) ;  // This will swap and print the values within the function

    // Return 0 to indicate successful execution
    return 0 ; 
}
