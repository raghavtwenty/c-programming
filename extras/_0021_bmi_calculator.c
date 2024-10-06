/*
Filename: _0021_bmi_calculator.c
Title: BMI Calculator
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 6, 2024 | Last Updated: October 6, 2024
Language: C | Version: clang-14

Description:
This program calculates the Body Mass Index (BMI) based on user input for height (in meters) 
and weight (in kilograms), and categorizes the BMI value into various weight categories.
*/

// Importing Required Libraries
#include <stdio.h>

// Main
int main()
{
    // Variable declaration
    float weight, bmi; // Weight in kg, BMI value
    float height;      // Height in meters

    // Prompting the user to enter height and weight
    printf("Enter the Height (in meters): ");
    scanf("%f", &height); // Height input in meters

    printf("Enter the Weight (in kilograms): ");
    scanf("%f", &weight); // Weight input in kg

    // Calculating BMI
    bmi = weight / (height * height); // BMI formula

    // Displaying the calculated BMI
    printf("BMI: %.2f\n", bmi); // Display BMI to 2 decimal places

    // Classifying BMI
    if (bmi < 15.0)
        printf("Starvation.\n");
    else if (bmi >= 15.0 && bmi < 16.0)
        printf("Anorexic.\n");
    else if (bmi >= 16.0 && bmi < 18.5)
        printf("Underweight.\n");
    else if (bmi >= 18.5 && bmi < 24.9)
        printf("Ideal.\n");
    else if (bmi >= 25.0 && bmi < 29.9)
        printf("Overweight.\n");
    else if (bmi >= 30.0 && bmi < 39.9)
        printf("Obese.\n");
    else
        printf("Morbidly Obese.\n");

    return 0; 
}
