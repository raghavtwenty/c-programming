/*
Filename: _0018_vowel_count.c
Title: Counting the Number of Vowels in a String
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 26, 2024 | Last Updated: August 26, 2024
Language: C | Version: clang-14

Description:
This program counts the number of vowels in a given string. The user is prompted to input a word, 
and the program iterates through each character to check if it's a vowel (both lowercase and uppercase). 
It then outputs the total number of vowels found in the string.
*/

// Include the standard input/output library
#include <stdio.h>  

// Main function: Entry point of the program
int main()
{
    // Declare a character array to store the input string and an integer for the vowel count
    char s[1000];
    int count = 0, c = 0;

    // Display the purpose of the program to the user
    printf("\nCounting Vowels.\n\n");

    // Prompt the user to input a word
    printf("Enter A Word To Count Vowels: ") && scanf("%s", s);

    // Loop through each character in the string until the null terminator is reached
    while (s[c] != '\0') {
        // Check if the current character is a vowel (both lowercase and uppercase)
        if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || 
            s[c] == 'i' || s[c] == 'I' || s[c] == 'o' || s[c] == 'O' || 
            s[c] == 'u' || s[c] == 'U') {
            count++;  // Increment the vowel count if a vowel is found
        }
        c++;  // Move to the next character in the string
    }

    // Display the total count of vowels in the string
    printf("\nVowel Count: %d\n", count);

    // Return 0 to indicate successful execution of the program
    return 0;
}
