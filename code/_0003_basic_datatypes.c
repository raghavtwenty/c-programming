/*
Filename: _0003_basic_datatypes.c
Title: Basic datatypes in c
Author: Raghava | GitHub: @raghavtwenty
Date Created: July 10, 2024 | Last Updated: July 10, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

// Main function
int main() {

    // \n - separator
    // %  - Format specifiers
    
    // Integer data type (4 bytes)
    int a = 10;
    printf("Integer: %d\n", a);

    // Character data type (1 byte)
    char b = 'A';
    printf("Character: %c\n", b);

    // Floating point data type (4 bytes)
    float c = 3.14f;
    printf("Float: %.2f\n", c);

    // Double precision floating point data type (8 bytes)
    double d = 3.1415926535;
    printf("Double: %.10f\n", d);

    // Short integer data type (usually 2 bytes)
    short e = 32767;
    printf("Short: %d\n", e);

    // Long integer data type (usually 4 or 8 bytes, depending on the system)
    long f = 1234567890L;
    printf("Long: %ld\n", f);

    // Long long integer data type (at least 8 bytes)
    long long g = 123456789012345LL;
    printf("Long Long: %lld\n", g);

    // Unsigned integer data type (4 bytes, cannot be negative)
    unsigned int h = 4294967295U;
    printf("Unsigned Integer: %u\n", h);

    // Unsigned char data type (1 byte, cannot be negative)
    unsigned char i = 255;
    printf("Unsigned Char: %u\n", i);

    // Unsigned short data type (usually 2 bytes, cannot be negative)
    unsigned short j = 65535;
    printf("Unsigned Short: %u\n", j);

    // Unsigned long data type (usually 4 or 8 bytes, cannot be negative)
    unsigned long k = 4294967295UL;
    printf("Unsigned Long: %lu\n", k);

    // Unsigned long long data type (at least 8 bytes, cannot be negative)
    unsigned long long l = 18446744073709551615ULL;
    printf("Unsigned Long Long: %llu\n", l);

    return 0;
}
