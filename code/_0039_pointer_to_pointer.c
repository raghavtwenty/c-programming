/*
Filename: _0039_pointer_to_pointer.c
Title: Pointers to pointers
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 17, 2024 | Last Updated: August 17, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

// Main
int main() {
    int x = 20;         

    int *p;             // Base pointer
    int **pp;           // pointer to a pointer 

    p = &x;             // Assign the address of x to p
    pp = &p;            // Assign the address of p to pp

    // Print the value of x using pointer to pointer
    printf("Value of x using pointer to pointer: %d\n", **pp);

    return 0;
}
