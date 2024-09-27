/*
Filename: _0061_circular_ll_deletion.c
Title: Circular Linked List deletion
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 27, 2024 | Last Updated: September 27, 2024
Language: C | Version: clang-14
*/

// Required imports
#include<stdio.h>
#include<stdlib.h>

// Definition of a node in the circular linked list
struct node
{
    int data; // Data stored in the node
    struct node *next; // Pointer to the next node
};

// Function to print the circular linked list
void print(struct node *head)
{
    struct node *temp = head; // Temporary pointer to traverse the list
    // Traverse until we come back to the head node
    while(temp->next != head)
    {
        // Print the data of each node
        printf("%d->", temp->data);
        temp = temp->next; // Move to the next node
    }
    // Print the last node's data (which points back to the head)
    printf("%d", temp->data);
}

// Function to delete a node from the circular linked list
// 'ch' determines if we are deleting from the beginning (1) or end (2)
void deletion(struct node *head, int ch)
{
    if(ch == 1) // If user chose to delete from the beginning
    {
        printf("\nDeletion at the beginning\n");
        struct node *temp = head; // Temporary pointer to traverse the list
        
        // Find the last node (node that points back to head)
        while(temp->next != head)
        {
            temp = temp->next;
        }
        
        // Set the last node's 'next' pointer to the second node
        temp->next = head->next;
        free(head); // Free the memory of the head node
        
        head = temp->next; // Update head to the new first node
        print(head); // Print the updated list
    }
    else if(ch == 2) // If user chose to delete from the end
    {
        printf("\nDeletion at the end\n");
        struct node *temp = head, *pre_temp; // Temporary pointers
        
        // Traverse to the last node
        while(temp->next != head)
        {
            pre_temp = temp; // Store the previous node
            temp = temp->next; // Move to the next node
        }
        
        // Set the second-to-last node's 'next' pointer to head
        pre_temp->next = temp->next;
        free(temp); // Free the memory of the last node
        print(head); // Print the updated list
    }
}

// Main function
int main()
{
    int choice; // Variable to store user's choice
    struct node *head, *middle, *last;
    
    // Allocate memory for the three nodes
    head = malloc(sizeof(struct node));
    middle = malloc(sizeof(struct node));
    last = malloc(sizeof(struct node));
    
    // Initialize data for each node
    head->data = 20;
    middle->data = 30;
    last->data = 40;
    
    // Link the nodes to form a circular linked list
    head->next = middle;
    middle->next = last;
    last->next = head; // Last node points back to the head
    
    // Ask user for their choice of deletion
    printf("Enter your choice:");
    printf("\n1. Beginning\n2. End\n");
    scanf("%d", &choice);
    
    // Print the original linked list
    printf("Original linked list\n");
    print(head);
    
    // Perform deletion based on user's choice
    deletion(head, choice);

    return 0
}
