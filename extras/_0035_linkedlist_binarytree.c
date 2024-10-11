/*
Filename: _0035_linkedlist_binarytree.c
Title: Linked List and Binary Tree Implementation with Traversals
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 11, 2024 | Last Updated: October 11, 2024
Language: C | Version: clang-14

Description:
This program demonstrates the use of both a singly linked list and a binary tree.
1. The linked list represents a hierarchy of positions in an organization.
2. The binary tree allows insertion of the same string values from the linked list, using lexicographical (alphabetical) comparison to determine the binary tree structure.
3. Preorder, Postorder, and In order traversals are implemented and demonstrated on the binary tree.
*/

// Required Libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Node structure for a singly linked list (nodell)
struct nodell {
    char *data;               // Data stored in the linked list node
    struct nodell *next;       // Pointer to the next node in the list
};

// Node structure for a binary tree (node)
struct node {
    char data;                // Data stored in the binary tree node (char type for single characters)
    struct node *left, *right; // Pointers to the left and right child nodes
};

// Function to create a new binary tree node
struct node *create_node(char val) {
    // Allocate memory for a new node
    struct node *head = malloc(sizeof(struct node)); 
    // Initialize the node's data and child pointers
    head->data = val;
    head->left = head->right = NULL;
    return head;
}

// Function to insert a value into the binary tree using string comparison
struct node *insert (struct node *root, char *val) { 
    // If the current root is NULL, create and return a new node
    if (root == NULL) {
        return create_node(*val); 
    } else {
        char td = root->data;
        // String comparison to determine where to insert
        printf("%d", strcmp(&td, val));
        if(strcmp(&td, val) < 0) {
            // Insert on the right if the value is greater than current root's data
            root->right = insert(root->right, val); 
        } else {
            // Insert on the left if the value is smaller than current root's data
            root->left = insert(root->left, val);
        }
        return root; 
    }
}

// Binary Tree Traversals

// Preorder traversal (Root -> Left -> Right)
void preorder(struct node *root) { 
    if (root != NULL) {
        printf("%c -> ", root->data); 
        preorder(root->left); 
        preorder(root->right);
    } 
}

// Postorder traversal (Left -> Right -> Root)
void postorder(struct node *root) { 
    if (root != NULL) {
        postorder(root->left); 
        postorder(root->right); 
        postorder("%c -> ", root->data);
    } 
}

// Inorder traversal (Left -> Root -> Right)
void inorder(struct node *root) { 
    if (root != NULL) {
        inorder(root->left); 
        printf("%c -> ", root->data); 
        inorder(root->right);
    } 
}

// Function to print the nodes in the linked list
void print(struct nodell *headll) {
    // Traverse through the linked list and print each node's data
    struct nodell *ptr = headll;
    while (ptr != NULL) {
        printf("%s -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
}

// Main function
int main(void) {
    // Linked List Initialization
    struct nodell *headll, *n1, *n2, *n3, *n4, *n5;

    // Allocate memory for linked list nodes and set the data
    headll = malloc(sizeof(struct nodell));
    headll->data = "Managing trustee";

    n1 = malloc(sizeof(struct nodell));
    n1->data = "Secretary";

    n2 = malloc(sizeof(struct nodell));
    n2->data = "Principal";

    n3 = malloc(sizeof(struct nodell));
    n3->data = "Dean";

    n4 = malloc(sizeof(struct nodell));
    n4->data = "HOD";

    n5 = malloc(sizeof(struct nodell));
    n5->data = "Professors";

    // Linking the nodes to create the linked list
    headll->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = NULL;

    // Show the initial linked list values
    printf("\n\nINITIAL INPUT VALUES:\n");
    print(headll);

    // Binary Tree Insertion using the linked list values
    struct node *root = NULL; 
    root = insert(root, "Managing trustee"); 
    insert(root, "Secretary"); 
    insert(root, "Principal"); 
    insert(root, "Dean"); 
    insert(root, "HOD"); 
    insert(root, "Professors");

    // Display Binary Tree Traversals
    printf("\n\nTRAVERSALS:\n");

    // Preorder traversal
    printf("PREORDER:\n"); 
    preorder(root); 
    printf("NULL\n"); 

    // Postorder traversal
    printf("POSTORDER:\n"); 
    postorder(root); 
    printf("NULL\n"); 

    // In order traversal
    printf("IN ORDER:\n"); 
    inorder(root); 
    printf("NULL\n");

    printf("\n\n");
    return 0;
}
