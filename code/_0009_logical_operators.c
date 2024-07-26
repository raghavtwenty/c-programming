/*
Filename: _009_logical_operators.c
Title: Logical operators
Author: Raghava | GitHub: @raghavtwenty
Date Created: July 26, 2024 | Last Updated: July 26, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

int main() {
    int a = 1; // true
    int b = 0; // false
    
    // Logical AND (&&)
    if (a && b) {
        printf("Logical AND: a && b is true\n");
    } else {
        printf("Logical AND: a && b is false\n");
    }
    
    // Logical OR (||)
    if (a || b) {
        printf("Logical OR: a || b is true\n");
    } else {
        printf("Logical OR: a || b is false\n");
    }
    
    // Logical NOT (!)
    if (!a) {
        printf("Logical NOT: !a is true\n");
    } else {
        printf("Logical NOT: !a is false\n");
    }
    
    if (!b) {
        printf("Logical NOT: !b is true\n");
    } else {
        printf("Logical NOT: !b is false\n");
    }

    // Demonstrating with additional variables
    int x = 5;
    int y = 10;
    int z = 0;

    // Logical AND (&&)
    if (x > 0 && y > 0) {
        printf("Logical AND: x > 0 && y > 0 is true\n");
    } else {
        printf("Logical AND: x > 0 && y > 0 is false\n");
    }
    
    // Logical OR (||)
    if (x > 0 || z > 0) {
        printf("Logical OR: x > 0 || z > 0 is true\n");
    } else {
        printf("Logical OR: x > 0 || z > 0 is false\n");
    }
    
    // Logical NOT (!)
    if (!(x < 0)) {
        printf("Logical NOT: !(x < 0) is true\n");
    } else {
        printf("Logical NOT: !(x < 0) is false\n");
    }
    
    if (!(y < 0)) {
        printf("Logical NOT: !(y < 0) is true\n");
    } else {
        printf("Logical NOT: !(y < 0) is false\n");
    }

    return 0;
}
