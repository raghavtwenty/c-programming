/*
Filename: _0008_even_numbers.c
Title: Even Numbers up to 100
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 23, 2024 | Last Updated: August 23, 2024
Language: C | Version: clang-14

Description:
This program prints all even numbers from 0 to 100. It uses a loop to iterate through 
the numbers and checks whether each number is even. If the number is even, it is printed.
*/


// Include the standard input/output library
#include <stdio.h>  

// Main function: Entry point of the program
int main()
{
    // Declare an integer variable 'i' for loop iteration
    int i;

    // Display the purpose of the program to the user
    printf("\nThe even numbers up to 100 are:\n");

    // Loop from 0 to 100
    for(i = 0; i <= 100; i++)
    {
        // Check if the current number 'i' is even
        if(i % 2 == 0)
            // If 'i' is even, print it
            printf("%d, ", i);
    }

    // Return 0 to indicate successful execution of the program
    return 0;
}
