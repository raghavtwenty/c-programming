/*
Filename: _0008_swap_positions.c
Title: Program To Swap Array Element Positions
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 2, 2024 | Last Updated: October 2, 2024
Language: C | Version: clang-14

Description:
This program swaps the positions of elements in an array. 
It takes an array of integers and exchanges the first element with the last, the second with the second last, 
and continues swapping until it reaches the middle of the array. 
The result is the reverse of the original array.
*/

// Importing the standard input-output library
#include<stdio.h>

// Global variables to hold numbers for swapping
int num1, num2;

// Function to swap the values of two variables
void swap(int num1, int num2) {
    int temp = num2;  // Storing num2 in a temporary variable
    num2 = num1;  // Assigning num1 to num2
    num1 = temp;  // Assigning the temp value (original num2) to num1
}

// Main
int main()
{
    // Array of integers and loop variables
    int arr[5] = {2, 4, 6, 8, 10}, i, j = 4;

    // Loop to swap the elements at mirrored positions
    for (i = 0; i < 5 / 2; i++)
    {
        num1 = arr[i];  // Storing the element at position i in num1
        num2 = arr[j];  // Storing the element at position j (end of the array) in num2
        swap(num1, num2);  // Swapping the values of num1 and num2
        arr[i] = num2;  // Storing the swapped value in arr[i]
        arr[j] = num1;  // Storing the swapped value in arr[j]
        j--;  // Moving the j pointer towards the middle
    }

    // Loop to display the reversed array
    for (i = 0; i < 5; i++) {
        printf("\n%d", arr[i]);  // Printing each element of the reversed array
    }

    return 0;  
}
