/*
Filename: _0025_dental_timing.c
Title: Program To Assign Time Slots To Clients
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 8, 2024 | Last Updated: October 8, 2024
Language: C | Version: clang-14

Description:
This program schedules appointments for up to 10 clients. The user inputs the number of clients and their IDs, and each client is assigned a 15-minute time slot.
The slots are scheduled sequentially, with a 5-minute gap between appointments. The program handles the transition from one hour to the next when minutes exceed 60.
*/

// Importing Required Libraries
#include <stdio.h>

// Main
int main(void) {
    // Declare an array to store client IDs and variables for number of clients
    int arr[10], n;
    
    // Initial time settings: Starting from 10:00 AM
    int time = 10;
    int min = 0;

    // Prompt user to enter the number of clients (max 10)
    printf("\nEnter the max clients (up to 10): ") && scanf("%d", &n);

    // Check if the number of clients is within the limit
    if (n <= 10) {
        int i;

        // Input the client IDs
        for (i = 1; i <= n; i++) {
            printf("Enter the %d client ID: ", i);
            scanf("%d", &arr[i]);
        }

        // Assign time slots to each client
        for (i = 1; i <= n; i++) {
            printf("\nClient %d timing: %02d:%02d hrs to %02d:%02d hrs", 
                arr[i], time, min, time, min + 15);  // Print the time slot (15 minutes)
            
            // Update minutes for the next slot
            min = min + 20;  // 15-minute session + 5-minute gap = 20 minutes total
            if (min >= 60) {
                time++;   // Increment the hour if minutes exceed 60
                min = min - 60;  // Reset the minute counter for the new hour
            }
        }
    } else {
        // Handle case when the number of clients exceeds the limit
        printf("\nMax clients exceeding the limit of 10.\n");
    }
    
    return 0;  
}
