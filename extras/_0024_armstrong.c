/*
Filename: _0024_armstrong.c
Title: Program To Check If A Number Is An Armstrong Number
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 7, 2024 | Last Updated: October 7, 2024
Language: C | Version: clang-14

Description:
This program checks whether a given number is an Armstrong number (also known as Narcissistic number). 
An Armstrong number for a given number of digits is a number such that the sum of its digits each raised to the power of the number of digits is equal to the number itself.
For example, 153 is an Armstrong number because 1³ + 5³ + 3³ = 153.
*/

// Importing Required Libraries
#include <stdio.h>
#include <math.h> 

// Function to calculate the Armstrong sum
int arm(int num, int dup, int sum) {
    // Loop through each digit of the number
    while (num != 0) {
        dup = num % 10;                  // Get the last digit
        sum = sum + pow(dup, 3);         // Add the cube of the digit to the sum
        num = num / 10;                  // Remove the last digit
    }

    return sum;                          // Return the calculated sum
}


// Main
int main() {
    int n, num, res;
    
    // User prompt and input
    printf("\nArmstrong Number Checker\n");
    printf("Enter A Number To Check: ") && scanf("%d", &n);              

    num = n;                            // Store the original number for comparison
    int sum = 0;                        // Initialize sum to 0
    int dup = 0;                        // Temporary variable to hold digits

    // Call the function to calculate the Armstrong sum
    res = arm(num, dup, sum);

    // Check if the original number is equal to the calculated Armstrong sum
    if (n == res) {
        printf("\nIt's Armstrong!\n");   
    } else {
        printf("\nIt's Not An Armstrong\n"); 
    }

    return 0;  
}
