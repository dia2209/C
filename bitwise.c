#include <stdio.h>

int main() {
    int a = 5;  // Binary: 0101
    int b = 3;  // Binary: 0011

    // Bitwise AND
    int andResult = a & b; // Binary: 0001
    printf("Bitwise AND of %d and %d is %d\n", a, b, andResult);

    // Bitwise OR
    int orResult = a | b; // Binary: 0111
    printf("Bitwise OR of %d and %d is %d\n", a, b, orResult);

    // Bitwise XOR
    int xorResult = a ^ b; // Binary: 0110
    printf("Bitwise XOR of %d and %d is %d\n", a, b, xorResult);

    // Bitwise NOT
    int notResult = ~a; // Binary: 1010 (Two's complement: -6)
    printf("Bitwise NOT of %d is %d\n", a, notResult);

    // Left Shift
    int leftShift = a << 1; // Binary: 1010
    printf("Left Shift of %d by 1 is %d\n", a, leftShift);

    // Right Shift
    int rightShift = b >> 1; // Binary: 0001
    printf("Right Shift of %d by 1 is %d\n", b, rightShift);

    return 0;
}
