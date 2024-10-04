/*
Filename: _0014_sum_of_digits.c
Title: Program To Calculate The Sum Of Digits Of A Five-Digit Number
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 4, 2024 | Last Updated: October 4, 2024
Language: C | Version: clang-14

Description:
This program takes a five-digit number as input from the user and calculates the sum of its digits. 
It uses a `while` loop to extract each digit and adds them together to find the total sum.
*/

// Importing the standard input-output library
#import <stdio.h>

// Main
int main()
{
    // Variable declaration
    int a, add = 0, num, count = 0;

    // Prompting the user to enter a five-digit number
    printf("\nEnter A Five Digit Number: ") && scanf("%d", &a); 

    // Processing the number and calculating the sum of its digits
    num = a;  // Storing the input number in `num` to avoid altering the original input
    while (count != 5)
    {
        int digit = num % 10;  // Extracting the last digit
        add += digit;  // Adding the digit to the total sum
        num /= 10;  // Removing the last digit from the number
        count++;  // Incrementing the count
    }

    // Displaying the sum of the digits
    printf("\nSum: %d\n", add);

    return 0;  
}
