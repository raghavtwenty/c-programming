/*
Filename: _0027_electric_bill.c
Title: Electric Bill Calculator Program
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 8, 2024 | Last Updated: October 8, 2024
Language: C | Version: clang-14

Description:
This program calculates the electricity bill based on the number of units consumed. 
The program prompts the user to input the number of units consumed and then displays the corresponding bill.
*/

// Importing Required Libraries
#include <stdio.h>

// Main
int main() {
    int units, cost;

    // Prompt the user to enter the number of units consumed
    printf("\nEnter units consumed: ") && scanf("%d", &units);

    // Calculate the total cost based on units consumed
    if (units <= 100) {
        // No cost for the first 100 units
        printf("Total cost is: Rs.0.00\n");
    } 
    else if (units <= 200) {
        // Rs. 1.5/unit for the units between 101 and 200
        cost = (units - 100) * 1.5;
        printf("Total cost is: Rs.%d\n", cost);
    } 
    else if (units <= 300) {
        // Rs. 2.5/unit for units between 201 and 300
        cost = (units - 100) * 2.5;
        printf("Total cost is: Rs.%d\n", cost);
    } 
    else if (units <= 400) {
        // Rs. 3.0/unit for units between 301 and 400
        cost = (units - 100) * 3;
        printf("Total cost is: Rs.%d\n", cost);
    } 
    else if (units <= 500) {
        // Rs. 4.0/unit for units between 401 and 500
        cost = (units - 100) * 4;
        printf("Total cost is: Rs.%d\n", cost);
    } 
    else {
        // Rs. 5.0/unit for units above 500
        cost = (units - 100) * 5;
        printf("Total cost is: Rs.%d\n", cost);
    }

    return 0;
}
