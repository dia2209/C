#include <stdio.h>

int main() {
    int num;
    float pi;

    // Formatted input: Read an integer and a floating-point number
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter a floating-point number: ");
    scanf("%f", &pi);

    // Formatted output: Display the inputs with formatting
    printf("You entered: Integer = %d, Floating-point = %.2f\n", num, pi);

    return 0;
}
