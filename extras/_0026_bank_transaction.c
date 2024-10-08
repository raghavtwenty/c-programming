/*
Filename: _0026_bank_transaction.c
Title: Simple Bank Transaction Program
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 8, 2024 | Last Updated: October 8, 2024
Language: C | Version: clang-14

Description:
This program simulates simple bank transactions like depositing and withdrawing money. The user is prompted to select an action (Deposit, Withdraw, or Exit), and based on their choice, the respective action is performed. The program maintains an account balance and provides appropriate messages based on the available balance.
*/

// Importing Required Libraries
#include<stdio.h>

// Function prototypes
void withdraw();
void deposit();

// Global variable to store account balance
int bal = 12000;

// Main
int main() {
    while (1) {
        // Display the menu
        int choice;
        printf("\n\tMENU\n");
        printf("\t1. Deposit amount \n\t2. Withdraw amount\n\t3. Exit");
        printf("\n\tEnter your choice: ");
        scanf("%d", &choice);  // Read the user's choice

        // Perform actions based on user choice
        if (choice == 1) {
            deposit();  // Call the deposit function
        } else if (choice == 2) {
            withdraw();  // Call the withdraw function
        } else if (choice == 3) {
            break;  // Exit the program
        } else {
            printf("\nInvalid input!!");  // Handle invalid input
        }
    }
    return 0;
}

// Function to handle deposit operation
void deposit() {
    int d_amt;
    printf("\nDEPOSITING YOUR AMOUNT");
    printf("\nEnter the amount to be deposited: ");
    scanf("%d", &d_amt);  // Read the deposit amount from the user

    // Update the balance by adding the deposit amount
    bal += d_amt;
    printf("Your current account balance is: %d", bal);  // Display the new balance
}

// Function to handle withdrawal operation
void withdraw() {
    int w_amt;
    printf("\nWITHDRAWING YOUR AMOUNT");
    printf("\nEnter the amount to be withdrawn: ");
    scanf("%d", &w_amt);  // Read the withdrawal amount from the user

    // Check if there is sufficient balance for withdrawal
    if (w_amt <= bal) {
        bal -= w_amt;  // Deduct the amount from the balance
        printf("\nCollect your cash!!");
    } else {
        printf("\nYour balance is insufficient!!");
    }

    // Display the updated account balance
    printf("\nYour current account balance is: %d", bal);
}
