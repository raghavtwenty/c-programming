/*
Filename: _0016_replace_primes.c
Title: Program To Replace Prime Numbers And The Number 1 With 0
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 5, 2024 | Last Updated: October 5, 2024
Language: C | Version: clang-14

Description:
This program defines an array of integers and replaces all prime numbers and the number 1 with 0. 
It uses a helper function `replace()` to check each number in the array and modify it accordingly.
*/

// Importing the standard input-output library
#include <stdio.h>

// Global array declaration
int arr[] = {1, 2, 3, 4, 5, 6};

// Function to replace prime numbers and the number 1 with 0
void replace(int num, int i)
{
    int count = 0;  // Variable to count the number of divisors

    // If the number is 1, replace it with 0
    if (num == 1)
    {
        arr[i] = 0;
        return;  // Early return as we already modified the value
    }

    // Checking if the number is prime
    for (int j = 2; j <= num; j++)
    {
        if (num % j == 0)
        {
            count++;
        }
    }

    // If the number is prime (only two divisors: 1 and itself), replace it with 0
    if (count == 1)
    {
        arr[i] = 0;
    }
}

// Main
int main()
{
    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(int);
    int i = 0;

    // Iterate through the array and replace values as needed
    while (i < n)
    {
        replace(arr[i], i);
        i++;
    }

    // Display the modified array
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");

    return 0;  
}
