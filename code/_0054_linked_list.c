/*
Filename: _0054_linked_list.c
Title: Simple Linked List 
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
        printf("%d, ", ptr->data);  // Print the data of the current node
        ptr = ptr->next;            // Move to the next node
    }
    printf("NULL");  // Print "NULL" to indicate the end of the list
}

// Main function to create and demonstrate a simple linked list
int main()
{
    // Declare pointers for three nodes in the list
    struct node *head, *middle, *last;
    
    // Allocate memory for the head node and initialize its data
    head = malloc(sizeof(struct node));  
    head->data = 10;  // Assign data value 10 to the head node
    
    // Allocate memory for the middle node and initialize its data
    middle = malloc(sizeof(struct node));  
    middle->data = 10;  // Assign data value 10 to the middle node
    
    // Allocate memory for the last node and initialize its data
    last = malloc(sizeof(struct node));  
    last->data = 200;  // Assign data value 200 to the last node
    
    // Link the nodes together
    head->next = middle;  // Head points to middle
    middle->next = last;  // Middle points to last
    last->next = NULL;    // Last node points to NULL (end of the list)
    
    // Call the print function to display the elements of the linked list
    print(head);
    
    return 0;  
}
