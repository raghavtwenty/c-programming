/*
Filename: _0033_merge_sort.c
Title: Merge Sort and Binary Search Algorithm Implementation
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 10, 2024 | Last Updated: October 10, 2024
Language: C | Version: clang-14

Description:
This program implements the Merge Sort algorithm to sort an array of integers and uses Binary Search to locate an element in the sorted array.
Merge Sort is a divide-and-conquer algorithm that divides the array into two halves, recursively sorts each half, and merges them back together.
Binary Search efficiently searches a sorted array by repeatedly dividing the search interval in half.
The program prints the array before and after sorting, showing the intermediate steps during the merge process, and performs a binary search for a specific key.
*/

// Importing Required Libraries
#include <stdio.h>

// Function to print the array at different stages
void print(int a[], int len);

// Function to merge two sub-arrays: left and right
void merge(int arr[], int len, int left, int right, int mp){

    // Initial variables for iteration
    int i, j, k;

    // Determine the length of the new left and right sub-arrays
    int n1 = mp - left + 1;   // Length of the left sub-array
    int n2 = right - mp;      // Length of the right sub-array

    // Temporary arrays for left and right parts
    int LeftArray[n1], RightArray[n2]; 

    // Copy data to temporary arrays (LeftArray and RightArray)
    // Populate LeftArray with elements from the left sub-array
    for (int i = 0; i < n1; i++) {    
        LeftArray[i] = arr[left + i];  
    }
    // Populate RightArray with elements from the right sub-array
    for (int j = 0; j < n2; j++) {
        RightArray[j] = arr[mp + 1 + j];    
    }

    // Initial indices of the two sub-arrays and the merged array
    i = 0; // Index for LeftArray
    j = 0; // Index for RightArray
    k = left; // Initial index for merged array

    // Merging the two sub-arrays back into the original array
    while (i < n1 && j < n2) {
        // If the current element in LeftArray is smaller or equal to that in RightArray
        if (LeftArray[i] <= RightArray[j]) {
            arr[k] = LeftArray[i];    // Place the element from LeftArray in the merged array
            i++;    
        } else {
            arr[k] = RightArray[j];   // Place the element from RightArray in the merged array
            j++;    
        }
        k++; // Move to the next position in the merged array
    }

    // Copy any remaining elements from LeftArray (if any)
    while (i < n1) {
        arr[k] = LeftArray[i];
        i++;
        k++;
    }

    // Copy any remaining elements from RightArray (if any)
    while (j < n2) {
        arr[k] = RightArray[j];
        j++;
        k++;
    }
    // Intermediate steps for Left and Right arrays can be printed if needed
};

// Merge Sort function to recursively divide and merge arrays
void merge_sort(int arr[], int len, int left, int right) {

    // Base case: proceed only if left index is less than right index
    if (left < right) {

        // Calculate the midpoint of the current array segment
        int mp = left + (right - left) / 2;

        // Display the element selected for partitioning
        printf("\n\nChosen element for swap: %d\n", arr[mp]);

        // Print the array at this intermediate step
        print(arr, len);

        // Recursively sort the left half of the array
        merge_sort(arr, len, left, mp);

        // Recursively sort the right half of the array
        merge_sort(arr, len, mp + 1, right);

        // Merge the two sorted halves together
        merge(arr, len, left, right, mp);
    }
}

// Binary Search function to search for a key in a sorted array
int binarySearch(int arr[], int len, int key) {

    // Initialize low and high pointers for the search range
    int low = 0, high = len - 1;

    // Perform the binary search
    while (low <= high) {

        // Calculate the midpoint of the current search range
        int mid = (low + high) / 2;

        // Check if the key is present at the midpoint
        if (arr[mid] == key) {
            return mid; // Return the index if the key is found
        }
        // If the key is greater than the midpoint value, search in the right half
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        // If the key is smaller, search in the left half
        else {
            high = mid - 1;
        }
    }
    return -1; // Return -1 if the key is not found
}

// Function to print the array
void print(int a[], int len) {
    // Iterate through the array and print each element
    for (int i = 0; i < len; i++) {
        printf("%d,", a[i]);
    }
    printf("\n"); // Print a new line after the array is displayed
}

// Main function
int main() {

    // Variables
    int len, n, index = 5; // Index 5 will be used for binary search later


    // Ask the user for the length and elements of the array
    printf("\nHow many numbers (length) of the array : ") && scanf("%d", &n);

    // Initialize array with user-provided values
    int arr[n];

    // Insert values into the array
    for (int i = 0; i < n; i++) {
        printf("Enter the %d element: ", i) && scanf("%d", &arr[i]);
    }

    // Predefined array of integers
    int arr[] = {285, 310, 179, 652, 351, 423, 861, 254, 450, 220};
    len = sizeof(arr) / sizeof(arr[0]); // Calculate the length of the array

    // Store the 5th element for binary search later
    int key = arr[index];

    // Display the array before sorting
    printf("\nArray before sorting\n");
    print(arr, len);

    printf("\nSorting...\n");

    // Call the Merge Sort function
    merge_sort(arr, len, 0, len - 1);

    // Display the array after sorting
    printf("\nArray after sorting\n");
    print(arr, len);

    // Perform binary search for the 5th element
    printf("\nBinary Search\n");
    int result = binarySearch(arr, len, key); // Search for the key

    // Check if the key was found and display the result
    if (result == -1) {
        printf("Key not found in the array.\n");
    } else {
        printf("Element %d found at index %d in the sorted array.\n", key, result);
    }

    return 0;
}
