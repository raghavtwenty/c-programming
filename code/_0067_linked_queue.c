/*
Filename: _0067_linked_queue.c
Title: Linked Queue Implementation
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 29, 2024 | Last Updated: September 29, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node in the linked list
struct node {
    int data;             // Data to be stored in each node
    struct node *link;    // Pointer to the next node (forward link)
};

// Function to print the elements of the linked list from front to rear
void print(struct node *head) {
    // Check if the linked list is empty
    if (head == NULL)
        printf("Empty Linked List");

    // Temporary pointer to traverse the list
    struct node *prt = head;

    // Traverse and print each node's data
    while (prt != NULL) {
        printf("%d -> ", prt->data);
        prt = prt->link;
    }
    printf("NULL\n");  // End of the list
}

// Function to insert a value into the queue (add a new node at the rear)
struct node *insert(struct node *rear, int val) {
    // Allocate memory for the new node
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;     // Set the data of the new node
    temp->link = NULL;    // Initialize link to NULL (as this is the rear node)

    // If the queue is empty, set both front and rear to the new node
    if (rear == NULL) {
        rear = temp;
        return rear;
    }
    // If the queue is not empty, update links to add the new node at the rear
    else {
        rear->link = temp;   // Link the current rear node to the new node
        rear = temp;         // Update rear to the new node
        return rear;
    }
}

// Function to delete a value from the queue (remove the node at the front)
struct node *del(struct node *front, struct node *rear) {
    // Check if the queue is empty (underflow condition)
    if (front == NULL) {
        printf("Queue underflow\n");
    } 
    else {
        // Temporary pointer to the current front node
        struct node *prt = front;

        // If there is only one node in the queue
        if (front == rear) {
            front = NULL;     // After removing the node, the queue is empty
            free(prt);        // Free the memory of the node being removed
            return front;
        }
        // If there are multiple nodes in the queue
        else {
            front = front->link;  // Move the front pointer to the next node
            free(prt);            // Free the memory of the old front node
            return front;
        }
    }
}

// Main function to demonstrate queue operations
int main() {
    // Initialize front and rear pointers of the queue
    struct node *front = NULL, *rear = NULL;

    // Insert 10 into the queue
    rear = insert(rear, 10);     // After insert, rear points to the new node
    front = rear;                // As it's the first node, front also points to it
    print(front);                // Print the queue (10 -> NULL)

    // Insert 20 into the queue
    rear = insert(rear, 20);     // Insert another node at the rear
    print(front);                // Print the queue (10 -> 20 -> NULL)

    // Delete the front value from the queue
    front = del(front, rear);    // Remove the front node (10)
    print(front);                // Print the queue (20 -> NULL)

    // Insert 30 into the queue
    rear = insert(rear, 30);     // Insert another node at the rear
    print(front);                // Print the queue (20 -> 30 -> NULL)

    return 0;  
}
