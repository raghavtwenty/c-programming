/*
Filename: _0026_functions_arguments.c
Title: functions with arguments in c
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 13, 2024 | Last Updated: August 13, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

// Function with arguments and no return value
void printSum(int a, int b) {
    printf("Sum: %d\n", a + b);
}

// Function with arguments and return value
int multiply(int a, int b) {
    return a * b;
}

// Function with an array argument and no return value
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function with an array argument and return value
int findMaxInArray(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Main 
int main() {

    printSum(5, 10); // With arguments, no return value

    int product = multiply(4, 7); // With arguments, with return value
    printf("Product: %d\n", product);

    int arr[] = {1, 2, 3, 4, 5};
    printArray(arr, 5); // Array argument, no return value

    int maxInArray = findMaxInArray(arr, 5); // Array argument, with return value
    printf("Max in array: %d\n", maxInArray);

    return 0;
}
