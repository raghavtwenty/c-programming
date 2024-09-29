/*
Filename: _0066_queue.c
Title: Simple Queue Implementation
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 29, 2024 | Last Updated: September 29, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

// Initialize the queue array and front/rear pointers
int queue[20], front = -1, rear = -1;  // 'front' points to the first element, 'rear' to the last

// Function to insert a character into the queue
void insert(char ch) {
    // Check if the queue is full (overflow condition)
    if (rear == 20) {
        printf("Queue Overflow\n");    // Print overflow message if queue is full
    } 
    else {
        // If the queue is empty, initialize the 'front' pointer
        if (front == -1) {
            front++;                   // Set 'front' to the first position
        }
        rear++;                        // Increment the 'rear' pointer
        queue[rear] = ch;              // Add the character at the 'rear' of the queue
    }
}

// Function to delete an element from the queue (FIFO - First In, First Out)
void del() {
    // Check if the queue is empty (underflow condition)
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");   // Print underflow message if queue is empty
    } 
    else {
        front++;                       // Increment the 'front' pointer to remove the first element
    }
}

// Main function to demonstrate queue operations
int main() {
    // Initialize the input string
    char name[20] = "RAGHAVA";          // A string of 6 characters to be inserted into the queue

    // Insert each character from the string into the queue
    for (int i = 0; i < 7; i++) {
        insert(name[i]);               // Insert each character of 'name' into the queue
    }

    // Print the contents of the queue
    for (int i = front; i <= rear; i++) {
        printf("%c", queue[i]);        // Print each character in the queue from 'front' to 'rear'
    }

    return 0;
}
