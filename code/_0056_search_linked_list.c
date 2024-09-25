/*
Filename: _0055_linked_list_search.c
Title: Search in Linked List 
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 25, 2024 | Last Updated: September 25, 2024
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

// Function to search for a value in the linked list
// It takes the head of the list and the value `val` to be searched
void search(struct node *head, int val)
{
    // Create a pointer to traverse the list
    struct node *ptr = head;
    
    // Initialize a counter to track the index
    int count = 0;
    
    // Traverse the list until the value is found
    while (ptr != NULL && ptr->data != val)
    {
        ptr = ptr->next;  // Move to the next node
        count++;          // Increment the index counter
    }

    // If the value is found, print the index
    if (ptr != NULL)
    {
        printf("\nElement found at index: %d\n", count);
    }
    // If the value is not found, print a message
    else
    {
        printf("\nElement not found in the list.\n");
    }
}

// Main function to demonstrate linked list creation and search
int main()
{
    // Declare pointers for the head, middle nodes, and the last node
    struct node *head, *middle1, *middle2, *last;
    
    // Declare variables for user input
    int val;
    
    // Dynamically allocate memory for each node and assign data
    head = malloc(sizeof(struct node));
    head->data = 100;  // Head node with value 100

    middle1 = malloc(sizeof(struct node));
    middle1->data = 200;  // First middle node with value 200

    middle2 = malloc(sizeof(struct node));
    middle2->data = 300;  // Second middle node with value 300

    last = malloc(sizeof(struct node));
    last->data = 400;  // Last node with value 400

    // Link the nodes together to form a linked list
    head->next = middle1;   // Head points to middle1
    middle1->next = middle2;  // middle1 points to middle2
    middle2->next = last;     // middle2 points to last
    last->next = NULL;        // Last node points to NULL (end of the list)

    // Print the entire linked list
    printf("\nThe linked list: ");
    print(head);
    
    // Ask the user for the value to be searched in the linked list
    printf("Enter the value to be searched: ");
    scanf("%d", &val);

    // Call the search function to find the value in the linked list
    search(head, val);

    return 0;  
}
