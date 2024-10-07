/*
Filename: _0022_sparse_matrix_linkedlist.c
Title: Program To Represent a Sparse Matrix Using a Doubly Linked List
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 7, 2024 | Last Updated: October 7, 2024
Language: C | Version: clang-14

Description:
This program takes a sparse matrix (a matrix with mostly zero values) and stores its non-zero elements in a doubly linked list. 
The doubly linked list nodes store the row and column positions of the non-zero elements, along with their values. 
It demonstrates dynamic memory allocation and traversing a doubly linked list to display the sparse matrix efficiently.
*/

// Importing Required Libraries
#include <stdio.h>
#include <stdlib.h>

// Defining the structure of a node in the doubly linked list
struct node {
    int data;               // Holds the non-zero value
    int row_position;       // Stores the row index of the value
    int column_postion;     // Stores the column index of the value
    struct node *next;      // Pointer to the next node
    struct node *pre;       // Pointer to the previous node
};

// Function to insert a node at the end of the doubly linked list
struct node *insertend(struct node *start, int item, int row_index, int column_index) {
    struct node *temp;          // Temporary node for creating new nodes
    struct node *cur;           // Pointer for traversing the linked list

    // Dynamically allocate memory for a new node
    temp = malloc(sizeof(struct node));
    temp->data = item;
    temp->row_position = row_index;
    temp->column_postion = column_index;
    temp->pre = NULL;
    temp->next = NULL;

    // If the list is empty, return the new node as the start
    if (start == NULL)
        return temp;

    // Traverse to the last node in the list
    cur = start;
    while (cur->next != NULL)
        cur = cur->next;

    // Insert the new node at the end of the list
    cur->next = temp;
    temp->pre = cur;

    return start;
}

// Function to display the contents of the doubly linked list
void display(struct node* start) {
    struct node *temp;

    // Check if the list is empty
    if (start == NULL)
        printf("\nThe list is empty\n");
    else {
        printf("\nRow\tCol\tValue\n");

        // Traverse and print each node
        temp = start;
        while (temp != NULL) {
            printf("%d\t%d\t%d\n", temp->row_position, temp->column_postion, temp->data);
            temp = temp->next;
        }
    }
}

// Main 
int main() {
    int item, i, j;

    // Defining a 4x5 sparse matrix with mostly zero elements
    int sparseMatrix[4][5] = {
        {0, 0, 3, 0, 4},
        {0, 0, 5, 7, 0},
        {0, 0, 0, 0, 0},
        {0, 2, 6, 0, 0}
    };

    // Pointer to the start of the doubly linked list
    struct node* start = NULL;

    // Loop through the sparse matrix
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            item = sparseMatrix[i][j];

            // Insert only non-zero values into the linked list
            if (item != 0)
                start = insertend(start, item, i, j);
        }
    }

    // Display the non-zero elements stored in the linked list
    display(start);

    return 0;
}
