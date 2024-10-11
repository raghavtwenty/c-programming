/*
Filename: _0036_priority_queue.c
Title: Priority Queue Implementation in C
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 11, 2024 | Last Updated: October 11, 2024
Language: C | Version: clang-14

Description:
This program implements a simple priority queue using a linked list. Each node in the list contains data and a priority value. The nodes are then categorized into separate priority queues based on their priority (1 to 4), and the program displays the contents of each queue.
*/

// Required Libraries
#include <stdio.h>
#include <stdlib.h>

// Node structure for the main priority queue
struct node {
    char *data;           // Data (string) stored in the node
    int prior;            // Priority of the node (1 to 4)
    struct node *next;    // Pointer to the next node in the list
};

// Arrays to store data for each priority queue
char *p1[3];  // Priority 1 queue array
char *p2[2];  // Priority 2 queue array
char *p3[2];  // Priority 3 queue array
char *p4[1];  // Priority 4 queue array

// Function to print the nodes in the main linked list
void print(struct node *head) {
    struct node *ptr = head;  // Pointer to traverse the list
    while (ptr != NULL) {
        // Print the data and priority of the current node
        printf("%s, ", ptr->data);
        printf("%d, ", ptr->prior);
        ptr = ptr->next;  // Move to the next node
    }
    printf("NULL");  // End of the list
}

// Function to append nodes to respective priority queues
void append(struct node *head) {
    struct node *ptr = head;  // Pointer to traverse the list
    int p1c = 0, p2c = 0, p3c = 0, p4c = 0;  // Counters for each queue

    // Traverse the list and categorize nodes based on their priority
    while (ptr != NULL) {
        // Check priority of the node and add to corresponding queue
        if (ptr->prior == 1) {
            p1[p1c] = ptr->data;  // Add to priority 1 queue
            p1c++;
        } else if (ptr->prior == 2) {
            p2[p2c] = ptr->data;  // Add to priority 2 queue
            p2c++;
        } else if (ptr->prior == 3) {
            p3[p3c] = ptr->data;  // Add to priority 3 queue
            p3c++;
        } else {
            p4[p4c] = ptr->data;  // Add to priority 4 queue
            p4c++;
        }
        ptr = ptr->next;  // Move to the next node
    }
}

// Main function
int main(void) {
    // Linked list initialization
    struct node *head, *n1, *n2, *n3, *n4, *n5, *n6, *n7;

    // Memory allocation for linked list nodes and assigning data and priority
    head = malloc(sizeof(struct node));
    head->data = "ABC";
    head->prior = 2;

    n1 = malloc(sizeof(struct node));
    n1->data = "XYZ";
    n1->prior = 1;

    n2 = malloc(sizeof(struct node));
    n2->data = "PQR";
    n2->prior = 1;

    n3 = malloc(sizeof(struct node));
    n3->data = "RTZ";
    n3->prior = 3;

    n4 = malloc(sizeof(struct node));
    n4->data = "CBZ";
    n4->prior = 2;

    n5 = malloc(sizeof(struct node));
    n5->data = "QQQ";
    n5->prior = 3;

    n6 = malloc(sizeof(struct node));
    n6->data = "XXX";
    n6->prior = 4;

    n7 = malloc(sizeof(struct node));
    n7->data = "RRR";
    n7->prior = 1;

    // Connecting the nodes to form the linked list
    head->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next = n7;
    n7->next = NULL;

    // Display the original linked list with priorities
    printf("\t\t\nPRIORITY QUEUE\n");
    printf("\n\nINITIAL INPUT VALUES:\n");
    print(head);

    // Process and append nodes to the respective priority queues
    append(head);

    // Display the contents of each priority queue
    printf("\n\nRESULTANT PRIORITY QUEUE:\n");

    printf("QUEUE WITH PRIORITY 1:\n");
    for (int i = 0; i < sizeof(p1)/sizeof(p1[0]); i++) {
        printf("%s, 1, ", p1[i]);
    }

    printf("\nQUEUE WITH PRIORITY 2:\n");
    for (int i = 0; i < sizeof(p2)/sizeof(p2[0]); i++) {
        printf("%s, 2, ", p2[i]);
    }

    printf("\nQUEUE WITH PRIORITY 3:\n");
    for (int i = 0; i < sizeof(p3)/sizeof(p3[0]); i++) {
        printf("%s, 3, ", p3[i]);
    }

    printf("\nQUEUE WITH PRIORITY 4:\n");
    for (int i = 0; i < sizeof(p4)/sizeof(p4[0]); i++) {
        printf("%s, 4, ", p4[i]);
    }

    printf("\n\n");
    return 0;
}
