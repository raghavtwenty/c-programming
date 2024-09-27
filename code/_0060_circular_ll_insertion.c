/*
Filename: _0060_circular_ll_insertion.c
Title: Circular Linked List insertion
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 27, 2024 | Last Updated: September 27, 2024
Language: C | Version: clang-14
*/

// Required imports
#include<stdio.h>
#include<stdlib.h>

// Definition of a node structure
struct node
{
    int data; // Data stored in the node
    struct node *next; // Pointer to the next node
};

// Function to print the circular linked list
void print(struct node *head)
{
    struct node *temp = head; // Temporary pointer to traverse the list
    do
    {
        // Print the data of each node
        printf("%d->", temp->data);
        temp = temp->next; // Move to the next node
    } while(temp != head); // Stop when we loop back to the head
    printf("head"); // Indicate the circular nature of the list
}

// Function to insert a node at the beginning of the list
void insert_beg(struct node *head)
{
    struct node *new_node, *temp;
    temp = head; // Temporary pointer to traverse the list
    
    // Create a new node and allocate memory for it
    new_node = malloc(sizeof(struct node));
    
    // Get data for the new node from the user
    printf("Enter the value of the new node:") && scanf("%d", &new_node->data);
    
    // Traverse to the last node
    while(temp->next != head)
    {
        temp = temp->next;
    }
    
    // Insert the new node at the beginning of the list
    new_node->next = temp->next; // Point the new node to the current head
    temp->next = new_node; // Point the last node to the new node
    
    // Print the updated list starting from the new node
    print(new_node);
}

// Function to insert a node at the end of the list
void insert_end(struct node *head)
{
    struct node *temp = head, *new_node;
    
    // Create a new node and allocate memory for it
    new_node = (struct node *)malloc(sizeof(struct node));
    
    // Get data for the new node from the user
    printf("Enter the data:") && scanf("%d", &new_node->data);
    
    // Traverse to the last node
    while(temp->next != head)
    {
        temp = temp->next;
    }
    
    // Insert the new node at the end of the list
    new_node->next = head; // Point the new node to the head
    temp->next = new_node; // Point the last node to the new node
    
    // Print the updated list starting from the head
    print(head);
}

// Main function
int main()
{
    struct node *head, *last, *end;
    struct node *temp = head; // Temporary pointer
    int n, i, choice;
    
    // Create the head node and allocate memory
    head = malloc(sizeof(struct node));
    
    // Get data for the head node
    printf("Enter the value of the head node:") && scanf("%d", &head->data);
    
    last = head; // Initialize the last pointer to the head
    
    // Get the number of additional nodes
    printf("Enter the number of nodes:") && scanf("%d", &n);
    
    // Create the rest of the nodes
    for(i = 0; i < n - 1; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node)); // Allocate memory for each node
        
        // Get data for the node
        printf("Enter value:") && scanf("%d", &temp->data);
        
        temp->next = NULL; // Set the next pointer to NULL
        last->next = temp; // Link the previous node to the new node
        last = temp; // Move the last pointer to the new node
    }
    
    // Create the last node
    end = malloc(sizeof(struct node));
    
    // Get data for the last node
    printf("Enter the value of the last element:") && scanf("%d", &end->data);
    
    last->next = end; // Link the previous node to the last node
    end->next = head; // Link the last node to the head to complete the circle
    
    last = head; // Reset last to head
    print(head); // Print the circular list
    
    // Menu to choose insertion options
    printf("\n1<-Insert at the beginning\n2<-Insert at the end");
    scanf("%d", &choice);
    
    // Call appropriate insertion function based on user's choice
    if(choice == 1)
    {
        insert_beg(head); // Insert at the beginning
    }
    else
    {
        insert_end(head); // Insert at the end
    }

    return 0
}
