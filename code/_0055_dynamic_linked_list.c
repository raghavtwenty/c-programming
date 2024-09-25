/*
Filename: _0055_dynamic_linked_list.c
Title: Dynamic Linked List 
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 25, 2024 | Last Updated: September 25, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
// Each node will store an integer `data` and a pointer to the next node
struct node
{
    int data;               // Data stored in the node
    struct node *next;      // Pointer to the next node in the list
};

// Function to print the elements of the linked list
// It takes the head of the list as an argument and prints each node's data
void print(struct node *head)
{
    // Create a pointer to traverse the list
    struct node *ptr = head;
    
    // Traverse the list until the pointer reaches the end (NULL)
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);  // Print the data of the current node
        ptr = ptr->next;              // Move to the next node
    }
    printf("NULL\n");  // Print "NULL" to indicate the end of the list
}

// Main function to dynamically create and insert nodes in a linked list
int main()
{
    // Declare pointers for the head, last node, and current node
    struct node *head, *last, *current;
    
    // Declare variables for loop control and user input
    int i, n = 0, val;
    
    // Ask the user for the number of nodes to create
    printf("\nEnter the number of nodes: ");
    scanf("%d", &n);  // Store the user input in `n`
    
    // Get the data for the first (0th) node from the user
    printf("\nEnter the data for the 0th node: ");
    scanf("%d", &val);
    
    // Allocate memory for the head node and initialize its data
    head = malloc(sizeof(struct node));
    head->data = val;  // Assign the value to the data field of the head node
    head->next = NULL; // Initialize the next pointer to NULL
    
    // Initialize the last pointer to point to the head node
    last = head;

    // Loop to create the rest of the nodes (from 1st to nth)
    for (i = 0; i < n - 1; i++)
    {
        // Get the data for each node from the user
        printf("Enter the data for the %dth node: ", i + 1);
        scanf("%d", &val);
        
        // Allocate memory for the current node and initialize its data
        current = malloc(sizeof(struct node));
        current->data = val;       // Assign the user input to the node's data
        current->next = NULL;      // Set the next pointer to NULL (as it's the last node currently)
        
        // Link the last node to the current node
        last->next = current;
        
        // Move the last pointer to the current node
        last = current;
    }

    // Print the entire linked list after inserting all nodes
    printf("\nLinked list after inserting nodes:\n");
    print(head);  // Call the print function to display the linked list

    return 0;  
}
