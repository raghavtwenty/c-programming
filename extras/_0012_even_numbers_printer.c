/*
Filename: _0012_even_numbers_printer.c
Title: Program To Print Even Numbers Up To A Given Number
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 3, 2024 | Last Updated: October 3, 2024
Language: C | Version: clang-14

Description:
This program prompts the user to enter a number and prints all even numbers from 1 up to that number. 
It uses a `while` loop to iterate through the numbers and checks if each number is divisible by 2 to determine if it is even.
*/

// Importing the standard input-output library
#import <stdio.h>

// Main
int main()
{
    // Variable declaration
    int num, i;

    // Prompting the user to enter the last number
    printf("Enter The Last Number: ");
    scanf("%d", &num);  // Reading the user's input

    // Initializing the loop variable
    i = 1;

    // Loop to iterate from 1 to the entered number
    while (i <= num) {
        // Check if the current number is even
        if (i % 2 == 0)
            printf("%d\n", i);  // Print the even number

        i++;  // Increment the loop variable
    }

    return 0;  
}
