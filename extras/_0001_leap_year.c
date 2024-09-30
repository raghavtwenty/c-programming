/*
Filename: _0001_leap_year.c
Title: Program To Check If A Year Is A Leap Year
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 30, 2024 | Last Updated: September 30, 2024
Language: C | Version: clang-14

Description:
This program determines if a given year is a leap year. A leap year occurs every four years, except for years that are divisible by 100 but not by 400. The program takes a year as input from the user and outputs whether the year is a leap year or not.
*/

// Importing standard input/output library
#include <stdio.h>   

// Main 
int main()
{
    int year;  // Variable to hold the year input by the user

    // Display program title
    printf("\nLeap Year Or Not.\n\n");

    // Prompt the user to enter a calendar year
    printf("Enter A Calendar Year: ") && scanf("%d", &year);

    /* 
    Conditions for a leap year:
    - The year must be divisible by 4.
    - However, if the year is divisible by 100, it must also be divisible by 400.
    */
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        // If the year meets the leap year conditions, print the result
        printf("\nIt's A Leap Year.\n");
    }
    else
    {
        // If the year does not meet the leap year conditions, print the result
        printf("\nIt's Not A Leap Year.\n");
    }

    return 0;  
}
