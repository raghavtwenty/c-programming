/*
Filename: _0048_insertion_sort.c
Title: Insertion Sort on an Array
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 23, 2024 | Last Updated: September 23, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h> 

// Function to print the contents of an integer array of size 10
void print(int arr[10]) {
    int i;
    // Loop through the array and print each element, followed by a space
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]); 
    }
    // Print a newline at the end to separate different outputs
    printf("\n"); 
}

// Main function to demonstrate insertion sort
int main() {
    // Declare and initialize the array with 10 integer values
    int arr[10] = {5, 8, 9, 3, 6, 4, 7, 3, 1, 4};
    int key, i, j;  // Variables for sorting: 'key' stores the current element, 'i' and 'j' are indices

    // Print the initial state of the array before sorting
    print(arr);

    // Insertion Sort algorithm implementation
    for (i = 1; i < 10; i++) {
        key = arr[i];  // Set 'key' to the current element that needs to be inserted into the sorted part
        j = i - 1;     // 'j' is used to track the last element of the sorted part of the array

        // Shift elements of the sorted part of the array that are greater than 'key' to the right
        while (arr[j] > key && j >= 0) {
            arr[j + 1] = arr[j];  // Move the element one position to the right
            j--;  // Decrement 'j' to continue checking previous elements
        }

        // Insert the 'key' in its correct position in the sorted part of the array
        arr[j + 1] = key;

        // Print the current state of the array after each pass of the sorting process
        print(arr);
    }

    // Print the final sorted array
    printf("Final\n");
    print(arr); 

    return 0;  // Return 0 to indicate successful execution
}
