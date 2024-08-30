/*
Filename: _0028_mid_seq.c
Title: Find the Middle Number in a Sequence in C
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 30, 2024 | Last Updated: August 30, 2024
Language: C | Version: clang-14

Description:
This program identifies the middle value(s) in a sequence of numbers entered by the user. The program first collects the sequence, then sorts the array in ascending order, and finally determines the middle number(s). If the array has an odd number of elements, the single middle number is displayed. If the array has an even number of elements, the two middle numbers are shown.
*/

// Include the standard input/output library
#include <stdio.h>   

// Main function: Entry point of the program
int main()
{
    int n, i, j, arr[100];  // Declare integers for indexing and an array to hold up to 100 integers
    int val, temp, mid, mid_val;  // Declare additional integers for temporary storage and to calculate the middle element

    // Display a message to indicate the start of the program
    printf("\nMiddle Number In The Sequence.\n\n");

    // Prompt the user to enter the number of values in the array
    printf("Enter The Number Of Values In Array: ") && scanf("%d", &n);

    // Append values to the array
    for (i = 1; i <= n;)  // Loop through from 1 to n to fill the array
    {
        printf("Enter The %dth Value: ", i);  // Prompt user for each value
        scanf("%d", &arr[i]);
        i++;  // Increment the index
    }

    // Display the array before sorting
    printf("\nArray Before Sorting: "); 
    for (i = 1; i <= n;)  // Loop through the array to display each element
    {
        printf("%d,", arr[i]);  // Print each element followed by a comma
        i++;  // Increment the index
    }

    // Sort the array in ascending order
    for (i = 1; i <= n; i++)  // Outer loop for each element
    {
        for (j = i + 1; j <= n; j++)  // Inner loop to compare elements
        {
            if (arr[i] > arr[j])  // If the current element is greater than the next one
            {
                // Swap the elements
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Display the array after sorting
    printf("\nArray After Sorting: "); 
    for (i = 1; i <= n;)  // Loop through the sorted array to display each element
    {
        printf("%d,", arr[i]);  // Print each element followed by a comma
        i++;  // Increment the index
    }

    // Find and display the middle value(s)
    mid = n / 2;  // Calculate the middle index
    mid_val = (n % 2 == 0) ? 1 : 0;  // Check if the number of elements is even or odd

    if (mid_val == 1)  // If even, display the two middle values
    {
        printf("\nThe Middle Numbers Are: %d, %d", arr[mid], arr[mid + 1]);
    }
    else  // If odd, display the single middle value
    {
        printf("\nThe Middle Number Is: %d", arr[mid + 1]); 
    }

    // Return 0 to indicate successful execution of the program
    return 0;  
}
