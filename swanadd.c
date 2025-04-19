#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    // Display original values
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swap the numbers using the assignment operator
    a = a + b; // Step 1: Add both numbers and store the result in 'a'
    b = a - b; // Step 2: Subtract 'b' from the new 'a' to get the original 'a'
    a = a - b; // Step 3: Subtract the new 'b' from the new 'a' to get the original 'b'

    // Display swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}