/*
Filename: _0018_pin_verification.c
Title: Program For PIN Code Verification
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 5, 2024 | Last Updated: October 5, 2024
Language: C | Version: clang-14

Description:
This program allows the user to create a new PIN code and then attempts to verify it by allowing the user 
up to three attempts to enter the correct PIN. If the entered PIN matches the created PIN, a success message is displayed; 
otherwise, an error message is shown, and the user can try again.
*/

// Importing the standard input-output library
#include <stdio.h>

// Main
int main()
{
    // Variable declaration
    int pin, epin, err = 1;

    // Prompting the user to create a new PIN
    printf("Create A New Pin: ") && scanf("%d", &pin); 

    // Allowing the user up to 3 attempts to enter the correct PIN
    while (err <= 3)
    {
        printf("Enter The Pin You Have Created: ") && scanf("%d", &epin);  

        // Checking if the entered PIN matches the created PIN
        if (pin == epin)
        {
            printf("Correct Passcode.\n");  // Successful verification
            break;  // Exit the loop on success
        }
        else
        {
            printf("Incorrect Passcode.\n");  // Failure message
        }
        err++;  // Increment the attempt counter
    }

    // Inform the user if they exceeded the maximum attempts
    if (err > 3)
    {
        printf("Maximum attempts reached. Access denied.\n");
    }

    return 0;  
}
