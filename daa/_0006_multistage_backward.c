/*
Filename: _0006_multistage_backward.c
Title: Multistage Graph Shortest Path (Backward Approach)
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 14, 2024 | Last Updated: October 14, 2024
Language: C | Version: clang-14

Description:
This program calculates the shortest path in a multistage Directed Acyclic Graph (DAG) using a backward dynamic programming approach. The user provides the number of vertices and the adjacency matrix representing the graph. Starting from the destination node, the program computes the minimum cost to reach the destination from each preceding node by checking all outgoing edges. It outputs the total shortest path cost from the source to the destination, without explicitly storing or printing the path.
*/

// Importing required libraries
#include <stdio.h>
#include <math.h>
#define MAX 100  // Maximum number of vertices

int graph[MAX][MAX];  // Adjacency matrix to represent the graph
int dist[MAX];        // Array to store the shortest distance to each vertex
int n;                // Number of vertices in the graph

// Main
int main()
{
    // Read the number of vertices
    printf("Enter the number of vertices: ") && scanf("%d", &n);

    // Read the adjacency matrix
    printf("Enter the adjacency matrix values:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &graph[i][j]);
        }
    }

    // Initialize the distance array
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)  // Destination vertex has a distance of 0
        {
            dist[i] = 0;
        }
        else  // Other vertices start with a large value (infinity)
        {
            dist[i] = MAX;
        }
    }

    // Dynamic programming to compute shortest distances
    for (int i = n - 2; i >= 0; i--)  // Start from the second-last vertex
    {
        for (int j = 0; j < n; j++)  // Check all possible next vertices
        {
            if (graph[i][j] != 0)  // If there is an edge
            {
                // Update the distance to vertex i
                dist[i] = fmin(dist[i], graph[i][j] + dist[j]);
            }
        }
    }

    // Output the shortest path cost from the source (vertex 0)
    printf("Shortest path cost: %d\n", dist[0]);

    return 0;
}
