/*
Filename: _0007_all_pair_shortest.c
Title: Floyd-Warshall Algorithm for All-Pairs Shortest Path
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 14, 2024 | Last Updated: October 14, 2024
Language: C | Version: clang-14

Description:
This program implements the Floyd-Warshall algorithm to compute the shortest paths between all pairs of nodes in a graph. The graph is represented by an adjacency matrix, where the user inputs the number of nodes and edges along with the weight of each edge. The algorithm iteratively updates the shortest paths using a dynamic programming approach. After each iteration, the updated distance matrix is printed, and finally, the shortest path matrix is displayed. If there is no path between two nodes, the program outputs 'INF' to signify infinity.
*/

// Importing necessary libraries
#include <stdio.h>

#define INF 1000000000 // Infinity value to represent no path
#define MAX 100        // Maximum number of nodes in the graph

// Distance matrix and number of nodes
int dist[MAX][MAX]; // Matrix to store the shortest path between all pairs of nodes
int n;              // Number of nodes in the graph

// Main function
int main()
{

    // Initialize the distance matrix
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
            {
                dist[i][j] = 0; // Distance between a node and itself is 0
            }
            else
            {
                dist[i][j] = INF; // Set all other distances to infinity initially
            }
        }
    }

    // Input the graph edges
    int m;
    printf("Enter the value of node(n) and edges(m) : ") & scanf("%d %d", &n, &m);
    for (int i = 1; i <= m; i++)
    {
        int u, v, w; // Start node, end node, and weight of each edge
        scanf("%d %d %d", &u, &v, &w);
        dist[u][v] = w; // Populate the distance matrix with edge weights
    }

    // Floyd-Warshall algorithm to find shortest paths between all pairs of nodes
    for (int k = 1; k <= n; k++)
    {
        // Print the distance matrix after each iteration of the algorithm
        printf("Distance matrix after iteration %d:\n", k - 1);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                printf("%d ", dist[i][j]);
            }
            printf("\n");
        }
        printf("\n");

        // Update the distance matrix based on the Floyd-Warshall algorithm
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (dist[i][k] != INF && dist[k][j] != INF && dist[i][k] + dist[k][j] < dist[i][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j]; // Update the shortest path
                }
            }
        }
    }

    // Print the final shortest path matrix
    printf("Final distance matrix:\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (dist[i][j] == INF)
            {
                printf("INF "); // Output 'INF' if no path exists between nodes i and j
            }
            else
            {
                printf("%d ", dist[i][j]); // Output the shortest distance between i and j
            }
        }
        printf("\n");
    }

    return 0;
}
