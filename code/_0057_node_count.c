/*
Filename: _0057_node_count.c
Title: Linked List Node Count 
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 26, 2024 | Last Updated: September 26, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
// Each node stores an integer `data` and a pointer to the next node
struct node
{
    int data;               // Data stored in the node
    struct node *next;      // Pointer to the next node in the list
};

// Function to count and print the number of nodes in the linked list
// It takes the head of the list as an argument and traverses through the nodes
void print(struct node *head)
{
    // Create a pointer to traverse the list
    struct node *ptr = head;
    
    // Initialize a counter to count the number of nodes
    int count = 0;
    
    // Traverse the list until the pointer reaches the end (NULL)
    while (ptr != NULL)
    {
        count++;           // Increment the counter for each node
        ptr = ptr->next;   // Move to the next node
    }
    
    // Print the total number of nodes
    printf("\nThe number of nodes is: %d\n", count);
}

// Main function to dynamically create a linked list and count the nodes
int main()
{
    // Declare pointers for the head, current node, and last node
    struct node *head, *current, *last;
    
    // Declare variables for user input
    int ui = 1, val;
    
    // Dynamically allocate memory for the head node and get user input
    head = malloc(sizeof(struct node));  // Allocate memory for the head node
    printf("Enter the data for the zeroth node: ") && scanf("%d", &val);  
    
    // Initialize the head node with the input value and set the next pointer to NULL
    head->data = val;
    head->next = NULL;
    
    // Initialize the last pointer to point to the head node
    last = head;

    // Loop to create new nodes dynamically as long as the user wants to add nodes
    while (ui == 1)
    {
        // Get the data for the new node from the user
        printf("Enter the data for the new node: ") && scanf("%d", &val);
        
        // Dynamically allocate memory for the new node
        current = malloc(sizeof(struct node));
        current->data = val;      // Assign the user input to the node's data field
        current->next = NULL;     // Set the next pointer to NULL (it's the last node for now)
        
        // Link the last node to the current node
        last->next = current;
        
        // Move the last pointer to the current node
        last = current;
        
        // Ask the user if they want to create another node or exit
        printf("\n1 - Create new node \nOthers - Exit: "); && scanf("%d", &ui);  
    }

    // Call the print function to display the total number of nodes
    print(head);

    return 0;  
}
