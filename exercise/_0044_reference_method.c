/*
Filename: _0044_reference_method.c
Title: Swapping variables using call by reference method
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 5, 2024 | Last Updated: September 5, 2024
Language: C | Version: clang-14

Description:
This program demonstrates the use of the call by reference method to swap the values of two variables. The function `swap` takes the addresses of the two variables and modifies their values directly. The program takes input from the user for two variables and displays their values before and after swapping.
*/

// Importing Required Libraries 
#include <stdio.h>  // Standard input/output library

// Function Initialization
// This function takes two integer pointers as arguments and swaps the values of the integers they point to
void swap(int *a, int *b);

// Main Function: Entry point of the program
int main()
{
    // Display the purpose of the program
    printf("\nSwapping The Values Of Two Variables By Reference Method.\n\n");

    // Declare two integer variables `a` and `b`
    int a, b;

    // Prompt the user to enter the value for variable `a`
    printf("Enter The Value Of A: ") && scanf("%d", &a);

    // Prompt the user to enter the value for variable `b`
    printf("Enter The Value Of B: ") && scanf("%d", &b);

    // Display the values of `a` and `b` before swapping
    printf("\nThe Values Of A and B Before Swapping Are %d And %d\n", a, b);

    // Call the swap function, passing the addresses of `a` and `b`
    swap(&a, &b);

    // Return 0 to indicate successful execution
    return 0;
}

// Swap Function Definition
// This function swaps the values of the two variables whose addresses are passed to it
void swap(int *a, int *b)
{
    // Swap the values using arithmetic operations
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;

    // Display the values of `a` and `b` after swapping
    printf("The Values Of A And B After Swapping Are %d And %d\n", *a, *b);
}
