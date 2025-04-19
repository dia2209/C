#include<stdio.h>

int main(){
    int num1;
    int num2;
    int num3;
    float SI;
    printf("Enter the principal: \n");
    printf("Enter the time: \n");
    printf("Enter the rate: \n");
    scanf("%d %d %d",&num1,&num2,&num3);
    SI=(num1*num2*num3)/100;
    printf("The Simple Interest is: %.2f/n",SI);
    return 0;
}