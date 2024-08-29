/*
Filename: _0026_grade.c
Title: Average Marks and Grade Calculator in C
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 29, 2024 | Last Updated: August 29, 2024
Language: C | Version: clang-14

Description:
This program calculates the total marks, average percentage, and grade based on the marks entered for five subjects. The program uses loops to collect the marks and conditional statements to determine the appropriate grade based on the calculated percentage.
*/

// Include the standard input/output library
#include <stdio.h>   

// Main function: Entry point of the program
int main()
{
    int i;                 // Declare an integer variable for loop indexing
    float mark = 0;        // Declare a float variable to store the sum of marks
    float arr[5];          // Declare a float array to store marks of five subjects
    float perc;            // Declare a float variable to store the calculated percentage

    // Display a message to indicate the start of the program
    printf("\nAverage Of Five Subjects.\n");

    // Collect marks for each subject using a loop
    for (i = 0; i < 5; i++) // Start the loop from index 0 to 4 (for five subjects)
    {
        // Prompt the user to enter the mark for the current subject
        printf("Enter The Mark Of Subject %d: ", i+1);
        scanf("%f", &arr[i]);
    }

    // Calculate the sum of marks using a loop
    for (i = 0; i < 5; i++) // Loop through the array to sum up the marks
    {
        mark += arr[i];
    }

    // Display the total marks
    printf("\nTotal Mark: %.2f\n", mark);

    // Calculate the percentage by dividing the total marks by the number of subjects
    perc = mark / 5.0; // Use float division to calculate the percentage
    printf("Overall Percentage: %.2f%%\n", perc);

    // Determine the grade based on the percentage using conditional statements
    if (perc < 40)
        printf("\nGrade: Fail\n");
    else if (perc >= 40 && perc < 55)
        printf("\nGrade: Pass & Third Division\n");
    else if (perc >= 55 && perc < 65)
        printf("\nGrade: Second Division\n");
    else if (perc >= 65 && perc < 80)
        printf("\nGrade: First Division\n");
    else if (perc >= 80 && perc < 90)
        printf("\nGrade: Distinction\n");
    else if (perc >= 90 && perc <= 100)
        printf("\nGrade: Extraordinary\n");

    // Return 0 to indicate successful execution of the program
    return 0;
}
