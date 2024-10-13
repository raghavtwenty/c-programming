/*
Filename: _0003_prims.c
Title : Prim's Algorithm
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 13, 2024 | Last Updated: October 13, 2024
Language: C | Version: clang-14

Description:
This program implements Prim's Algorithm to find the Minimum Spanning Tree (MST) of a connected, weighted graph by iteratively selecting the edge with the smallest weight that connects a vertex in the tree to one outside it. The user inputs the adjacency matrix representing the graph, and the program maintains a record of selected vertices and their corresponding weights. Ultimately, it produces a list of edges that comprise the MST along with the total cost, ensuring all vertices are connected with the minimum total edge weight.
*/

// Importing required libraries
#include <stdio.h>
#include <stdlib.h>  
#include <limits.h>

#define vertices 7  // Define the number of vertices in the graph

/* Function to find the vertex with the minimum key value
   that has not yet been included in the Minimum Spanning Tree (MST) */
int minimum_key(int k[], int mst[])    
{  
    int minimum = INT_MAX, min;  // Initialize minimum to maximum possible integer
    int i;

    // Iterate over all vertices to find the vertex with the minimum key value
    for (i = 0; i < vertices; i++)  
        if (mst[i] == 0 && k[i] < minimum)   
            minimum = k[i], min = i;  // Update minimum and index
    return min;  // Return the index of the vertex with the minimum key
}    

/* Function to construct and print the Minimum Spanning Tree (MST)
   The input g[vertices][vertices] is an adjacency matrix representing the graph */
void prim(int g[vertices][vertices])    
{    
    // Array to store the parent of each vertex in the MST
    int parent[vertices];  
    int total_cost = 0;  // Variable to hold the total cost of the MST
    
    // Array to store the key values used to select the minimum edge
    int k[vertices];       
    int mst[vertices];  // Array to track vertices included in the MST
    int i, count, edge, v;  // Loop variables

    // Initialize key values and MST inclusion tracker
    for (i = 0; i < vertices; i++)  
    {  
        k[i] = INT_MAX;  // Set initial key values to infinity
        mst[i] = 0;  // Initialize MST inclusion tracker
    }  

    k[0] = 0;  // Start from the first vertex
    parent[0] = -1;  // First vertex is the root of the MST, so parent is -1
    
    // Build the MST by selecting the edges with the minimum weights
    for (count = 0; count < vertices - 1; count++)    
    {    
        // Select the vertex with the minimum key that is not yet included in the MST
        edge = minimum_key(k, mst);    
        mst[edge] = 1;  // Include this vertex in the MST
        
        // Update key values and parent indices for adjacent vertices
        for (v = 0; v < vertices; v++)    
        {  
            // If there is an edge between the current vertex and adjacent vertex,
            // and the adjacent vertex is not yet in the MST
            if (g[edge][v] && mst[v] == 0 && g[edge][v] < k[v])    
            {  
                parent[v] = edge;  // Update parent of the adjacent vertex
                k[v] = g[edge][v];  // Update key value for the adjacent vertex
            }  
        }  
    }    

    // Print the constructed Minimum Spanning Tree
    printf("\n Edge \t  Weight\n");  
    for (i = 1; i < vertices; i++) {
        printf(" %d --- %d    %d \n", parent[i], i, g[i][parent[i]]);    
        total_cost += g[i][parent[i]];  // Accumulate total cost
    }

    // Print the total cost of the Minimum Spanning Tree
    printf("Total cost : %d\n", total_cost);
}    

// Main program
int main(void) {
    printf("\nPrim's Algorithm\n");

    // Variable initialization
    int rand_num;
    int inpt_val;

    // Seed the random number generator
    srand(time(0));  // Change the seed each time the program runs
    rand_num = rand() % vertices;  // Generate a random number within the number of vertices
    printf("The Random number chosen : %d\n", rand_num);

    // Create an adjacency matrix for the graph
    int g[vertices][vertices];  

    // Input the adjacency matrix from the user
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            // Prompt user for input for each edge weight
            printf("Enter the weight for edge (%d, %d): ", i, j);
            scanf("%d", &inpt_val);
            g[i][j] = inpt_val;  // Assign input value to the adjacency matrix
        }
    }

    // Call the Prim's algorithm function to construct and display the MST
    prim(g);    

    return 0;
}
