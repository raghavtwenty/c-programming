/*
Filename: _0058_roman.c
Title: Program To Convert Roman Numbers To Decimal Equivalent
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 10, 2024 | Last Updated: September 10, 2024
Language: C | Version: clang-14

Description:
This program converts a Roman numeral entered by the user into its decimal equivalent.
It uses an array to store values corresponding to each Roman numeral and calculates the decimal value based on standard Roman numeral rules.
*/


// Importing Required Libraries
#include <stdio.h>   // Standard input/output library for functions like printf, scanf
#include <string.h>  // String handling functions like strlen


// Main function: Entry point of the program
int main()
{
    // Display the purpose of the program
    printf("\nRoman Numbers To Decimal Equivalent.\n\n") ;

    // Declare a character array (string) to store the Roman numeral input by the user
	char roman_num[100] ; 
	
    // Declare variables
	int i = 0, length, deci = 0 ;  // 'deci' stores the decimal equivalent of the Roman numeral
    int value[100] ;               // Array to store the corresponding decimal value of each Roman character

    // Prompt the user to input a Roman numeral
	printf("Enter A Roman Number: ") ;
	scanf("%s", roman_num) ;  // Read the Roman numeral input as a string

    // Get the length of the Roman numeral string using strlen() and store it in 'length'
    length = strlen(roman_num) ;

    // Loop through each character of the Roman numeral string
    for(i = 0 ; i < length ; i++)
    {
        // Use a switch statement to assign a corresponding decimal value to each Roman character
        switch(roman_num[i])
        {
            case 'I' : value[i] = 1 ; break ;    // I = 1
            case 'V' : value[i] = 5 ; break ;    // V = 5
            case 'X' : value[i] = 10 ; break ;   // X = 10
            case 'L' : value[i] = 50 ; break ;   // L = 50
            case 'C' : value[i] = 100 ; break ;  // C = 100
            case 'D' : value[i] = 500 ; break ;  // D = 500
            case 'M' : value[i] = 1000 ; break ; // M = 1000
            default : value[i] = 0 ; break ;     // Default case for invalid characters
        }
    }

    // Convert the Roman numeral to its decimal equivalent
    for(i = 0 ; i < length ; i++)
    {
        // If the current Roman numeral is larger or equal to the next one, add its value
        if(i == length - 1 || value[i] >= value[i + 1])
        {
            deci += value[i] ;  // Add the current value to the decimal total
        }
        // Otherwise, subtract its value (this handles subtractive notation like IV = 4)
        else
        {
            deci -= value[i] ;  // Subtract the current value from the decimal total
        }
    }

    // Print the result: The decimal equivalent of the Roman numeral
    printf("The Decimal Equivalent Of %s Is: %d\n", roman_num, deci) ;

    // Return 0 to indicate successful execution
    return 0 ;
}
