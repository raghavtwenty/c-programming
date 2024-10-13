/*
Filename: _0004_kruskal.c
Title: Kruskal's Algorithm
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 13, 2024 | Last Updated: October 13, 2024
Language: C | Version: clang-14

Description:
This program implements Kruskal's Algorithm to find the Minimum Spanning Tree (MST) of a connected, weighted graph. It begins by sorting the edges based on their weights, then iteratively adds the smallest edge to the MST, ensuring that it does not form a cycle. The user can input the edges of the graph, and the program outputs the edges that comprise the MST along with the total cost.
*/

// Importing required libraries
#include <stdio.h>
#include <stdlib.h>  

// Comparator function to use in sorting edges by weight
int comparator(const void* p1, const void* p2)
{
    const int(*x)[3] = p1;  // Pointer to the first edge
    const int(*y)[3] = p2;  // Pointer to the second edge

    return (*x)[2] - (*y)[2];  // Compare by the weight (third element)
}

// Function to initialize the parent and rank arrays for union-find
void makeSet(int parent[], int rank[], int n)
{
    for (int i = 0; i < n; i++) {
        parent[i] = i;  // Each node is its own parent
        rank[i] = 0;     // Initial rank is 0
    }
}

// Function to find the parent of a node using path compression
int findParent(int parent[], int component)
{
    if (parent[component] == component)
        return component;  // If it is the root, return it

    // Recursively find the root and compress the path
    return parent[component] = findParent(parent, parent[component]);
}

// Function to unite two sets based on their ranks
void unionSet(int u, int v, int parent[], int rank[], int n)
{
    // Finding the parents of both components
    u = findParent(parent, u);
    v = findParent(parent, v);

    // Union by rank
    if (rank[u] < rank[v]) {
        parent[u] = v;  // Make v the parent of u
    }
    else if (rank[u] > rank[v]) {
        parent[v] = u;  // Make u the parent of v
    }
    else {
        parent[v] = u;  // Make u the parent of v
        rank[u]++;      // Increment rank since both were same
    }
}

// Function to find the Minimum Spanning Tree (MST) using Kruskal's Algorithm
void kruskalAlgo(int n, int edge[n][3])
{
    // Sort the edge array in ascending order of weights
    qsort(edge, n, sizeof(edge[0]), comparator);

    int parent[n];  // Array to store parent of each vertex
    int rank[n];    // Array to store rank for union-find

    // Initialize the parent and rank arrays
    makeSet(parent, rank, n);

    int minCost = 0;  // Variable to accumulate minimum cost

    printf("Following are the edges in the constructed MST:\n");
    // Iterate over sorted edges to build the MST
    for (int i = 0; i < n; i++) {
        int v1 = findParent(parent, edge[i][0]);  // Find the parent of the first vertex
        int v2 = findParent(parent, edge[i][1]);  // Find the parent of the second vertex
        int wt = edge[i][2];                        // Weight of the edge

        // If both vertices have different parents, they can be united
        if (v1 != v2) {
            unionSet(v1, v2, parent, rank, n);  // Union the sets
            minCost += wt;                      // Add the weight to the total cost
            printf("%d -- %d == %d\n", edge[i][0], edge[i][1], wt);  // Print the edge
        }
    }

    // Print the total minimum cost of the MST
    printf("Minimum Cost Spanning Tree: %d\n", minCost);
}

// Main program
int main()
{
    // Defining edges in the format {vertex1, vertex2, weight}
    int edge[5][3] = { { 0, 1, 10 },
                    { 0, 2, 6 },
                    { 0, 3, 5 },
                    { 1, 3, 15 },
                    { 2, 3, 4 } };

    // Call the function to find and print the MST
    kruskalAlgo(5, edge);

    return 0;  
}
