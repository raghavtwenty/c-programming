/*
Filename: _0046_create_structures.c
Title: Create operation on structure
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 20, 2024 | Last Updated: August 20, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

// Define the structure
struct Person {
    char name[50];
    int age;
    float height;
};

// Function to create structure
struct Person createPerson(char name[], int age, float height) {
    // Struct
    struct Person newPerson;

    // Value assigning 
    strcpy(newPerson.name, name); 
    newPerson.age = age;
    newPerson.height = height;

    return newPerson;
}

// Main
int main() {
    // Create a new person
    struct Person person1 = createPerson("Raghava", 20, 5.9);

    // Final Show
    printf("Created Person:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.1f\n", person1.height);

    return 0;
}
