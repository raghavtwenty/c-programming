/*
Filename: _0057_node_insertion.c
Title: Linked List Insertion at Specific Position 
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

// Function to print the elements of the linked list
// It takes the head of the list as an argument and prints each node's data
void print(struct node *head)
{
    // Create a pointer to traverse the list
    struct node *ptr = head;
    
    // Traverse the list until the pointer reaches the end (NULL)
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);  // Print the data of the current node
        ptr = ptr->next;            // Move to the next node
    }
    printf("NULL\n");  // Print "NULL" to indicate the end of the list
}

// Function to insert a new node at a specified position in the linked list
// It takes the head of the list, the new node, and the position as arguments
void *insert_middle(struct node *head, struct node *newnode, int pos)
{
    // Create a pointer to traverse the list
    struct node *ptr = head;
    
    // Initialize a counter to track the current position
    int count = 1;
    
    // Traverse the list until the position before the desired one
    while (count != pos - 1)
    {
        ptr = ptr->next;  // Move to the next node
        count++;          // Increment the position counter
    }
    
    // Insert the new node at the specified position
    newnode->next = ptr->next;  // Point the new node to the next node in the list
    ptr->next = newnode;        // Link the previous node to the new node
    
    return head;  // Return the modified head pointer
}

// Main function to demonstrate inserting nodes at different positions in a linked list
int main()
{
    // Declare pointers for the head, middle node, last node, and temporary nodes
    struct node *head, *middle, *last, *temp, *current, *newnode;
    
    // Declare variables for user input
    int ui, val, pos;
    
    // Dynamically allocate memory for the nodes and assign data
    head = malloc(sizeof(struct node));
    head->data = 100;  // Head node with value 100

    middle = malloc(sizeof(struct node));
    middle->data = 200;  // Middle node with value 200
    head->next = middle; // Link head to middle

    last = malloc(sizeof(struct node));
    last->data = 300;  // Last node with value 300
    middle->next = last;  // Link middle to last
    last->next = NULL;  // Last node points to NULL (end of list)

    temp = head;  // Temp points to head (used for traversing later if needed)

    // Print the original linked list
    printf("\nThe original linked list: ");
    print(head);

    // Prompt the user for the type of insertion (beginning, middle, or end)
    printf("1 - Insert at beginning \n2 - Insert at middle \n3 - Insert at end: ") && scanf("%d", &ui);  

    // Ask the user to enter the value for the new node
    printf("\nEnter the value for the new node: ") && scanf("%d", &val);

    // Dynamically allocate memory for the new node and assign data
    newnode = malloc(sizeof(struct node));
    newnode->data = val;

    // Handle insertion based on the user's choice
    switch (ui)
    {
        case 1:  // Insert at the beginning
            newnode->next = head;  // Point the new node to the current head
            head = newnode;        // Update the head to the new node
            break;
        case 2:  // Insert at a specified middle position
            printf("\nEnter the position at which the element should be inserted: ") && scanf("%d", &pos);  
            head = insert_middle(head, newnode, pos);  // Call insert_middle
            break;
        case 3:  // Insert at the end
            last->next = newnode;  // Link the last node to the new node
            newnode->next = NULL;  // The new node becomes the last node
            break;
        default:  // Invalid option
            printf("\nInvalid option.\n");
            break;
    }

    // If a valid insertion operation was performed, print the updated linked list
    if (ui > 0 && ui < 4)
    {
        printf("\nLinked list after inserting: ");
        print(head);
    }

    return 0;  
}
