/*
Filename: _0025_eb_bill.c
Title: Electricity Bill Calculator in C
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 29, 2024 | Last Updated: August 29, 2024
Language: C | Version: clang-14

Description:
This program calculates the electricity bill based on the number of units consumed by the user. The bill is calculated using a tiered rate system where the cost per unit increases as consumption increases. The program uses conditional statements to determine the appropriate billing amount based on the unit slabs.
*/


// Include the standard input/output library
#include <stdio.h>   

// Main function: Entry point of the program
int main()
{
    int unit = 0;          // Declare an integer variable to store the number of units consumed
    float amount = 0.0;    // Declare a float variable to store the calculated bill amount

    // Display a message to indicate the start of the program
    printf("\nEB Bill Calculator\n\n");

    // Prompt the user to enter the number of units consumed
    printf("Enter The Number Of Units Consumed: ");
    scanf("%d", &unit);

    // Calculate the bill amount based on the unit consumption using a tiered rate system
    if (unit <= 100)
        amount = 0;  // No charge for the first 100 units
    else if (unit <= 200)
        amount = (unit - 100) * 1.5;  // Rs. 1.50 per unit for the next 100 units
    else if (unit <= 500)
        amount = (100 * 1.5) + ((unit - 200) * 3.0);  // Rs. 3.00 per unit for units between 201 and 500
    else
        amount = (100 * 1.5) + (300 * 3.0) + ((unit - 500) * 6.6);  // Rs. 6.60 per unit for units above 500

    // Display the calculated electricity bill amount
    printf("Electricity bill = Rs. %.2f\n", amount);
    
    // Return 0 to indicate successful execution of the program
    return 0;  
}
