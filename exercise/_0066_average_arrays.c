/*
Filename: _0066_average_arrays.c
Title: Program to Find the Average of N Numbers Using Arrays
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 12, 2024 | Last Updated: September 12, 2024
Language: C | Version: clang-14

Description:
This program allows the user to input 'n' integers, stores them in an array, and calculates the average of the numbers.
*/


// Importing required libraries
#include <stdio.h>

// Main function: Entry point of the program
int main()
{
    // Display the purpose of the program
    printf("\nProgram To Find The Average Of N Numbers Using Arrays.\n\n");

    // Declare variables
    int arr[100], num, sum = 0;  // 'arr' stores numbers, 'num' stores the number of elements, 'sum' will accumulate the total sum
    float avg;                   // 'avg' will store the calculated average

    // Prompt the user for the number of elements
    printf("How Many Elements: ");
    scanf("%d", &num);  // Read the number of elements from the user

    // Get input in a loop and compute the sum of the array elements
    for (int i = 0; i < num; i++)
    {
        printf("Enter the %dth element: ", i + 1);
        scanf("%d", &arr[i]);  // Store each element in the array

        sum += arr[i];  // Add the element to the sum
    }

    // Calculate the average
    avg = (float)sum / num;  // Cast sum to float to get a precise average

    // Display the average
    printf("\nAverage of the Array: %.2f\n", avg);  // Print the average with 2 decimal precision

    // Return 0 to indicate successful execution
    return 0;
}
