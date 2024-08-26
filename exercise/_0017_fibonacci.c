/*
Filename: _0017_fibonacci.c
Title: Fibonacci Series 
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 26, 2024 | Last Updated: August 26, 2024
Language: C | Version: clang-14

Description:
This program generates the Fibonacci series using both iterative and recursive approaches. 
In the Fibonacci series, each number is the sum of the two preceding ones, 
starting from 1 and 1. The user can choose the number of terms in the series to be generated.
*/

// Include the standard input/output library
#include <stdio.h>  

// Main function: Entry point of the program (Iterative approach)
int main()
{
    // Declare integer variables for the Fibonacci series
    int f, i, n1 = 1, n2 = 1, n3;

    // Display the purpose of the program to the user
    printf("\nFibonacci Series (Iterative Approach)\n\n");

    // Prompt the user to input the number of terms in the series
    printf("Enter The Number Of Terms In The Series: ") && scanf("%d", &f);

    // Print the first two terms of the Fibonacci series
    printf("%d\n%d", n1, n2);

    // Generate and print the remaining terms of the Fibonacci series
    for (i = 3; i <= f; i++)
    {
        n3 = n1 + n2;
        printf("\n%d", n3);
        n1 = n2;
        n2 = n3;
    }

    // Return 0 to indicate successful execution of the program
    return 0;
}
