/*
Filename: _0045_structures.c
Title: Basic structures in c
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 20, 2024 | Last Updated: August 20, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

// Define a structure 
struct Person {
    char name[50];
    int age;
    float height;
};

// Main
int main() {
    // Initialize the structure variable
    struct Person person1 = {"Raghava", 20, 5};

    // Access structure members
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.1f\n", person1.height);

    return 0;
}
