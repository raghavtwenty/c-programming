/*
Filename: _0016_temp_conversion.c
Title: Convert Temperature from Fahrenheit to Celsius
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 26, 2024 | Last Updated: August 26, 2024
Language: C | Version: clang-14

Description:
This program converts a temperature value from Fahrenheit to Celsius. 
The user is prompted to input the temperature in Fahrenheit, 
and the program calculates and displays the equivalent temperature in Celsius using the formula:
Celsius = (Fahrenheit - 32) * 5/9.
*/


// Include the standard input/output library
#include <stdio.h>  

// Main function: Entry point of the program
int main()
{
    // Declare variables to store the temperature in Fahrenheit and Celsius
    float temp, celsius;

    // Display the purpose of the program to the user
    printf("\nConvert Temperature from Fahrenheit to Celsius.\n\n");

    // Prompt the user to input the temperature in Fahrenheit
    printf("Enter Temperature in Fahrenheit: ") && scanf("%f", &temp);

    // Convert the temperature from Fahrenheit to Celsius using the formula
    celsius = (temp - 32) * 5 / 9;

    // Display the converted temperature in Celsius
    printf("\nTemperature in Celsius: %f\n", celsius);

    // Return 0 to indicate successful execution of the program
    return 0;
}
