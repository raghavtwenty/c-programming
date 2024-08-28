/*
Filename: _0023_armstrong.c
Title: Check if a Number is an Armstrong Number
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 28, 2024 | Last Updated: August 28, 2024
Language: C | Version: clang-14

Description:
This program checks whether a given integer is an Armstrong number. An Armstrong number is an n-digit number that is equal to the sum of its digits each raised to the power of n. For a three-digit number, this means the sum of the cubes of its digits equals the number itself.
*/


// Include the standard input/output library
#include <stdio.h>   
// Include the math library for the pow function
#include <math.h>    

// Main function: Entry point of the program
int main()
{
    int n, num, dup, sum = 0;  // Declare integer variables for the number, its digits, and the sum of the cubes of the digits

    // Display the purpose of the program to the user
    printf("\nArmstrong Number\n");

    // Prompt the user to input a number to check
    printf("Enter A Number To Check: ") && scanf("%d", &n);

    num = n;  // Store the original number in a temporary variable

    // Loop to calculate the sum of the cubes of each digit
    while (num != 0)
    {
        dup = num % 10;           // Extract the last digit of the number
        sum = sum + pow(dup, 3);  // Add the cube of the digit to the sum
        num = num / 10;           // Remove the last digit from the number
    }

    // Check if the original number is equal to the calculated sum
    if (n == sum)
    {
        printf("\nIt's Armstrong!\n");  // The number is an Armstrong number
    }
    else
    {
        printf("\nIt's Not An Armstrong\n");  // The number is not an Armstrong number
    }

    return 0;  // Return 0 to indicate successful execution of the program
}
