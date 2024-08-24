/*
Filename: _0010_average3.c
Title: Average of Three Numbers
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 24, 2024 | Last Updated: August 24, 2024
Language: C | Version: clang-14

Description:
This program calculates the average of three numbers entered by the user. The user is prompted 
to input three numbers, and the program computes and displays their average.
*/

// Include the standard input/output library
#include <stdio.h>  

// Main function: Entry point of the program
int main()
{
    // Declare an integer variable 'i' for the loop, a float 'a' for storing input numbers, and a double 'average' for the result
    int i;
    float a, sum = 0.0;
    double average;

    // Display the purpose of the program to the user
    printf("\nAverage of Three Numbers.\n");

    // Loop to collect three numbers from the user
    for (i = 1; i <= 3; i++)
    {
        printf("Enter %d number: ", i);
        scanf("%f", &a);
        sum += a;  // Accumulate the sum of the numbers
    }

    // Calculate the average
    average = sum / 3.0;

    // Display the calculated average
    printf("\nAverage of three numbers: %f\n", average);

    // Return 0 to indicate successful execution of the program
    return 0;
}
