/*
Filename: _0081_queue_operations.c
Title: Queue Operations
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 17, 2024 | Last Updated: September 17, 2024
Language: C | Version: clang-14


Description:
This program implements basic queue operations such as inserting an element, deleting an element, and displaying the queue elements. The program uses a linear queue data structure with a fixed size.
*/

// Importing required libraries
#include <stdio.h>  // Standard I/O library
#include <stdlib.h> // Standard library for exit()

// Macro definition for maximum size of the queue
#define MAX 50

// Function prototypes
void insert();
void delete();
void display();

// Global variables to maintain the queue and track front and rear positions
int queue_array[MAX];  // Array to store queue elements
int rear = -1;         // Index of the last element (initially -1)
int front = -1;        // Index of the first element (initially -1)

// Main function to handle menu-driven operations
int main()
{
    int choice;  // Variable to store the user's choice
    while (1)    // Infinite loop for continuously showing the menu until the user chooses to quit
    {
        // Displaying the menu options to the user
        printf("\nQueue Operations Menu:\n");
        printf("1. Insert element to queue\n");
        printf("2. Delete element from queue\n");
        printf("3. Display all elements of queue\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);  // Reading user's choice

        // Switch-case block to handle the selected operation
        switch (choice)
        {
            case 1:
                insert();  // Call insert function
                break;
            case 2:
                delete();  // Call delete function
                break;
            case 3:
                display();  // Call display function
                break;
            case 4:
                exit(0);  // Exit the program
            default:
                printf("Wrong choice!\n");  // Handle invalid input
        }
    }
}

// Function to insert an element into the queue
void insert()
{
    int item;  // Variable to store the element to be inserted
    if (rear == MAX - 1)  // Check if the queue is full
    {
        printf("Queue Overflow\n");  // Queue is full, no more elements can be added
    }
    else
    {
        if (front == -1)  // Check if the queue is empty (initial state)
            front = 0;    // Set the front to 0 for the first insertion

        printf("Insert the element in queue: ");
        scanf("%d", &item);  // Reading the element from user
        rear = rear + 1;     // Increment the rear index to point to the next available spot
        queue_array[rear] = item;  // Insert the element at the rear index
    }
}

// Function to delete an element from the queue
void delete()
{
    if (front == -1 || front > rear)  // Check if the queue is empty
    {
        printf("Queue Underflow\n");  // Queue is empty, no elements to delete
        return;
    }
    else
    {
        printf("Element deleted from queue is: %d\n", queue_array[front]);  // Print the element being deleted
        front = front + 1;  // Increment front to point to the next element
    }
}

// Function to display all elements of the queue
void display()
{
    int i;
    if (front == -1)  // Check if the queue is empty
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue elements are: \n");
        for (i = front; i <= rear; i++)  // Loop through the queue from front to rear
        {
            printf("%d ", queue_array[i]);  // Print each element
        }
        printf("\n");
    }
}
