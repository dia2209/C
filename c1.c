//Name: Diya Manandhar
//Section: BCSIT-A
//Q1: Write a C program to demonstrate the use of different types of operators (arithmetic, relational, logical, etc.) in a single expression.

#include <stdio.h>

int main(){
    int a,b,c,d;
    int result;

    printf("Enter the value for a: ");
    scanf("%d",&a);
    printf("Enter the value for b: ");
    scanf("%d",&b);
    printf("Enter the value for c: ");
    scanf("%d",&c);
    printf("Enter the value for d: ");
    scanf("%d",&d);
   
    result=((a+b)<c)||(c%d==0);
    printf("The result of the expression ((a+b)<c)||(c%%d==0)) is %d\n",result);
    return 0;
    }

    