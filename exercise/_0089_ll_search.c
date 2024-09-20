/*
Filename: _0089_ll_search.c
Title: Program To Search An Element In A Linked List
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 20, 2024 | Last Updated: September 20, 2024
Language: C | Version: clang-14

Description:
This program demonstrates how to search for a specific element in a singly linked list. The linked list is created dynamically, and the program iterates through the nodes to find the specified element. It prints the index (0-based) of the element if found.
*/

// Importing required libraries
#include <stdlib.h>  // Standard library for dynamic memory allocation
#include <stdio.h>   // Standard input/output library

// Definition of the 'node' structure representing a linked list node
struct node
{
    int data;            // Data field to store the value of the node
    struct node *link;   // Pointer to the next node in the linked list
};

// Function to print the linked list
void print(struct node *head)
{
    // If the head is NULL, the list is empty
    if (head == NULL)
    {
        printf("\nLinked list empty.\n");
    }

    // Temporary pointer to traverse the list
    struct node *ptr = head;

    // Traverse the linked list and print each node's data
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);  // Print current node's data
        ptr = ptr->link;              // Move to the next node
    }
    printf("NULL\n");  // End of the list
}

// Function to search for a specific element in the linked list
void search(struct node *head, int ele)
{
    // Temporary pointer to traverse the list
    struct node *ptr = head;
    int count = 0;  // Initialize a counter to track the index
    int temp;       // Temporary variable to store the data of each node

    // Traverse the list to search for the element
    while (ptr != NULL)
    {
        temp = ptr->data;  // Get the data of the current node

        // If the current node's data matches the searched element
        if (temp == ele)
        {
            printf("\nElement found at index: %d\n", count);  // Print the index
            break;  // Exit the loop if the element is found
        }
        else
        {
            ptr = ptr->link;  // Move to the next node
        }
        count++;  // Increment the index counter
    }

    // If the loop ends without finding the element, it is not in the list
    if (ptr == NULL)
    {
        printf("\nElement not found in the linked list.\n");
    }
}

// Main function: Entry point of the program
int main()
{
    int ele;  // Variable to hold the element to be searched

    // Create the head node and initialize its data
    struct node *head = malloc(sizeof(struct node));
    head->data = 50;    // Initialize the first node's data

    // Create the second node and link it to the head
    struct node *current = malloc(sizeof(struct node));
    current->data = 60;  // Set the second node's data
    head->link = current;  // Link the first node to the second node

    // Create the third node and link it to the second
    current = malloc(sizeof(struct node));
    current->data = 75;  // Set the third node's data
    head->link->link = current;  // Link the second node to the third node

    // Display the created linked list
    printf("\nThe linked list: ");
    print(head);  // Call the print function to display the list

    // Prompt the user to enter the element to be searched
    printf("Enter the element to be found: ");
    scanf("%d", &ele);  // Read the element from user input

    // Search for the element in the linked list
    search(head, ele);  // Call the search function to find the element

    return 0;  // Return 0 to indicate successful execution
}
