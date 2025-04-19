#include<stdio.h>

int main(){
    int num1;
    int num2;
    int num3;
    float SI;
    SI=(num1*num2*num3)/100;
    printf("Enter the principal: %d",num1);
    printf("Enter the time: %d",num2);
    printf("Enter the rate: %d",num3);
    scanf("%d %d %d",num1,num2,num3);
    printf("The Simple Interest is: %.2f",SI);
    return 0;
}