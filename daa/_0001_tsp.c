/*
Filename: _0001_tsp.c
Title : Traveling Sales Person
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 12, 2024 | Last Updated: October 12, 2024
Language: C | Version: clang-14

Description:
This program solves a simplified version of the Traveling Salesperson Problem (TSP) for a set of 4 cities. 
The cost matrix representing the distances between cities is pre-defined. The program attempts to find the minimum path cost 
for the salesperson to visit each city exactly once and return to the starting city.
*/

// Importing Required Libraries
#include <stdio.h>  

// Define the number of cities and a large value for unreachable distances
#define cities 4
#define max 99999

// Function to print the matrix (displays the distance matrix)
void print(int lis[cities][cities], int len) {
    // Iterate through rows and columns of the matrix and print the values
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            printf("%d, ", lis[i][j]);
        }
        printf("\n");  // Newline after each row
    }
}

// Main 
int main(void) {
    printf("\nTravelling Sales Person\n");  // Print program title

    // Initialize the distance matrix representing costs between cities
    // The matrix is symmetric since the distance between city A to B is the same as from B to A
    int dis[cities][cities] = {
        {0, 10, 20, 15},  // Distances from city 1
        {10, 0, 25, 35},  // Distances from city 2
        {20, 25, 0, 30},  // Distances from city 3
        {15, 35, 30, 0}   // Distances from city 4
    };

    // Call the function to print the matrix (display the distance matrix)
    print(dis, cities);

    int total_cost = 0;  // Variable to accumulate the total cost of the path
    printf("\nStarting from city 1\n");  // The salesperson starts from city 1

    // Outer loop to iterate over each city (acting as the current city)
    for (int i = 0; i < cities; i++) {

        // Initialize variables to store the row and column positions and minimum distance
        int iloc;
        int jloc;
        int min = 9999;  // Set initial minimum to a large number (infinity-like)
        int temp[cities] = {};  // Temporary array to keep track of visited cities

        // If it's not the last city, find the next city to visit
        if (i != (cities - 1)) {
            // Inner loop to check the distances from the current city to the next possible cities
            for (int j = i + 1; j < cities; j++) {

                // Avoid diagonal elements and connections to the first city (city 1)
                if ((i != j) && (j != 0)) {

                    // If the current distance is less than the current minimum, update the minimum
                    if (dis[i][j] < min) {
                        min = dis[i][j];  // Update the minimum distance
                        iloc = i;  // Store the row (current city)
                        jloc = j;  // Store the column (next city)
                        printf("\nConnecting point [ %d ] -- ROW : %d -- Column : %d -- VALUE : %d\n",
                               jloc + 1, iloc, jloc, min);  // Print the connection

                        // Add the minimum distance to the total path cost
                        total_cost += min;
                    }
                }
            }
        }
        // For the last city (special case), connect it back to the remaining city
        else {
            for (int j = 0; j < cities; j++) {
                // Skip the diagonal (i.e., city connecting to itself)
                if (i != j) {
                    // If the current distance is less than the current minimum, update the minimum
                    if (dis[i][j] < min) {
                        min = dis[i][j];  // Update the minimum distance
                        iloc = i;  // Store the row (last city)
                        jloc = j;  // Store the column (remaining city)
                        printf("\nConnecting point [ %d ] -- ROW : %d -- Column : %d -- VALUE : %d\n",
                               jloc + 1, iloc, jloc, min);  // Print the connection

                        // Add the minimum distance to the total path cost
                        total_cost += min;
                    }
                }
            }
        }
    }

    // Final output showing the total cost of the trip
    printf("\nTotal path cost : %d\n", total_cost);

    return 0;  
}
