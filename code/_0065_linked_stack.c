/*
Filename: _0065_linked_stack.c
Title: Linked stack
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 28, 2024 | Last Updated: September 28, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node in the doubly linked list
struct node {
    int data;              // Data to be stored in each node
    struct node *blink;    // Pointer to the previous node (backward link)
    struct node *alink;    // Pointer to the next node (forward link)
};

// Function to print the elements of the linked list from head to the end
void print(struct node *head) {
    // Check if the linked list is empty
    if (head == NULL)
        printf("Empty Linked List");
    
    // Temporary pointer to traverse the list
    struct node *prt = head;
    
    // Traverse and print each node's data
    while (prt != NULL) {
        printf("%d -> ", prt->data);
        prt = prt->alink;
    }
    printf("NULL\n"); // End of the list
}

// Function to push a value onto the stack (add a new node at the top)
struct node *push(struct node *top, int val) {
    // Allocate memory for the new node
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;        // Set the data of the new node
    temp->blink = NULL;      // Initialize backward link to NULL
    temp->alink = NULL;      // Initialize forward link to NULL

    // If the stack is empty, set top to the new node
    if (top == NULL) {
        top = temp;
        return top;
    }
    // If the stack is not empty, update links to add the new node at the top
    else {
        top->alink = temp;   // Forward link of current top points to new node
        temp->blink = top;   // Backward link of new node points to current top
        top = temp;          // Update top to the new node
        return top;
    }
}

// Function to pop a value from the stack (remove the node at the top)
struct node *pop(struct node *top) {
    // Check if the stack is empty (underflow condition)
    if (top == NULL) {
        printf("Stack underflow");
    }
    else {
        // Temporary pointer to the current top node
        struct node *prt = top;

        // If there is only one node in the stack
        if (top->blink == NULL) {
            top = NULL;      // After removing the node, the stack is empty
            free(prt);       // Free the memory of the node being removed
            return top;
        }
        // If there are multiple nodes in the stack
        else {
            top = top->blink;        // Move the top pointer to the previous node
            top->alink = NULL;       // Set the forward link of the new top to NULL
            prt->blink = NULL;       // Isolate the old top node (remove its links)
            free(prt);               // Free the memory of the old top node
            return top;
        }
    }
}

// Main function to demonstrate the stack operations
main() {
    struct node *top = NULL, *head; // Declare pointers for the top of the stack and head
    top = push(top, 10);            // Push 10 onto the stack
    head = top;                     // Set head to the top node (initial node)
    print(head);                    // Print the current stack (10 -> NULL)

    top = push(top, 20);            // Push 20 onto the stack
    print(head);                    // Print the stack (10 -> 20 -> NULL)

    top = pop(top);                 // Pop the top value from the stack
    print(head);                    // Print the stack after popping (10 -> NULL)

    top = push(top, 30);            // Push 30 onto the stack
    print(head);                    // Print the stack (10 -> 30 -> NULL)

    return 0
}
