/*
Filename: _0087_linked_list.c
Title: Program To Insert And Delete In A Linked List
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 20, 2024 | Last Updated: September 20, 2024
Language: C | Version: clang-14

Description:
This program demonstrates how to insert a node at a specific position and delete a node from a linked list. The linked list is created dynamically using structures in C, and the program performs insertion and deletion while maintaining the list structure.
*/

// Importing required libraries
#include <stdio.h>  // Standard input/output library
#include <stdlib.h> // Standard library for dynamic memory allocation

// Definition of the 'node' structure representing a linked list node
struct node
{
    int data;            // Data field to store the value of the node
    struct node *link;   // Pointer to the next node in the linked list
};

// Function to display the linked list
void print(struct node *head)
{
    // If the head is NULL, the list is empty
    if (head == NULL)
    {
        printf("Empty Linked List");  // Print message if list is empty
    }

    // Temporary pointer to traverse the list
    struct node *prt = head;

    // Traverse the linked list and print each node's data
    while (prt != NULL)
    {
        printf("%d -> ", prt->data);  // Print current node's data
        prt = prt->link;              // Move to the next node
    }
    printf("NULL\n");  // End of the list
}

// Function to insert a node at a specific position in the linked list
void add(struct node *head, int val, int pos)
{
    // Allocate memory for the new node
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;   // Set the data of the new node
    temp->link = NULL;  // Initially set the link of the new node to NULL

    pos--;  // Decrement position to make it 0-based index

    // Pointer to traverse the linked list
    struct node *ptr = head;

    // Traverse to the node just before the target position
    while (pos != 1)
    {
        ptr = ptr->link;
        pos--;  // Move to the next node
    }

    // Insert the new node into the linked list
    temp->link = ptr->link;
    ptr->link = temp;
}

// Function to delete a node from a specific position in the linked list
void del(struct node *head, int pos)
{
    // Pointers to track nodes for deletion
    struct node *ptr = head, *ptr2;

    pos--;  // Decrement position to make it 0-based index

    // Traverse to the node just before the target position
    while (pos != 1)
    {
        ptr = ptr->link;
        pos--;  // Move to the next node
    }

    // Store the target node for deletion
    ptr2 = ptr->link;

    // Update the links to bypass the node to be deleted
    ptr->link = ptr2->link;

    // Free the memory occupied by the node
    free(ptr2);
    ptr2 = NULL;  // Set pointer to NULL after freeing memory
}

// Main function: Entry point of the program
int main()
{
    // Dynamically allocate memory for the head node
    struct node *head = malloc(sizeof(struct node));
    head->data = 25;    // Initialize the first node's data
    head->link = NULL;  // Set the next pointer to NULL

    // Create and link the second node
    struct node *current = malloc(sizeof(struct node));
    current->data = 50;    // Set the second node's data
    current->link = NULL;  // Set the next pointer to NULL
    head->link = current;  // Link the first node to the second node

    // Create and link the third node
    current = malloc(sizeof(struct node));
    current->data = 75;    // Set the third node's data
    current->link = NULL;  // Set the next pointer to NULL
    head->link->link = current;  // Link the second node to the third node

    // Display the original linked list
    printf("Original linked list : \n");
    print(head);

    // Add a node with value 60 at position 3
    add(head, 60, 3);
    printf("After adding 60 at position 3 in linked list:\n");
    print(head);  // Display the updated linked list

    // Delete the node at position 3
    del(head, 3);
    printf("After deleting the node at position 3 in linked list:\n");
    print(head);  // Display the linked list after deletion

    return 0;  // Return 0 to indicate successful execution
}
