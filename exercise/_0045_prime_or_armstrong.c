/*
Filename: _0045_prime_or_armstrong.c
Title: Program to check Prime or Armstrong Number using User-defined Function
Date Created: September 5, 2024 | Last Updated: September 5, 2024
Author: Raghava | GitHub: @raghavtwenty

Language: C | Version: clang-14

Description:
This program checks whether a given integer is a Prime number or an Armstrong number using user-defined functions. 
The program prompts the user to input a number, checks both conditions, and displays the results accordingly.
*/

// Importing Required Libraries 
#include <math.h>    // Used for mathematical calculations
#include <stdio.h>   // Standard input/output library

// Initializing Function Declarations
// Function to check if the number is Prime, returns 0 if prime, 1 otherwise
int checkPrime(int num);

// Function to check if the number is Armstrong, returns 0 if Armstrong, 1 otherwise
int checkArmstrong(int num);

// Main Function: Entry point of the program
int main()
{ 
    // Display the purpose of the program
    printf("\nPrime Or Armstrong Number.\n\n");

    // Variable to store the user's input
    int num;
    
    // Prompt the user to enter an integer
    printf("Enter An Integer Value: ") && scanf("%d", &num);

    // Check if the number is prime using `checkPrime` function
    if (checkPrime(num) == 0)
    {
        printf("%d Is A Prime Number.\n", num); 
    }
    else
    {
        printf("%d Is Not A Prime Number.\n", num);
    }

    // Check if the number is an Armstrong number using `checkArmstrong` function
    if (checkArmstrong(num) == 0)
    {
        printf("%d Is An Armstrong Number.\n", num); 
    }
    else
    {
        printf("%d Is Not An Armstrong Number.\n", num);
    }

    // Return 0 to indicate successful execution
    return 0; 
}

// Function to check if a number is Prime
// A prime number is only divisible by 1 and itself
int checkPrime(int num)
{
    int i, count = 0;  // `count` keeps track of whether the number is divisible by any number other than 1 and itself

    // Loop from 2 to half of the number (no need to check beyond num/2)
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)  // If the number is divisible by any `i`, it's not prime
            count = 1;  // Set `count` to 1 to indicate that the number is not prime
    }

    // Special case for the number 1, which is not considered a prime number
    if (num == 1)
        count = 1; 

    return count;  // Return 0 if prime, 1 if not
}

// Function to check if a number is an Armstrong number
// An Armstrong number for a 3-digit number is a number that equals the sum of the cubes of its digits
int checkArmstrong(int num)
{
    int lastdigit = 0, power = 0, sum = 0;  // `lastdigit` stores the last digit, `power` stores the cube of the digit, `sum` stores the sum of cubes
    int n = num;  // Store the original number in `n` to use in the while loop

    // Loop through each digit of the number
    while (n != 0)
    {
        lastdigit = n % 10;                // Extract the last digit
        power = lastdigit * lastdigit * lastdigit;  // Cube the last digit
        sum = sum + power;                 // Add the cube to the `sum`
        n = n / 10;                        // Remove the last digit
    }

    // If the sum of the cubes of the digits equals the original number, it's an Armstrong number
    if (sum == num)
        return 0;  // Return 0 if Armstrong
    else
        return 1;  // Return 1 if not Armstrong
}
