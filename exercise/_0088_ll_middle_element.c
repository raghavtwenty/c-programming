/*
Filename: _0088_ll_middle_element.c
Title: Program To Find The Middle Element In A Linked List
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 20, 2024 | Last Updated: September 20, 2024
Language: C | Version: clang-14

Description:
This program demonstrates how to find the middle element in a singly linked list. It calculates the size of the list and then traverses to the middle node to print its value. The program uses basic operations on a linked list, such as traversing and counting nodes.
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
        printf("Empty Linked List");  // Print message if the list is empty
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

// Function to find and print the middle element of the linked list
void middle(struct node *head)
{
    int size = 0;  // Initialize a variable to store the size of the list

    // Temporary pointer to traverse the list
    struct node *ptr = head;

    // Calculate the size of the linked list by counting the nodes
    while (ptr != NULL)
    {
        size++;  // Increment the size for each node
        ptr = ptr->link;  // Move to the next node
    }

    // Reset the pointer to the head to start traversal again
    ptr = head;

    // Calculate the middle position (1-based index)
    int mid = (size / 2) + 1;

    // Traverse the linked list until the middle node is reached
    while (mid != 1)
    {
        ptr = ptr->link;  // Move to the next node
        mid--;  // Decrement the mid count
    }

    // Print the data of the middle node
    printf("Middle Element: %d\n", ptr->data);
}

// Main function: Entry point of the program
int main()
{
    // Dynamically allocate memory for the head node
    struct node *head = malloc(sizeof(struct node));
    head->data = 20;    // Initialize the first node's data
    head->link = NULL;  // Set the next pointer to NULL

    // Create and link the second node
    struct node *current = malloc(sizeof(struct node));
    current->data = 40;    // Set the second node's data
    current->link = NULL;  // Set the next pointer to NULL
    head->link = current;  // Link the first node to the second node

    // Create and link the third node
    current = malloc(sizeof(struct node));
    current->data = 60;    // Set the third node's data
    current->link = NULL;  // Set the next pointer to NULL
    head->link->link = current;  // Link the second node to the third node

    // Create and link the fourth node
    current = malloc(sizeof(struct node));
    current->data = 80;    // Set the fourth node's data
    current->link = NULL;  // Set the next pointer to NULL
    head->link->link->link = current;  // Link the third node to the fourth node

    // Create and link the fifth node
    current = malloc(sizeof(struct node));
    current->data = 100;    // Set the fifth node's data
    current->link = NULL;   // Set the next pointer to NULL
    head->link->link->link->link = current;  // Link the fourth node to the fifth node

    // Display the original linked list
    printf("Original linked list: \n");
    print(head);  // Call the print function to display the list

    // Find and display the middle element of the linked list
    middle(head);  // Call the middle function to find the middle element

    return 0;  // Return 0 to indicate successful execution
}
