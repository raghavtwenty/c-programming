/*
Filename: _0037_pointers.c
Title: Basics of pointers
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 17, 2024 | Last Updated: August 17, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

// Main
int main() {
    int x = 10;       // Declare an integer variable 'x'
    int *p;           // Declare a pointer to an integer 'p'

    p = &x;           // Assign the address 

    // Dereferencing 
    printf("Value of x: %d\n", *p);   
    
    // Address 
    printf("Address of x: %p\n", p);

    return 0;
}
