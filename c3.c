//Name:Diya Manandhar  
//Section:BCSIT-A
//Q3: Accept three sides of a triangle and check if it forms a valid triangle using relational operators.

#include<stdio.h>

int main(){
    float a,b,c;
    
    printf("Enter the length of a: ");
    scanf("%f",&a);
    printf("Enter the length of b: ");
    scanf("%f",&b);
    printf("Enter the length of c: ");
    scanf("%f",&c);

    if((a+b)>c && (a+c)>b && (b+c)>a){
        printf("The sides %.2f, %.2f and %.2f form a valid triangle",a,b,c);
    }
    else{
        printf("The sides %.2f, %.2f and %.2f do not form a valid triangle",a,b,c);
    }
    return 0;
}