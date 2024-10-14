/*
Filename: _0006_multistage_forward.c
Title: Multistage Graph Shortest Path (Forward Approach)
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 14, 2024 | Last Updated: October 14, 2024
Language: C | Version: clang-14

Description:
This program calculates the shortest path in a multistage graph using a forward dynamic programming approach. The user provides the number of nodes and the adjacency matrix representing the graph. The program computes the minimum cost to reach the destination node from the source node by iteratively updating the cost and path arrays. It outputs the shortest path cost and the exact sequence of nodes forming the path from the source to the destination.
*/

// Importing required libraries
#include <stdio.h>
#include <limits.h>

#define MAX_NODES 100  // Maximum number of nodes in the graph
#define INF INT_MAX    // Value to represent infinity

int n;                           // Number of nodes in the graph
int cost[MAX_NODES];             // Array to store the minimum cost to reach each node
int path[MAX_NODES];             // Array to store the previous node in the shortest path
int graph[MAX_NODES][MAX_NODES]; // Adjacency matrix to represent the graph

// Main
int main()
{
    // Read the number of nodes in the graph
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Read the adjacency matrix of the graph
    printf("Enter the adjacency matrix of the graph:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &graph[i][j]);
            
            // If there is no edge between nodes, set distance to INF (except for self-loops)
            if (graph[i][j] == 0 && i != j)
            {
                graph[i][j] = INF;
            }
        }
    }

    // Initialize the cost and path arrays
    for (int i = 0; i < n; i++)
    {
        cost[i] = INF;   // Set all costs to infinity initially
        path[i] = -1;    // No path initially
    }
    cost[n - 1] = 0;     // Cost to reach the destination node from itself is 0

    // Dynamic programming: calculate the minimum cost to reach each node
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = i + 1; j < n; j++)
        {
            // If there's an edge between nodes i and j
            if (graph[i][j] != INF)
            {
                // Calculate the new distance through node j
                int dist = graph[i][j] + cost[j];

                // If the new distance is less than the current cost, update it
                if (dist < cost[i])
                {
                    cost[i] = dist;
                    path[i] = j;  // Set node j as the next node in the path
                }
            }
        }
    }

    // Print the shortest path cost and the actual path
    printf("Shortest path cost: %d\n", cost[0]);
    printf("Path: ");
    int j = path[0];
    printf("0 -> ");  // Start from the source node
    while (j != -1)
    {
        printf("%d -> ", j);  // Print each node in the path
        j = path[j];
    }
    printf("%d\n", n - 1);  // End at the destination node

    return 0;
}
