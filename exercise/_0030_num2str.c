/*
Filename: _0030_num2str.c
Title: Integer to Words Converter in C
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 30, 2024 | Last Updated: August 30, 2024
Language: C | Version: clang-14

Description:
This program converts an integer input (as a string) to its corresponding words. The user enters an integer, and the program outputs the number in words. The program supports digits from 0 to 9 and handles negative numbers by recognizing the '-' sign. If a non-numeric character is detected, the program will notify the user.
*/

// Include the standard input/output library
#include <stdio.h>

// Main function: Entry point of the program
int main()
{
    int i = 0;  // Initialize the index variable for looping through the string
    char num[9999] = " ";  // Declare a character array to store the input number as a string

    // Display a message to indicate the start of the program
    printf("\nInteger To Words\n\n");

    // Prompt the user to enter an integer value
    printf("Enter An Integer Value: ");
    scanf("%s", &num[0]);  // Read the input as a string

    // Loop through each character in the string until the null terminator is reached
    for (; num[i] != '\0';)
    {
        // Check each character and print the corresponding word
        if (num[i] == '1')
        {
            printf("One ");
        }
        else if (num[i] == '2')
        {
            printf("Two ");
        }
        else if (num[i] == '3')
        {
            printf("Three ");
        }
        else if (num[i] == '4')
        {
            printf("Four ");
        }
        else if (num[i] == '5')
        {
            printf("Five ");
        }
        else if (num[i] == '6')
        {
            printf("Six ");
        }
        else if (num[i] == '7')
        {
            printf("Seven ");
        }
        else if (num[i] == '8')
        {
            printf("Eight ");
        }
        else if (num[i] == '9')
        {
            printf("Nine ");
        }
        else if (num[i] == '0')
        {
            printf("Zero ");
        }
        else if (num[i] == '-')
        {
            printf("Minus ");
        }
        else 
        {
            // If an alphabet or invalid character is detected, print a message
            printf("\nAn Alphabet Or Invalid Character Has Been Detected.");
        }

        i++;  // Move to the next character in the string
        printf(" ");  // Print a space between words
    }

    return 0;  // Return 0 to indicate successful execution of the program
}
