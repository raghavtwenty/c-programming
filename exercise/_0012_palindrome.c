/*
Filename: _0012_palindrome.c
Title: Palindrome Number Check
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 24, 2024 | Last Updated: August 24, 2024
Language: C | Version: clang-14

Description:
This program checks whether a given integer is a palindrome. A palindrome is a number that remains 
the same when its digits are reversed. The user is prompted to input an integer, and the program 
determines if the number is a palindrome by reversing its digits and comparing it with the original number.
1221
*/

// Include the standard input/output library
#include <stdio.h>  

// Main function: Entry point of the program
int main()
{
    // Declare variables: 'num' for calculations, 'ans' for the reversed number, 'in_val' for input, and 'i' for the remainder
    int num, ans = 0, in_val, i;

    // Display the purpose of the program to the user
    printf("\nPalindrome Or Not.\n\n");

    // Prompt the user to enter a number and store it in 'in_val'
    printf("Enter Number To Check: ");
    scanf("%d", &in_val);

    // Assign the value of 'in_val' to 'num' for processing
    num = in_val;

    // Loop to reverse the digits of the number
    while (num > 0) {
        i = num % 10;          // Get the last digit of 'num'
        ans = (ans * 10) + i;  // Add the digit to 'ans', effectively reversing the number
        num /= 10;             // Remove the last digit from 'num'
    }

    // Compare the reversed number with the original number
    if (in_val == ans)
        printf("\nIt's A Palindrome.\n");
    else
        printf("\nIt's Not A Palindrome.\n");

    // Return 0 to indicate successful execution of the program
    return 0;
}
