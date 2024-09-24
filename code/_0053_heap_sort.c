/*
Filename: _0052_heap_sort.c
Title: Heap Sort 
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 24, 2024 | Last Updated: September 24, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

// Function to swap two elements using pointers
void swap(int *n1, int *n2)
{
    // Swap the values using a temporary variable
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

// Function to maintain the heap property in a subtree rooted at `pos`
// `arr[]` is the array, `size` is the size of the heap, and `pos` is the root of the subtree
void heapify(int arr[], int size, int pos)
{
    // Assume the largest element is at the root (pos)
    int largest = pos;
    
    // Calculate the left and right children of the root
    int left = 2 * pos + 1;
    int right = 2 * pos + 2;
    
    // If the left child is larger than the root, update `largest`
    if (left < size && arr[left] > arr[largest])
        largest = left;
    
    // If the right child is larger than the current largest, update `largest`
    if (right < size && arr[right] > arr[largest])
        largest = right; 
    
    // If the largest is not the root, swap and continue heapifying
    if (largest != pos) {
        swap(&arr[pos], &arr[largest]);  // Swap the root with the largest child
        heapify(arr, size, largest);     // Recursively heapify the affected subtree
    }
}

// Function to perform heap sort on an array
void heapsort(int arr[], int size)
{
    // Step 1: Build the max heap (rearrange the array)
    // Start from the last non-leaf node and heapify each subtree
    for (int i = size / 2 - 1; i >= 0; i--) {
        heapify(arr, size, i);
    }
    
    // Step 2: Extract elements one by one from the heap
    for (int i = size - 1; i >= 0; i--) {
        // Move the current root (largest element) to the end
        swap(&arr[0], &arr[i]);
        
        // Call heapify on the reduced heap (ignore the last sorted element)
        heapify(arr, i, 0);
    }
}

// Function to print the elements of an array
void print(int arr[], int size)
{
    // Loop through the array and print each element
    for (int i = 0; i != size; i++) {
        printf("%d ", arr[i]);
    }
    // Print a newline for better formatting
    printf("\n");
}

int main()
{
    // Initialize the array to be sorted
    int arr[] = {540, 52, 3, 89, 21, 1};
    
    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Perform heap sort on the array
    heapsort(arr, size);
    
    // Print the sorted array
    print(arr, size);
}
