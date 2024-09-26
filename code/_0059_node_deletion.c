/*
Filename: _0059_node_deletion.c
Title: Linked List Deletion (Beginning, Middle, End)
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 26, 2024 | Last Updated: September 26, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
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
    struct node *temp = head;

    // Check if the list is empty
    if (head == NULL)
        printf("Empty list");

    // Otherwise, traverse and print each node
    else
    {
        while (temp != NULL)
        {
            printf("%d->", temp->data);  // Print the data of the current node
            temp = temp->next;           // Move to the next node
        }
        printf("Null\n");  // Print "Null" to indicate the end of the list
    }
}

// Function to delete a node from the beginning of the linked list
void del_beg(struct node *head)
{
    // Create a temporary pointer to hold the current head
    struct node *temp = head;
    
    // Update the head to point to the next node
    head = head->next;
    
    // Free the memory of the old head node
    free(temp);
    
    // Print the updated linked list
    temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("Null\n");
}

// Function to delete a node from the middle of the linked list
void del_mid(struct node *head)
{
    int val;  // Value of the node to be deleted

    // Prompt the user to enter the value of the node to be deleted
    printf("Enter the data to be deleted: ") && scanf("%d", &val);

    // Create pointers to traverse the list
    struct node *ptr = head, *temp;
    struct node *pre_ptr = NULL;  // Pointer to track the previous node
    
    // Traverse the list until the node with the matching data is found
    while (ptr->data != val)
    {
        pre_ptr = ptr;  // Store the previous node
        ptr = ptr->next;  // Move to the next node
    }
    
    // Free the memory of the node to be deleted
    pre_ptr->next = ptr->next;
    free(ptr);

    // Print the updated linked list
    temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("Null\n");
}

// Function to delete a node from the end of the linked list
void del_end(struct node *head)
{
    // Create pointers to traverse the list
    struct node *temp = head;
    struct node *pre_temp = NULL;  // Pointer to track the previous node
    
    // Traverse the list until the last node is reached
    while (temp->next != NULL)
    {
        pre_temp = temp;  // Store the previous node
        temp = temp->next;  // Move to the next node
    }
    
    // Free the memory of the last node
    free(temp);
    
    // Update the second last node to point to NULL (new end of the list)
    pre_temp->next = NULL;

    // Print the updated linked list
    temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("Null\n");
}

// Main function to demonstrate deleting nodes from a linked list
int main()
{
    // Declare pointers for the head, temporary nodes, and the last node
    struct node *head, *temp, *last;
    
    // Declare variables for user input
    int num, i, choice;
    
    // Dynamically allocate memory for the head node and input its data
    head = malloc(sizeof(struct node));
    printf("Enter the value of the head node: ") && scanf("%d", &head->data);
    
    last = head;  // Last points to head initially
    
    // Input the number of additional nodes to be created
    printf("Enter number of nodes: ") && scanf("%d", &num);
    
    // Loop to create additional nodes and build the linked list
    for (i = 0; i < num; i++)
    {
        temp = malloc(sizeof(struct node));
        printf("Enter the data: ") && scanf("%d", &temp->data);
        temp->next = NULL;  // Set the next pointer of the new node to NULL
        last->next = temp;  // Link the previous node to the new node
        last = temp;        // Move the last pointer to the new node
    }
    
    // Print the original linked list
    printf("\nThe original linked list:\n");
    print(head);
    
    // Prompt the user to choose where to delete a node (beginning, middle, or end)
    printf("\nEnter choice:\n1 - Delete from Beginning\n2 - Delete from Middle\n3 - Delete from End\n") && scanf("%d", &choice);

    // Perform the deletion operation based on the user's choice
    if (choice == 1)
    {
        del_beg(head);  // Delete from the beginning
    }
    else if (choice == 2)
    {
        del_mid(head);  // Delete from the middle
    }
    else if (choice == 3)
    {
        del_end(head);  // Delete from the end
    }
    else
    {
        printf("Invalid choice\n");  // Invalid option
    }

    return 0;  
}
