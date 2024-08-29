/*
Filename: _0027_looping_welcome.c
Title: Looping Welcome Messages in C
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 29, 2024 | Last Updated: August 29, 2024
Language: C | Version: clang-14

Description:
This program demonstrates the use of three types of loops—`for`, `while`, and `do-while`—to print welcome messages a specified number of times. The user inputs the number of iterations, and the program outputs different greetings using each loop structure.
*/

// Include the standard input/output library
#include <stdio.h>   

// Main function: Entry point of the program
int main()
{
    int n;       // Declare an integer variable to store the number of iterations
    int i = 1;   // Declare and initialize a counter for the `for` loop
    int j = 1;   // Declare and initialize a counter for the `while` loop
    int k = 1;   // Declare and initialize a counter for the `do-while` loop

    // Display a message to indicate the start of the program
    printf("\nLooping Welcome\n\n");

    // Prompt the user to enter the number of times to print the welcome message
    printf("Enter The Total Number Of Times: ");
    scanf("%d", &n);
 
    // For Loop: Prints "Hola!!!" a specified number of times
    printf("\nFor Loop\n");
    for (; i <= n;)  // Loop condition checks if i is less than or equal to n
    {
        printf("Hola!!!\n");  // Print the message
        i++;  // Increment the counter
    }

    // While Loop: Prints "Hallo!!!" a specified number of times
    printf("\nWhile Loop\n");
    while (j <= n)  // Loop condition checks if j is less than or equal to n
    {
        printf("Hallo!!!\n");  // Print the message
        j++;  // Increment the counter
    }

    // Do-While Loop: Prints "Hello!!!" a specified number of times
    printf("\nDo While\n");
    do
    {
        printf("Hello!!!\n");  // Print the message
        k++;  // Increment the counter
    }
    while (n != k);  // Loop continues until k equals n

    // Return 0 to indicate successful execution of the program
    return 0;
}
