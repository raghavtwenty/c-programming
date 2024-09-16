/*
Filename: _0076_arrays_2d_big.c
Title: String Operations (Length, Output, and Comparison)
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 16, 2024 | Last Updated: September 16, 2024
Language: C | Version: clang-14

Description:
This program defines a character array `pool` and performs three tasks:
a) Computes the length of the string.
b) Outputs the string to the console.
c) Compares whether two strings ('s' and 'f') are equal.
*/


// Importing required libraries
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

// Main function
int main()
{
    // Array of characters representing the string "string"
    char pool[] =  {'s','t','r','i','n','g'} ;

    // a) Compute the length of the string
    int size = sizeof(pool) / sizeof(pool[0]);   // Size of the array 'pool'
    printf("\nSize of the array: %d\n", size) ;  // Print the size (length)

    // b) Output the string
    printf("Output of the array 'pool': ") ;  // Print statement to display string
    for (int i = 0; i < size; i++)            // Loop through each character
    {
        printf("%c", pool[i]) ;               // Print each character from 'pool'
    }
    printf("\n");

    // c) Compare two strings (whether 's' and 'f' are equal)
    // Since we are not comparing full strings but individual characters, a simple comparison
    // is used for the first character.
    if ('s' == 'f')  // Comparing characters 's' and 'f'
    {
        printf("\nCharacter 's' & 'f' Are Equal.\n") ;
    }
    else
    {
        printf("\nCharacter 's' & 'f' Are Not Equal.\n") ;
    }

    return 0 ;  // Program exit with success code
}
