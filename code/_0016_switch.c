/*
Filename: _0016_switch.c
Title: Switch statements
Author: Raghava | GitHub: @raghavtwenty
Date Created: July 29, 2024 | Last Updated: July 29, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

// Main
int main() {
    // Variable initialization
    int day = 3;

    // Takes the variable
    switch (day) {
        // Checks if day variable == 1
        case 1:
            printf("Monday\n");
            // Break statements are necessary in switch case only then it exits out of switch case
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day\n");
    }
    return 0;
}
