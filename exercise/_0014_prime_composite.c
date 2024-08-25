/*
Filename: _0014_prime_composite.c
Title: Prime or Composite Number Check
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 25, 2024 | Last Updated: August 25, 2024
Language: C | Version: clang-14

Description:
This program checks whether a given integer is a prime number or a composite number. 
The user is prompted to input a number, and the program then determines if the number 
is prime (only divisible by 1 and itself) or composite (having more than two divisors).
*/

// Include the standard input/output library
#include <stdio.h>  

// Main function: Entry point of the program
int main()
{
    // Declare integer variables: 'num' for input and 'count' for counting divisors
    int num, count = 0;

    // Display the purpose of the program to the user
    printf("\nPrime Or Composite\n\n");

    // Prompt the user to enter a number and store it in 'num'
    printf("Enter A Number To Check: ") && scanf("%d", &num);

    // Check if the number is less than 2, which is not prime or composite
    if (num < 2) {
        printf("%d is neither prime nor composite.\n", num);
        return 0;
    }

    // Loop to count the number of divisors
    for (int i = 1; i <= num; i++) {
        if (num % i == 0)
            count += 1;
    }

    // Determine if the number is prime or composite based on the divisor count
    if (count == 2)
        printf("%d Is A Prime Number.\n", num);
    else
        printf("%d Is A Composite Number.\n", num);

    // Return 0 to indicate successful execution of the program
    return 0;
}
