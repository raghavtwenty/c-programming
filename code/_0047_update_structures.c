/*
Filename: _0047_update_structures.c
Title: Update operation on structure
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 20, 2024 | Last Updated: August 20, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>
#include <string.h>  

// Structure
struct Person {
    char name[50];
    int age;
    float height;
};

// Update a person's details
void updatePerson(struct Person *person, char newName[], int newAge, float newHeight) {
    // Change to new values
    strcpy(person->name, newName);
    person->age = newAge;
    person->height = newHeight;
}

// Main
int main() {
    // Old values
    struct Person person1 = {"Raghava", 20, 5.9};

    // New values
    updatePerson(&person1, "raghavtwenty", 21, 6.0);

    // Final show
    printf("Updated Person:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.1f\n", person1.height);

    return 0;
}
