/*
Filename: _0004_vote.c
Title: Program To Check Voting Eligibility
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 1, 2024 | Last Updated: October 1, 2024
Language: C | Version: clang-14

Description:
This program prompts the user to input their age and determines whether they are eligible to vote. 
In this case, eligibility is defined as being at least 18 years old but no older than 102. 
The program uses an `if-else` statement to check the age range and outputs the appropriate message based on the user's input.
*/

// Importing the standard input-output library
#import <stdio.h>   

// Main
int main()
{
    // Variable declaration for storing the user's age
    int age;
    
    // Title of the program
    printf("\nEligibility To Vote\n\n");
    
    // Prompting the user to enter their age
    printf("Enter Your Age: ") && scanf("%d", &age);
    
    // Check if the user's age is between 18 and 102 (inclusive)
    if ((age >= 18) && (age <= 102))
    {
        // If the age is valid, the user is eligible to vote
        printf("\nYou're Eligible To Vote.\n");
    }
    else
    {
        // If the age is outside the valid range, the user is not eligible to vote
        printf("\nYou're Not Eligible To Vote.\n");
    }
    
    return 0;
}
