/*
Filename: _0030_brand_costs.c
Title: Program To Determine the Least Bought Brand of Pens
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 9, 2024 | Last Updated: October 9, 2024
Language: C | Version: clang-14

Description:
This program determines which brand of pens (A, B, or C) is the least bought based on user input. 
It prompts the user for the number of customers and the quantity of each brand purchased by each customer.
The program calculates the total number of each brand sold and applies discounts based on the total cost of pens bought by each customer. 
Finally, it identifies and displays the least bought brand.
*/

// Importing Required Libraries
#include <stdio.h>

// Function to find the least bought brand
void leastsold(int TA, int TB, int TC)
{
    if ((TA < TB) && (TA < TC)) 
    {
        printf("\nBrand A is least bought.\n");
    }
    else if ((TB < TA) && (TB < TC))
    {
        printf("\nBrand B is least bought.\n");
    }
    else
    {
        printf("\nBrand C is least bought.\n");
    }
}

// Main
int main()
{
    // Different types of brands
    int brandA = 100; // Price of brand A
    int brandB = 200; // Price of brand B
    int brandC = 300; // Price of brand C

    int n; // Number of customers
    int TA = 0, TB = 0, TC = 0; // Total number sold for each brand

    printf("How many customers: ") && scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int costA = 0, costB = 0, costC = 0, total_cost_person = 0; // Total cost for the current customer
        int A = 0, B = 0, C = 0; // Quantity bought by the current customer

        printf("\nEnter no. of brand A pens bought by person %d: ", i) && scanf("%d", &A);
        printf("\nEnter no. of brand B pens bought by person %d: ", i) && scanf("%d", &B);
        printf("\nEnter no. of brand C pens bought by person %d: ", i) && scanf("%d", &C);

        // Total cost evaluation 
        costA = A * brandA;
        costB = B * brandB;
        costC = C * brandC;
        total_cost_person = costA + costB + costC;

        // Display total cost of current person in iteration
        printf("\nTotal cost of pens bought by person %d: %d\n", i, total_cost_person);

        // Discounts 
        if (total_cost_person > 1000 && total_cost_person < 4999)
        {
            printf("\nYou have a discount of 15 Percent.\n");
            printf("\nTotal cost after discount: %f\n", (total_cost_person - (total_cost_person * 0.15)));
        }
        else if (total_cost_person > 5000)
        {
            printf("\nYou have a discount of 20 Percent.\n");
            printf("\nTotal cost after discount: %f\n", (total_cost_person - (total_cost_person * 0.20)));
            printf("Hurray !!! You have a gift voucher!\n");
        }

        // Adding up total bought to find the least bought
        TA += A;
        TB += B; 
        TC += C; 
    }

    leastsold(TA, TB, TC);
    return 0;
}
