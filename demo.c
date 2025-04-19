//A program to find the smallest number
#include<stdio.h>
int main(){
   int a,b;
   printf("Enter two numbers: ");
   scanf("%d %d",&a,&b);
   int min;
   min=a*(a<b)+b*(b<a);
   printf("%d",min);
   return 0;
}