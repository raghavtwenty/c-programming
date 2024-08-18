/*
Filename: _0040_local_variables.c
Title: Local variables
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 18, 2024 | Last Updated: August 18, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

// Function
void myFunction() {
    // Local scoping
    int localVar = 5;  
    printf("Inside myFunction, localVar = %d\n", localVar);
}

// Main
int main() {
    int x = 10;  

    printf("Inside main, x = %d\n", x);

    // The variable 'x' cannot be accessed outside this function
    myFunction();

    // Trying to access 'localVar' here would cause an error, as it's out of scope
    printf("%d", localVar); 

    return 0;
}
