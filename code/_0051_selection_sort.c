/*
Filename: _0051_insertion_sort.c
Title: Insertion Sort
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 24, 2024 | Last Updated: September 24, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

// Function to print the elements of the array
void print(int arr[10])
{
    // Declare loop variable
    int i;
    
    // Loop through the array and print each element
    for (i = 0; i < 10; i++)
    {
        // Print current element followed by a space
        printf("%d ", arr[i]); 
    }
    
    // Print a newline for better readability
    printf("\n"); 
}


// Main
int main()
{
    // Initialize array with 10 integer values
    int arr[10] = {5, 8, 9, 3, 6, 4, 7, 3, 1, 4}, min, i, j, temp; 
    
    // Print the original unsorted array
    print(arr);
    
    // Outer loop to iterate over the array elements
    // It selects one element at a time for comparison
    for(i = 0; i < 9; i++)
    {
        // Assume the current element is the minimum
        min = i;
        
        // Inner loop to find the smallest element in the unsorted portion of the array
        for (j = i + 1; j < 10; j++)
        {
            // If the current element is smaller than the assumed minimum, update `min`
            if(arr[min] > arr[j]) min = j;
        }
        
        // Swap the smallest element found with the first unsorted element
        temp = arr[min]; 
        arr[min] = arr[i]; 
        arr[i] = temp; 
        
        // Print the array after each iteration of the outer loop to visualize sorting progress
        print(arr);
    } 
    
    // Once the sorting is complete, print the final sorted array
    printf("Final\n"); 
    print(arr);
}
