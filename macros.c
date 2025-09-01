#include <stdio.h>

// 6. Example of Macros and Constant Declaration using #define
#define PI_MACRO 3.14159    // Defining PI constant using #define
#define MAX_VALUE 100       // Defining a constant using #define

// Macro to calculate the square of a number
#define SQUARE(x) ((x) * (x))

int main() {

    // 1. Demonstrating Variables
    int age = 25;        // Integer variable to store age
    float salary = 55000.50; // Float variable to store salary
    char grade = 'A';    // Character variable to store grade
    double pi = 3.14159; // Double variable for higher precision

    // 2. Printing the values of the variables
    printf("Age: %d\n", age);           // Displaying integer value
    printf("Salary: %.2f\n", salary);   // Displaying float value
    printf("Grade: %c\n", grade);       // Displaying character value
    printf("Pi: %.5lf\n", pi);          // Displaying double value

    // 3. Demonstrating Constants
    const int MAX_AGE = 100;  // Constant variable for max age
    const float PI_CONST = 3.14159; // Constant value for PI using const
    printf("\nMaximum Age: %d\n", MAX_AGE);  // Constant value for age
    printf("PI Constant: %.5f\n", PI_CONST); // Constant value for PI using const

    // 4. Using Escape Sequences
    printf("\nEscape Sequences Demonstration:\n");
    printf("This is a new line\n");  // \n is a newline character
    printf("Tab\tSeparation\n");     // \t is a tab character
    printf("Backslash \\ Example\n"); // \\ is a backslash character

    // 5. Tokens: Using Keywords and Identifiers
    int num1 = 10;       // Declaration of integer variable
    float num2 = 3.14;   // Declaration of float variable

    // Performing an operation
    float result = num1 + num2;  // Addition operation using variables

    // Printing the result of the operation
    printf("\nThe result of %d + %.2f is: %.2f\n", num1, num2, result);

    // 6. Using Macros and Constants
    printf("\nUsing #define Constants:\n");
    printf("MAX_VALUE using #define: %d\n", MAX_VALUE); // Using constant MAX_VALUE
    printf("PI_MACRO using #define: %.5f\n", PI_MACRO); // Using macro PI_MACRO

    // Using Macro to calculate square of a number
    int num3 = 5;
    printf("The square of %d is: %d\n", num3, SQUARE(num3)); // Using the SQUARE macro

    return 0; // End of the program
}
