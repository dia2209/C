//Name:Diya Manandhar  
//Section:BCSIT-A
//Q5: Write a program that swaps two numbers using only assignment operators.

#include<stdio.h>

int main(){
    int a=6;
    int b=4;
    a+=b;//a=a+b
    b=a-b;//Here, a is equal to a+b so if we deduct b from the new value of a(i.e. a+b) then we get a
    a-=b;//If we deduct the new value of b(i.e a) then we get b
    printf("The value of a is %d\n",a);
    printf("The value of b is %d\n",b);
    return 0;

}
