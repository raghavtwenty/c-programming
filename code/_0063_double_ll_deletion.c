/*
Filename: _0063_double_ll_deletion.c
Title: Double Linked List deletion
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 28, 2024 | Last Updated: September 28, 2024
Language: C | Version: clang-14
*/

// Required imports
#include<stdio.h>
#include<stdlib.h>

// Define the structure of a node in a doubly linked list
struct node
{
    int data;              // Data stored in the node
    struct node *next;     // Pointer to the next node
    struct node *prev;     // Pointer to the previous node
};

// Function to print the doubly linked list
void print(struct node *head)
{
    struct node *temp = head;   // Temporary pointer to traverse the list

    // Check if the list is empty
    if(head == NULL)
        printf("Empty List");   // If the list is empty, print this message

    else
    {
        printf("NULL");  // Start of the list printing
        
        // Traverse through the list
        while(temp != NULL)
        {
            printf("<-%d->", temp->data);  // Print each node's data
            temp = temp->next;            // Move to the next node
        }
        printf("NULL");  // End of the list printing
    }
}

// Function to delete the first node of the list
void del_beg(struct node *head)
{
    struct node *temp = head;  // Temporary pointer to the current head
    head = head->next;         // Move head to the next node

    // Uncomment this line to correctly update the new head's previous pointer
    // head->prev = NULL;

    free(temp);    // Free the memory of the old head node
    print(head);   // Print the updated list
}

// Function to delete a node after a given value in the middle of the list
void del_mid(struct node *head)
{
    struct node *ptr = head, *temp;  // Two pointers for traversal
    int val;

    // Ask user for the value after which the node needs to be deleted
    printf("Enter the value to be deleted after:") && scanf("%d", &val);

    // Traverse the list to find the node containing the value `val`
    while(ptr->data != val)
    {
        ptr = ptr->next;
    }

    temp = ptr->next;            // Set temp to the node to be deleted
    ptr->next = temp->next;      // Update the next pointer of the previous node
    temp->next->prev = ptr;      // Update the previous pointer of the next node

    free(temp);   // Free the memory of the deleted node
    print(head);  // Print the updated list
}

// Function to delete the last node in the list
void del_end(struct node *head)
{
    struct node *temp = head;

    // Traverse the list to reach the last node
    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    free(temp);  // Free the memory of the last node
    temp->prev->next = NULL;  // Set the second-to-last node's next pointer to NULL
    print(head);  // Print the updated list
}

// Main function to demonstrate the deletion operations
int main()
{
    int choice;  // Variable to store user's choice of deletion

    // Creating and initializing nodes for the doubly linked list
    struct node *a, *b, *c, *d, *e;
    a = (struct node *)malloc(sizeof(struct node));
    b = (struct node *)malloc(sizeof(struct node));
    c = (struct node *)malloc(sizeof(struct node));
    d = (struct node *)malloc(sizeof(struct node));
    e = (struct node *)malloc(sizeof(struct node));

    // Assign values to the nodes
    a->data = 20;
    b->data = 30;
    c->data = 40;
    d->data = 50;
    e->data = 60;

    // Link the nodes together to form a doubly linked list
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL;  // End of the list
    a->prev = NULL;  // Start of the list
    b->prev = a;
    c->prev = b;
    d->prev = c;
    e->prev = d;

    // Print the initial list
    print(a);

    // Ask user for the deletion operation they want to perform
    printf("\nEnter your choice\n");
    printf("1 <- Deletion at the beginning\n2 <- Deletion in the middle\n3 <- Deletion at the end\n") && scanf("%d", &choice);

    // Call the respective deletion function based on the user's choice
    if(choice == 1)
    {
        del_beg(a);  // Delete the first node
    }
    else if(choice == 2)
    {
        del_mid(a);  // Delete a node from the middle
    }
    else
    {
        del_end(a);  // Delete the last node
    }

    return 0;  
}
