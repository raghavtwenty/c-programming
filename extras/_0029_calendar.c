/*
Filename: _0026_calendar.c
Title: Calendar Printer Program
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 9, 2024 | Last Updated: October 9, 2024
Language: C | Version: clang-14

Description:
This program prints a simple calendar for a specified month, based on the starting day of the week.
The user is prompted to enter the month and the starting day (1 for Sunday to 7 for Saturday).
The program then generates and displays the calendar in a tabular format.
*/

// Importing Required Libraries
#include <stdio.h>
#include <stdlib.h>

// Global variables for looping
int i, j;

// Function declarations
void thirtyone(int start_day);
void thirty(int start_day);
void twentyeight(int start_day);
void printspace(int start_day);

// Main
int main()
{
    int month, day;

    // Input month and starting day
    printf("\nEnter the month (integer value): ");
    scanf("%d", &month);
    
    printf("\nEnter the starting day of the month: \n1-Sunday \n2-Monday \n3-Tuesday \n4-Wednesday \n5-Thursday \n6-Friday \n7-Saturday: ");
    scanf("%d", &day);
    
    // Validate the day input
    if (day < 1 || day > 7) {
        printf("\nInvalid day input. Please enter a valid day (1 to 7).\n");
        return 0;
    }

    // Print the header for the calendar
    printf("\n\t\t\tCALENDAR\n");
    printf("\nsun \tmon \ttue \twed \tthu \tfri \tsat\n");

    // Print initial spaces before the first date
    printspace(day);

    // Based on the month, print the corresponding calendar
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        thirtyone(day);
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        thirty(day);
    }
    else if (month == 2) {
        twentyeight(day);
    }
    else {
        printf("\nInvalid month input.\n");
    }

    printf("\n");
    return 0;
}

// Function to print days for months with 31 days
void thirtyone(int start_day)
{
    int arr31[5][7] = {{1,2,3,4,5,6,7},{8,9,10,11,12,13,14},{15,16,17,18,19,20,21},{22,23,24,25,26,27,28},{29,30,31}};
    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 7; j++) {
            if (arr31[i][j] != 32) {
                if (((start_day - 1) + j) % 7 == 0) {
                    printf("\n%d\t", arr31[i][j]);
                } else {
                    printf("%d\t", arr31[i][j]);
                }
            } else {
                break;
            }
        }
    }
}

// Function to print days for months with 30 days
void thirty(int start_day)
{
    int arr30[5][7] = {{1,2,3,4,5,6,7},{8,9,10,11,12,13,14},{15,16,17,18,19,20,21},{22,23,24,25,26,27,28},{29,30}};
    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 7; j++) {
            if (arr30[i][j] != 31) {
                if (((start_day - 1) + j) % 7 == 0) {
                    printf("\n%d\t", arr30[i][j]);
                } else {
                    printf("%d\t", arr30[i][j]);
                }
            } else {
                break;
            }
        }
    }
}

// Function to print days for February (28 days)
void twentyeight(int start_day)
{
    int arr28[4][7] = {{1,2,3,4,5,6,7},{8,9,10,11,12,13,14},{15,16,17,18,19,20,21},{22,23,24,25,26,27,28}};
    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 7; j++) {
            if (arr28[i][j] != 29) {
                if (((start_day - 1) + j) % 7 == 0) {
                    printf("\n%d\t", arr28[i][j]);
                } else {
                    printf("%d\t", arr28[i][j]);
                }
            } else {
                break;
            }
        }
    }
}

// Function to print initial spaces based on the start day of the month
void printspace(int start_day)
{
    for (i = 1; i < start_day; i++) {
        printf("\t");
    }
}
