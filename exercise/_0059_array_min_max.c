/*
Filename: _0059_array_min_max.c
Title: Program To Find The Maximum And The Minimum Element In The Array
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 10, 2024 | Last Updated: September 10, 2024
Language: C | Version: clang-14

Description:
This program finds and displays the minimum and maximum elements from a user-provided array. The user is asked to input the number of elements in the array and the corresponding values. The program then iterates through the array to determine the minimum and maximum values.
*/


// Importing Required Libraries
#include <stdio.h>   // Standard input/output library


// Main function: Entry point of the program
int main()
{
    // Display the purpose of the program
    printf("\nProgram To Find The Maximum And The Minimum Element In The Array.\n\n") ;

    // Declare an integer array 'arr' to store up to 20 elements
    // 'max' holds the maximum value, 'mini' holds the minimum value
    // 'n' stores the number of elements in the array, 'i' is used as a loop counter
    int arr[20], max = 0, mini = 99999999, n, i ;

    // Prompt the user to enter the number of elements to be stored in the array
    printf("Enter The Number Of Values To Store: ") && scanf("%d", &n) ;
    
    // Loop to accept the values from the user and store them in the array
    for(i = 0; i < n; i++) // Iterate through all the elements
    {
        // Prompt the user to enter the value at the current index
        printf("Enter The Value Of %d: ", i) && scanf("%d", &arr[i]) ;
    }

    // Loop to find the maximum and minimum values in the array
    for(i = 0; i < n; i++)
    {
        // If the current element is greater than the current maximum, update 'max'
        if (arr[i] > max)
        {
            max = arr[i] ;
        }
        
        // If the current element is smaller than the current minimum, update 'mini'
        if (arr[i] < mini)  // Changed to remove the "else if" condition for accuracy
        {
            mini = arr[i] ;
        }
    }

    // Display the maximum and minimum elements
    printf("\nMaximum Element: %d\n", max) ;
    printf("Minimum Element: %d\n", mini) ;

    // Return 0 to indicate successful execution
    return 0 ;
}
