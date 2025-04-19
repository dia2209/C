/*/ User-defined function to calculate the sum of two integers
#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int a=2;
    int b=3;
    int sum=add(a,b);
    printf("The sum is %d\n",sum);
    return 0;
}*/

//library function use
#include<stdio.h>
#include<math.h>

int main(){
    float number;
    float result;
    printf("Enter the number: ");
    scanf("%f",&number);
    result=sqrt(number);
    printf("The result is %.2f\n",result);
    return 0;
}