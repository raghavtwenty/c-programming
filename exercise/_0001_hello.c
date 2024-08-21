/*
Filename: _0001_hello.c
Title: First program in C
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 21, 2024 | Last Updated: August 21, 2024
Language: C | Version: clang-14

Description:
This is a simple C program that prompts the user to enter their name 
and then greets them with a personalized message. The program uses 
basic input/output functions provided by the C standard library.
*/

/*
To compile and run in Terminal:
gcc -o filename filename.c  
./filename                  
*/

// Include the standard input/output library
#include <stdio.h>  

// Main function: Entry point of the program
int main()
{
    // Declare a character array to store the user's name
    char name[50];
    
    // Prompt the user to enter their name
    printf("\nEnter your name: ");
    
    // Read the user's input and store it in the 'name' variable
    // Using 'scanf' to read a string input
    scanf("%s", name);
    
    // Print a personalized greeting using the name provided
    printf("\nHello, %s !!!\n", name);
    
    // Return 0 to indicate successful execution of the program
    return 0;
}
