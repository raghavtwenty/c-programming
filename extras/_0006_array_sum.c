/*
Filename: _0006_array_sum.c
Title: Program To Calculate Sum of Array Elements
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 1, 2024 | Last Updated: October 1, 2024
Language: C | Version: clang-14

Description:
This program reads an array of integers from the user and calculates the sum of the entered values. 
It first prompts the user to input the number of values they want to store in the array, then reads the values into the array, 
displays them, and calculates their sum, which is then printed
*/

// Importing the standard input-output library
#import <stdio.h>  

// Function to calculate the sum of array elements
int main()  
{
    // Variable declaration
    int a[5], n, i;

    // Prompting the user to enter the number of values to store in the array
    printf("\nEnter The Number Of Values To Store: ") && scanf("%d", &n);  

    // Loop to store the values entered by the user in the array
    for (i = 0; i < n; i++)
    {
        printf("Enter Value %d: ", i + 1);  
        // Prompting for each value
        scanf("%d", &a[i]);  
    }

    // Loop to display the entered values and calculate the sum
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);  // Printing each value of the array
        sum = sum + a[i];  // Adding the current array element to the sum
    }

    // Printing the calculated sum
    printf("\nSum of array elements: %d\n", sum);

    return 0;
}
