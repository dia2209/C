//Name:Diya Manandhar  
//Section:BCSIT-A
//Q2: Create a program that computes compound interest using the formula: A = P * (1 + r/n)^(n*t), where P, r, n, and t are user inputs.

#include<stdio.h>
#include<math.h>//For the use of pow() function
int main(){
    double P,r,A;
    int n,t;

    printf("Enter the principal: ");
    scanf("%lf",&P);
    printf("Enter the rate(in percentage): ");
    scanf("%lf", &r);
    printf("Enter the number of times interested is compunded per year: ");
    scanf("%d",&n);
    printf("Enter the time(in yrs): ");
    scanf("%d",&t);

    r=r/100;//converting rate into decimal
    A= P * pow((1+ r/n),n*t);
    printf("The compound amount is %.2lf\n",A);

    double CI = A-P;
    printf("The compound interest is %.2lf\n",CI);
    return 0;}