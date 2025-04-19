#include <stdio.h>

int main() {
    int age ;
    char name[50];
    char address[20];

 printf("Enter your Name ,Age and your address?  \n");
   scanf("%s %d %s", name, &age, address); 
   

printf("Hello %s, your age is, %d , and your address is %s\n", name, age, address);
printf("Name =: %s, Age=:, %d\n", name, age);
   
    return 0;
}
