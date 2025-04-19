//Name:Diya Manandhar  
//Section:BCSIT-A
//Q6: Write a program to check if a number is positive, negative, or zero using the ternary operator.

#include<stdio.h>

int main() {
    int a;

    printf("Enter any number: ");
    scanf("%d", &a);  

    printf("The number is %s.\n", 
           (a > 0) ? "positive" : (a < 0) ? "negative" : "zero");

    return 0;
}



    

