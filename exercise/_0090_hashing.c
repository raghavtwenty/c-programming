/*
Filename: _0090_hashing.c
Title: Program to Insert and Display Elements in a Hash Table Using Linear Probing
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 12, 2024 | Last Updated: October 12, 2024
Language: C | Version: clang-14

Description:
This program demonstrates how to use a hash table to store integers with collision handling through linear probing. 
The user is prompted to insert values into the table, and the table is displayed upon request. The hash function used is a simple modulo operation.
If a collision occurs, the program uses linear probing to find the next available slot. The table can hold a maximum of 10 elements.
*/

// Importing required libraries
#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 10  // Define the size of the hash table

// Initialize the hash table with NULL values
int h[TABLE_SIZE] = {NULL};  

// Function to insert elements into the hash table
void insert() {
    int key, index, i, flag = 0, hkey;  // Variables for key, index, counter, flag, and hash key

    // Prompt user to enter a value for insertion
    printf("\nEnter a value to insert into the hash table: ") && scanf("%d", &key);

    // Compute the hash key using the modulo operation
    hkey = key % TABLE_SIZE;

    // Attempt to find an empty slot using linear probing
    for (i = 0; i < TABLE_SIZE; i++) {
        index = (hkey + i) % TABLE_SIZE;  // Compute the index with linear probing

        // Check if the slot is empty (NULL)
        if (h[index] == NULL) {
            h[index] = key;  // Insert the key in the available slot
            break;
        }
    }

    // If no slot was available after probing through the entire table
    if (i == TABLE_SIZE) {
        printf("\nElement cannot be inserted (hash table is full).\n");
    }
}

// Function to display elements in the hash table
void display() {
    int i;

    // Print the header
    printf("\nElements in the hash table are:\n");

    // Iterate through the hash table and display the elements
    for (i = 0; i < TABLE_SIZE; i++) {
        printf("\nAt index %d \t value =  %d", i, h[i]);
    }
}

// Main
int main() {
    int opt;

    // Menu-driven program to insert or display hash table elements
    while (1) {
        printf("\n\nPress 1. Insert\t 2. Display \t3. Exit\n");
        scanf("%d", &opt);  // User input for the operation choice

        // Switch-case to perform actions based on user input
        switch (opt) {
            case 1:
                insert();  // Call the insert function
                break;
            case 2:
                display();  // Call the display function
                break;
            case 3:
                exit(0);  // Exit the program
        }
    }

    return 0;  
}
