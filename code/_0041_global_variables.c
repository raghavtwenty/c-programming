/*
Filename: _0041_global_variables.c
Title: Global variables
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 18, 2024 | Last Updated: August 18, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

// Global variable declaration
int globalVar = 100;  // Accessible throughout the entire program

// Function 1
void function1() {
    printf("Inside function1, globalVar = %d\n", globalVar);  // Accessing the global variable
}

// Function 2 
void function2() {
    globalVar = 200;  // Modifying the global variable
    printf("Inside function2, globalVar = %d\n", globalVar);  // Accessing the modified global variable
}

// Main
int main() {
    printf("Inside main, globalVar = %d\n", globalVar);  // Accessing the global variable in main

    // Functions using global variable
    function1();
    function2();

    printf("Back in main, globalVar after modification = %d\n", globalVar);  //  After modification

    return 0;
}
