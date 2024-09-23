/*
Filename: _0049_bubble_sort.c
Title: Bubble Sort 
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 23, 2024 | Last Updated: September 23, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h> 

// Function to print the array elements
void print(int arr[]) {
    // Loop through the array and print each element followed by a space
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);  // Print the current element
    }
    // Print a newline after printing the entire array
    printf("\n"); 
}

// Function to perform Bubble Sort on the array
void bubble_sort(int arr[], int size) { 
    // Print the initial state of the array before sorting
    print(arr);
    
    // Outer loop: iterates through the levels of the sorting process
    for (int lev = 0; lev < size - 1; lev++) { 
        // Inner loop: compares adjacent elements and performs swaps if needed
        for (int i = 0; i < (size - lev) - 1; i++) {
            // Compare the current element with the next element
            if (arr[i] > arr[i + 1]) {
                // If the current element is greater, swap it with the next element
                int temp = arr[i];      // Temporary variable to store the current element
                arr[i] = arr[i + 1];    // Move the next element to the current position
                arr[i + 1] = temp;      // Move the current element to the next position
            }
        }
    }

    // Print the sorted array after the bubble sort process
    print(arr); 
}

// Main function
int main() {
    // Declare and initialize the array with unsorted values
    int arr[10] = {5, 8, 6, 2, 1, 3, 0, 4, 9, 7}; 

    // Call the bubble_sort function to sort the array
    bubble_sort(arr, 10);  // The array size is 10 in this case

    return 0;  // Return 0 to indicate successful execution
}
