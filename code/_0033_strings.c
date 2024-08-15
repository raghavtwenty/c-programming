/*
Filename: _0033_strings.c
Title: Strings copy using pointers in c
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 15, 2024 | Last Updated: August 15, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

// Main
int main() {

    // Declaration and initialization of a string
    char str1[] = "Hello, World!";

    // Explicitly size
    char str2[20] = "Hello, World!";

     // String using a pointer
    char *str3 = "Hello, World!";


    // Printing the strings
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str: %s\n", str);

    return 0;
}
