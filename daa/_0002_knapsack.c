/*
Filename: _0002_knapsack.c
Title : Knapsack Problem
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 13, 2024 | Last Updated: October 13, 2024
Language: C | Version: clang-14


Description:
This program solves the Knapsack problem using a greedy algorithm. 
The user is prompted to choose a strategy for maximizing profit based on given items' profit and weight. 
The program can sort items by their profit-to-weight ratio in ascending or descending order, 
or sort them by maximum profit or minimum weight. 
The solution calculates the total profit that can be obtained, considering the maximum weight limit.
*/

// Importing required packages
#include <stdio.h>

// Global declaration
#define r 2    // Number of rows (profit and weight)
#define c 7    // Number of columns (number of items)
#define max_wei 15     // Maximum weight that can be stored in the knapsack

// Function to print a 1D array of floats
void print_arr_float_1d(float arr[c]){
    for (int i = 0; i < c; i++){
        printf("%f,", arr[i]);
    }
    printf("\n");
}

// Function to print a 1D array of integers
void print_arr_int_1d(int arr[c]){
    for (int i = 0; i < c; i++){
        printf("%d,", arr[i]);
    }
    printf("\n");
}

// Function to print a 2D array of floats
void print_arr_float_2d(float arr[r][c]){
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("%f,", arr[i][j]);
        }
        printf("\n");
    }
}

// Function to print a 2D array of integers
void print_arr_int_2d(int arr[r][c]){
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("%d,", arr[i][j]);
        }
    }
    printf("\n");
}

// Function to swap two float values
void swap_float(float *a, float *b) {
    float t = *a;
    *a = *b;
    *b = t;
}

// Function to swap two integer values
void swap_int(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Function to sort the ratio array and maintain the corresponding indices
void sort(float ratio_arr[c], int ratio_indi[c], int type){
    // Bubble sort
    if (type == 0) {  // Ascending
        for (int i = 0; i < c - 1; i++) {
            for (int j = i + 1; j < c; j++) {
                if (ratio_arr[i] > ratio_arr[j]) {
                    swap_float(&ratio_arr[i], &ratio_arr[j]);   // Swap ratio array
                    swap_int(&ratio_indi[i], &ratio_indi[j]);   // Swap index array
                }
            }
        }
    } else {  // Descending
        for (int i = 0; i < c - 1; i++) {
            for (int j = i + 1; j < c; j++) {
                if (ratio_arr[i] < ratio_arr[j]) {
                    swap_float(&ratio_arr[i], &ratio_arr[j]);   // Swap ratio array
                    swap_int(&ratio_indi[i], &ratio_indi[j]);   // Swap index array
                }
            }
        }
    }
}

// Function to calculate and examine profit-to-weight ratios
void examine_ratio(float ori[r][c], float ratio_arr[c], int ratio_indi[c]) {
    // Variable initialization
    float ratio = 0.0;

    // Finding ratios
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < c; j++) {
            ratio = ori[i][j] / ori[i + 1][j];  // Calculate ratio: profit/weight
            ratio_arr[j] = ratio;  // Store the ratio
        }
    }
}

// Function to calculate the total profit including fractions if the knapsack is full
void fraction(float pro_wei[r][c], float ratio_arr[c], int ratio_indi[c]) {
    // Variable initialization
    float profit_count = 0.0;
    int bal_wei = max_wei - 0;

    for (int i = 0; i < c - 1; i++) {
        bal_wei -= pro_wei[1][ratio_indi[i]];  // Deduct weight from remaining balance
        profit_count += pro_wei[0][ratio_indi[i]];  // Add profit
        printf("\nProfit : %f\n", profit_count);

        if (bal_wei - pro_wei[1][ratio_indi[i + 1]] < 0.0) {  // Check if the next item's weight exceeds the balance
            // Calculate and add the fractional profit
            profit_count += (pro_wei[0][ratio_indi[i + 1]] * (bal_wei / pro_wei[1][ratio_indi[i + 1]]));
            break;  // Stop if the knapsack is full
        }
    }
    // Display total profit
    printf("\nTotal Profit : %f\n", profit_count);
}

// Function to sort the 2D profit and weight array based on profit
void max_pro_sort(float pro_wei[r][c]) {
    // Descending order sorting based on profit
    for (int i = 0; i < c; i++) {
        for (int j = i + 1; j < c; j++) {
            if (pro_wei[0][i] < pro_wei[0][j]) {
                swap_float(&pro_wei[0][i], &pro_wei[0][j]);     // Swap profit
                swap_float(&pro_wei[1][i], &pro_wei[1][j]);     // Swap corresponding weights
            }
        }
    }
}

// Function to sort the 2D profit and weight array based on weight
void min_wei_sort(float pro_wei[r][c]) {
    // Ascending order sorting based on weight
    for (int i = 0; i < c; i++) {
        for (int j = i + 1; j < c; j++) {
            if (pro_wei[1][i] > pro_wei[1][j]) {
                swap_float(&pro_wei[0][i], &pro_wei[0][j]);     // Swap profit
                swap_float(&pro_wei[1][i], &pro_wei[1][j]);     // Swap corresponding weights
            }
        }
    }
}

// Function to calculate the best profit considering the sorted items
void find_best_profit(float pro_wei[r][c]) {
    // Variable initialization
    float profit_count = 0.0;
    int bal_wei = max_wei - 0;

    for (int i = 0; i < c - 1; i++) {
        bal_wei -= pro_wei[1][i];  // Deduct weight
        profit_count += pro_wei[0][i];  // Add profit
        printf("\nProfit : %f\n", profit_count);

        if (bal_wei - pro_wei[1][i + 1] < 0.0) {  // Check if the next item's weight exceeds the balance
            // Calculate and add the fractional profit
            profit_count += ((pro_wei[0][i + 1]) * (bal_wei / pro_wei[1][i + 1]));
            break;  // Stop if the knapsack is full
        }
    }
    // Display total profit
    printf("\nTotal Profit : %f\n", profit_count);
}

// Main program
int main() {
    printf("\nKnapsack Problem\n");

    // Variable initialization
    float pro_wei[r][c] = { {5, 10, 15, 20, 25, 30, 35}, {2, 4, 6, 8, 10, 12, 14} };   // Profit and Weight arrays
    int choice = 0;     // User choice 

    float ratio_arr[c];       // Ratio array
    int ratio_indi[c] = {0, 1, 2, 3};      // Ratio indices

    // Print initial array
    printf("\nThe initial array : \n");
    print_arr_float_2d(pro_wei);

    // Find the ratio and the corresponding indices
    examine_ratio(pro_wei, ratio_arr, ratio_indi);

    // Display Ratio array
    printf("\nRatio Array : \n");
    print_arr_float_1d(ratio_arr);

    // Prompt user for input choice
    printf("\n1 - Ascending Fraction \n2 - Descending Fraction \n3 - Max Profit \n4 - Min Weight \n\nEnter your choice : ");
    scanf("%d", &choice);

    // Execute function based on user choice 
    switch (choice) {
        case 1:  // Ascending Fraction (Ratio)
            sort(ratio_arr, ratio_indi, 0);  // Sort in ascending order
            printf("\nSorted Ratio Array Ascending: \n");
            print_arr_float_1d(ratio_arr);  // Print sorted array
            fraction(pro_wei, ratio_arr, ratio_indi);  // Calculate total profit including fractions
            break;
        case 2:  // Descending Fraction (Ratio)
            sort(ratio_arr, ratio_indi, 1);  // Sort in descending order
            printf("\nSorted Ratio Array Descending: \n");
            print_arr_float_1d(ratio_arr);  // Print sorted array
            fraction(pro_wei, ratio_arr, ratio_indi);  // Calculate total profit including fractions
            break;
        case 3:  // Maximum Profit
            max_pro_sort(pro_wei);  // Sort items by maximum profit
            printf("\nSorted Profit Array by Max Profit: \n");
            print_arr_float_2d(pro_wei);  // Print sorted array
            find_best_profit(pro_wei);  // Calculate total profit
            break;
        case 4:  // Minimum Weight
            min_wei_sort(pro_wei);  // Sort items by minimum weight
            printf("\nSorted Profit Array by Min Weight: \n");
            print_arr_float_2d(pro_wei);  // Print sorted array
            find_best_profit(pro_wei);  // Calculate total profit
            break;
        default:
            printf("\nInvalid Input\n");  // Handle invalid input
            break;
    }
    return 0;  
}
