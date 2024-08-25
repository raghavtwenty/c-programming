/*
Filename: _0015_mark_percentage.c
Title: Sum and Percentage Calculation
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 25, 2024 | Last Updated: August 25, 2024
Language: C | Version: clang-14

Description:
This program calculates the sum of marks obtained in three subjects and the corresponding percentage. 
The user is prompted to input the marks for three subjects. The program then computes the total sum of the marks 
and calculates the percentage based on a total of 300 marks.
*/

// Include the standard input/output library
#include <stdio.h>  

// Main function: Entry point of the program
int main()
{
    // Declare variables to store marks, sum, and percentage
    float m1, m2, m3, sum, percentage;

    // Display the purpose of the program to the user
    printf("\nSum and Percentage of Three Subjects\n\n");

    // Prompt the user to input marks for three subjects
    printf("Input subject 1 mark: ") && scanf("%f", &m1);
    printf("Input subject 2 mark: ") && scanf("%f", &m2);
    printf("Input subject 3 mark: ") && scanf("%f", &m3);

    // Calculate the sum of the marks
    sum = m1 + m2 + m3;

    // Calculate the percentage (assuming the maximum marks per subject are 100, total is 300)
    percentage = (sum / 300) * 100;

    // Display the calculated sum and percentage
    printf("\nThe sum of three subjects is: %f\n", sum);
    printf("The Total percentage is: %f%%\n", percentage);

    // Return 0 to indicate successful execution of the program
    return 0;
}
