#include <stdio.h>

int main() {
    char name[30];
    int age;
    double salary;

    // Formatted input: Read a string, integer, and double
    printf("Enter your name: ");
    scanf("%s", name); // String input

    printf("Enter your age: ");
    scanf("%d", &age); // Integer input

    printf("Enter your salary: ");
    scanf("%lf", &salary); // Double input

    // Formatted output: Print the data in a specific format
    printf("Name: %s\n", name);
    printf("Age: %d years\n", age);
    printf("Salary: $%.2lf\n", salary);

    return 0;
}
