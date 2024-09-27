/*
Filename: _0062_double_ll_insertion.c
Title: Double Linked List insertion
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 27, 2024 | Last Updated: September 27, 2024
Language: C | Version: clang-14
*/

// Required imports
#include<stdio.h>
#include<stdlib.h>

// Definition of a node in the doubly linked list
struct node
{
    int data;           // Data field to store the integer
    struct node *next;  // Pointer to the next node
    struct node *prev;  // Pointer to the previous node
};

// Function to print the doubly linked list
void print(struct node *head)
{
    struct node *temp = head;  // Temporary pointer to traverse the list
    if(head == NULL)           // Check if the list is empty
        printf("Empty list");
    else
    {
        printf("NULL");  // Print NULL for the head of the list (beginning)
        while(temp != NULL)  // Traverse through the list
        {
            // Print the data of each node
            printf("<-%d->", temp->data);
            temp = temp->next;  // Move to the next node
        }
        printf("NULL");  // Print NULL for the end of the list
    }
}

// Function to insert a node at the beginning of the list
void insert_beg(struct node *head)
{
    struct node *new_node; // Create a new node
    new_node = malloc(sizeof(struct node)); // Allocate memory for the new node
    printf("Enter the data value:") && scanf("%d", &new_node->data); // Input data for new node
    
    new_node->next = head;   // Set the next pointer of new node to current head
    new_node->prev = NULL;   // Since it's the beginning, prev pointer is NULL
    head->prev = new_node;   // Update the previous head's prev pointer to the new node
    
    print(new_node); // Print the updated list
}

// Function to insert a node in the middle of the list
void insert_mid(struct node *head)
{
    int val;
    struct node *temp = head;  // Temporary pointer to traverse the list
    struct node *new_node;     // New node to be inserted

    // Input the data after which the new node is to be inserted
    printf("Enter data to be inserted after:") && scanf("%d", &val);

    // Traverse the list to find the node with value 'val'
    while(temp->data != val)
    {
        temp = temp->next;
    }

    // Allocate memory for the new node and input its data
    new_node = malloc(sizeof(struct node));
    printf("Enter data:") && scanf("%d", &new_node->data);

    // Update the links to insert the new node after 'temp'
    new_node->next = temp->next;  // New node's next points to temp's next node
    new_node->prev = temp;        // New node's prev points to temp (current node)
    temp->next->prev = new_node;  // The next node's previous pointer is updated
    temp->next = new_node;        // Current node's next pointer points to the new node

    // Print the updated list
    printf("NULL");
    temp = head;
    while(temp != NULL)
    {
        printf("<-%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

// Function to insert a node at the end of the list
void insert_end(struct node *head)
{
    struct node *temp = head, *new_node;  // Temporary pointer to traverse and new node

    // Traverse to the last node of the list
    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    // Allocate memory for the new node and input its data
    new_node = malloc(sizeof(struct node));
    printf("Enter data:") && scanf("%d", &new_node->data);

    // Update the links to insert the new node at the end
    new_node->prev = temp;    // New node's prev points to the current last node
    new_node->next = NULL;    // New node's next is NULL as it's the last node
    temp->next = new_node;    // Current last node's next points to the new node

    // Print the updated list
    temp = head;
    printf("NULL");
    while(temp != NULL)
    {
        printf("<-%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

// Main function
int main()
{
    int choice; // Variable to store the user's choice

    // Create and initialize five nodes for the list
    struct node *a, *b, *c, *d, *e;
    a = (struct node *)malloc(sizeof(struct node));
    b = (struct node *)malloc(sizeof(struct node));
    c = (struct node *)malloc(sizeof(struct node));
    d = (struct node *)malloc(sizeof(struct node));
    e = (struct node *)malloc(sizeof(struct node));

    // Assign data values to each node
    a->data = 20;
    b->data = 30;
    c->data = 40;
    d->data = 50;
    e->data = 60;

    // Link the nodes to form the doubly linked list
    a->next = b; a->prev = NULL;  // First node, prev is NULL
    b->next = c; b->prev = a;
    c->next = d; c->prev = b;
    d->next = e; d->prev = c;
    e->next = NULL; e->prev = d;  // Last node, next is NULL

    // Print the initial list
    print(a);

    // Get user's choice for insertion
    printf("\nEnter your choice\n");
    printf("1 <- Insertion at the beginning\n");
    printf("2 <- Insertion in the middle\n");
    printf("3 <- Insertion at the end\n");
    scanf("%d", &choice);

    // Perform insertion based on the user's choice
    if(choice == 1)
    {
        insert_beg(a);
    }
    else if(choice == 2)
    {
        insert_mid(a);
    }
    else
    {
        insert_end(a);
    }

    return 0;  
}
