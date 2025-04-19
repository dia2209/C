#include <stdio.h>

int main() {
    int age;
    float salary;

    // Formatted Input using scanf()
    printf("Enter your age and salary: ");
    scanf("%d %f", &age, &salary);

    // Formatted Output using printf()
    printf("Your age is %d and your salary is %.2f\n", age, salary);

    // Demonstrate formatted output with alignment
    printf("Formatted output: Age: %-5d | Salary: %10.2f\n", age, salary);

    return 0;
}
