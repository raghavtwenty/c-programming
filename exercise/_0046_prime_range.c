/*
Filename: _0046_prime_range.c
Title: Program to find prime numbers in a given range using functions
Date Created: September 6, 2024 | Last Updated: September 6, 2024
Author: Raghava | GitHub: @raghavtwenty
Language: C | Version: clang-14

Description:
This program finds all prime numbers within a given range provided by the user. The user enters two integers representing the lower and upper bounds of the interval. The program then checks each number in this range to determine if it is a prime number using a loop structure and displays the result.
*/

// Importing Required Libraries 
#include <math.h>   // Used for mathematical operations
#include <stdio.h>  // Standard input/output library

// Main Function: Entry point of the program
int main() 
{
    // Display the purpose of the program
    printf("\nSet Of Prime Numbers In Between A Range.\n\n");

    // Declare variables to store the range and loop counters
    int a, b, i, j, g;

    // Prompt the user to input the lower and upper bounds of the interval
    printf("Enter Lower Bound Of The Interval: ") && scanf("%d", &a); 
    printf("Enter Upper Bound Of The Interval: ") && scanf("%d", &b);

    // Display the range and initiate the search for prime numbers
    printf("\nPrime Numbers Between %d And %d Are: ", a, b);
    
    // Loop through all numbers in the range [a, b]
    for (i = a; i <= b; i++) 
    {
        // Skip the numbers 0 and 1, as they are not prime
        if (i == 1 || i == 0)
            continue;

        g = 1;  // Assume the number is prime (g = 1)

        // Check divisibility of the number by all integers up to its half
        for (j = 2; j <= i / 2; ++j) 
        { 
            if (i % j == 0)  // If the number is divisible by any j, it's not prime
            {
                g = 0;  // Mark the number as non-prime (g = 0)
                break;  // Exit the loop as we have found a divisor
            }
        }

        // If the number is still marked as prime, print it
        if (g == 1)
        {
            printf("%d ", i);
        }
    }
    
    // Print a newline after the output
    printf("\n");
    
    // Return 0 to indicate successful execution
    return 0;
}