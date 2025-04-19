#include <stdio.h>

int main() {
    //int age = 67;
    int age;
    printf("Enter the age?\n");
    scanf("%d",&age);

    if (age >= 65) {
        printf("Eligible for senior citizen discount.\n");
    }

   printf("You entered %d",age);
    return 0;
}
