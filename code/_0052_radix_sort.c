/*
Filename: _0052_radix_sort.c
Title: Radix Sort 
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 24, 2024 | Last Updated: September 24, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

// Function to print elements of the array
void print(int arr[], int size)
{
    // Loop through each element in the array and print it
    for (int i = 0; i != size; i++) {
        printf("%d ", arr[i]);
    }
    // Print a newline for better formatting
    printf("\n");
}

// Function to find the maximum value in the array based on the current "place" (digit position)
// `place == 0` -> Finds the overall maximum value in the array
// `place != 0` -> Finds the maximum digit at the specific decimal place
int max_fun(int arr[], int size, int place) {
    // If `place` is 0, find the overall maximum value in the array
    if (place == 0) {
        int max = arr[0];  // Start by assuming the first element is the largest
        for (int i = 1; i < size; i++) {
            if (arr[i] > max) max = arr[i];  // Update `max` if a larger element is found
        }
        return max;
    }
    // Otherwise, find the maximum digit at the given `place` (for radix sort)
    else {
        int max = (arr[0] / place) % 10;  // Start by getting the first element's digit at the `place`
        for (int i = 1; i < size; i++) {
            if ((arr[i] / place) % 10 > max) max = (arr[i] / place) % 10;  // Update `max` if larger digit found
        }
        return max;
    }
}

// Function to perform Radix Sort
void radix(int arr[], int size) {
    // Find the maximum number in the array (needed to determine how many digits to sort)
    int max = max_fun(arr, size, 0);
    
    // Start sorting by each digit (1's, 10's, 100's, etc.)
    for (int place = 1; max / place > 0; place *= 10) {
        counting_sort(arr, size, place);  // Perform Counting Sort for each digit place
    }
}

// Function to perform Counting Sort on the current digit place
void counting_sort(int arr[], int size, int place) {
    // Create an output array to hold sorted elements and initialize it
    int output[size + 1];
    
    // Find the maximum digit at the current place
    int max = max_fun(arr, size, place);
    
    // Initialize count array to 0 (for digits 0-9)
    int count[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    // Count occurrences of each digit at the current `place`
    for (int i = 0; i < size; i++) {
        count[(arr[i] / place) % 10]++;
    }
    
    // Convert count array to cumulative count (helps in placing elements in the correct order)
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }
    
    // Build the output array by placing elements in their correct position
    for (int i = size - 1; i >= 0; i--) {
        output[count[(arr[i] / place) % 10] - 1] = arr[i];
        count[(arr[i] / place) % 10]--;
    }
    
    // Copy the sorted elements back into the original array
    for (int i = 0; i < size; i++) {
        arr[i] = output[i];
    }
}

int main() {
    // Initialize the array with unsorted integers
    int arr[] = {201, 520, 1, 89, 999};
    
    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Print the original array
    print(arr, size);
    
    // Perform Radix Sort on the array
    radix(arr, size);
    
    // Print the sorted array
    print(arr, size);
}
