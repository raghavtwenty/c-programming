/*
Filename: _0068_stack_queue.c
Title: Menu-Driven Program Stack and Queue
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 29, 2024 | Last Updated: September 29, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the maximum size for both the stack and the queue
#define max 20  

// Global variables for stack
int count = -1, stack[max];  // Stack array with counter `count` initialized to -1 (empty)

// Global variables for queue
int queue[max], front = -1, rear = -1;  // Queue array with front/rear initialized

// Function declarations
void stack_menu();   // Displays the menu for stack operations
void queue_menu();   // Displays the menu for queue operations
void push(char x);   // Stack: Push function
void pop();          // Stack: Pop function
void insert(char x); // Queue: Insert function
void del();          // Queue: Delete function

// Function to display the stack menu and allow user to perform stack operations
void stack_menu() {
    int choice;
    char element;

    do {
        // Stack menu options
        printf("\nStack Menu:");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Exit Stack Operations");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Push operation: Ask user for the element and push it to the stack
                printf("Enter element to push: ");
                scanf(" %c", &element);
                push(element);
                break;
            case 2:
                // Pop operation: Remove and print the top element
                pop();
                break;
            case 3:
                printf("Exiting Stack Menu...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);  // Loop until user chooses to exit stack menu
}

// Function to display the queue menu and allow user to perform queue operations
void queue_menu() {
    int choice;
    char element;

    do {
        // Queue menu options
        printf("\nQueue Menu:");
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Exit Queue Operations");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Insert operation: Ask user for the element and insert it into the queue
                printf("Enter element to insert: ");
                scanf(" %c", &element);
                insert(element);
                break;
            case 2:
                // Delete operation: Remove and print the front element
                del();
                break;
            case 3:
                printf("Exiting Queue Menu...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);  // Loop until user chooses to exit queue menu
}

// Stack: Function to push an element onto the stack
void push(char x) {
    // Check if the stack is full
    if (count == max - 1) {
        printf("Stack overflow\n");
    } 
    else {
        // Increment the count and add the element to the top of the stack
        stack[++count] = x;
        printf("Pushed %c onto the stack\n", x);
    }
}

// Stack: Function to pop an element from the stack
void pop() {
    // Check if the stack is empty
    if (count == -1) {
        printf("Stack underflow\n");
    } 
    else {
        // Print and remove the top element from the stack
        printf("Popped %c from the stack\n", stack[count--]);
    }
}

// Queue: Function to insert an element into the queue
void insert(char x) {
    // Check if the queue is full
    if (rear == max - 1) {
        printf("Queue overflow\n");
    } 
    else {
        // If the queue is empty, initialize the front pointer
        if (front == -1) {
            front++;
        }
        // Increment the rear pointer and add the element to the queue
        rear++;
        queue[rear] = x;
        printf("Inserted %c into the queue\n", x);
    }
}

// Queue: Function to delete an element from the queue
void del() {
    // Check if the queue is empty
    if (front == -1 || front > rear) {
        printf("Queue underflow\n");
    } 
    else {
        // Print and remove the front element from the queue
        printf("Deleted %c from the queue\n", queue[front]);
        front++;
    }
}

// Main function to provide a menu-driven interface for both stack and queue
int main() {
    int choice;

    do {
        // Main menu options
        printf("\nMain Menu:");
        printf("\n1. Stack Operations");
        printf("\n2. Queue Operations");
        printf("\n3. Exit Program");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Go to stack operations menu
                stack_menu();
                break;
            case 2:
                // Go to queue operations menu
                queue_menu();
                break;
            case 3:
                printf("Exiting Program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);  // Loop until user chooses to exit the program

    return 0;
}
