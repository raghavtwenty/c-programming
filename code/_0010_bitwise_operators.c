/*
Filename: _0010_bitwise_operators.c
Title: Bitwise operators
Author: Raghava | GitHub: @raghavtwenty
Date Created: July 27, 2024 | Last Updated: July 27, 2024
Language: C | Version: clang-14
*/

#include <stdio.h>

int main() {
    unsigned int a = 5;  // 5 in binary is 00000101
    unsigned int b = 9;  // 9 in binary is 00001001
    
    // Bitwise AND (&)
    printf("Bitwise AND: %d & %d = %d\n", a, b, a & b); // 00000101 & 00001001 = 00000001 (1)
    
    // Bitwise OR (|)
    printf("Bitwise OR: %d | %d = %d\n", a, b, a | b); // 00000101 | 00001001 = 00001101 (13)
    
    // Bitwise XOR (^)
    printf("Bitwise XOR: %d ^ %d = %d\n", a, b, a ^ b); // 00000101 ^ 00001001 = 00001100 (12)
    
    // Bitwise NOT (~)
    printf("Bitwise NOT: ~%d = %d\n", a, ~a); // ~00000101 = 11111010 (in 8-bit representation, -6)
    
    // Left Shift (<<)
    printf("Left Shift: %d << 1 = %d\n", a, a << 1); // 00000101 << 1 = 00001010 (10)
    printf("Left Shift: %d << 2 = %d\n", a, a << 2); // 00000101 << 2 = 00010100 (20)
    
    // Right Shift (>>)
    printf("Right Shift: %d >> 1 = %d\n", b, b >> 1); // 00001001 >> 1 = 00000100 (4)
    printf("Right Shift: %d >> 2 = %d\n", b, b >> 2); // 00001001 >> 2 = 00000010 (2)
    
    return 0;
}
