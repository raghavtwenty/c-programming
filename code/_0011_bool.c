/*
Filename: _0011_bool.c
Title: Boolean operators
Author: Raghava | GitHub: @raghavtwenty
Date Created: July 27, 2024 | Last Updated: July 27, 2024
Language: C | Version: clang-14
*/

#include <stdio.h>
#include <stdbool.h> 

int main() {
    // Using stdbool.h types and macros
    bool isTrue = true;
    bool isFalse = false;

    if (isTrue) {
        printf("isTrue is true\n");
    } else {
        printf("isTrue is false\n");
    }

    if (isFalse) {
        printf("isFalse is true\n");
    } else {
        printf("isFalse is false\n");
    }
    
    return 0;
}
