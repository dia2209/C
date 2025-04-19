//Display Age and Salary
/*#include<stdio.h>

int main(){
    int age;
    float salary;

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your salary: ");
    scanf("%f", &salary);

    printf("Your age is %d and your salary is $%.2f\n",age,salary);
    return 0;
}*/

//Ternary 
/*#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter values in a and b: ");
    scanf("%d %d",&a, &b);
    c=(a>b)?a:b;
    printf("The larger value is %d\n",c);
    return 0;
}*/

//Swap using three variables
/*#include<stdio.h>

int main(){
    int a,b;
    int c;
    printf("Enter the values in a and b: ");
    scanf("%d %d",&a,&b);
    printf("Before swapping: a is %d and b is %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After swapping: a is %d and b is %d\n",a,b);
    return 0;

}*/

//Swapping the two variables without the third
/*#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Before swapping: a=%d and b=%d\n",a,b);

    b=b+a;//a=a+b;
    a=b-a;//b=a-b;
    b=b-a;//a=a-b;

    printf("After swapping: a=%d and b=%d\n",a,b);
    return 0;
}*/

//Find size and comma operator
/*#include<stdio.h>

int main(){
    int a=10;
    size_t size=sizeof(a);
    printf("The size of a is %zu bytes\n",size);

    int jk=(1,2,3,4);
    printf("The value of jk is %d",jk);
    return 0;
}*/

//Relation Operator
/*#include<stdio.h>

int main(){
    int a,b;

    printf("Enter the values for a and b: ");
    scanf("%d %d", &a, &b);

int isEqual= (a==b);
    int isGreaterthan= (a>b);
    int isGreaterthanOrequal= (a>=b);
    printf("a == b: %d\n",isEqual);
    printf("a > b: %d\n",isGreaterthan);
    printf("a >= b: %d\n",isGreaterthanOrequal);
    return 0;
}*/

//Sum
/*#include<stdio.h>

int main(){
    int a;
    float b;
    float sum;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number(decimal): ");
    scanf("%f",&b);
    sum=a+b;
    printf("The sum of %d and %.2f is %.2f\n",a,b,sum);
    return 0;
}*/

//Prefix Postfix
/*#include<stdio.h>

int main(){
    int a=2;
    int b=2;

    int PrefixIncrement=++a;
    int PostfixIncrement=b++;
    printf("The PrefixIncrement is: %d\n",PrefixIncrement);
    printf("The PostfixIncrement(before increment) is: %d\n",PostfixIncrement);
    printf("The PostfixIncrement is: %d\n",b);
    return 0;
}*/

//Precedence and Associativity 
/*#include<stdio.h>

int main(){
    int a,b,c;
    int result;
    int sum;
    int ChainassignmentValue;
    printf("Enter the values of a,b and c: ");
    scanf("%d %d %d", &a,&b,&c);

    //Precedence of Arithmetic Operators
    result=(a*b+c);
    printf("The result is %d\n",result);

    //Left-to-Right Associativity
    sum=a+b+c;
    printf("The sum is %d\n",sum);

    //Right-to-Left Associativity
    ChainassignmentValue=(a=b=c);
    printf("The value is %d\n",ChainassignmentValue);
    return 0;

}*/

//Hello World
/*#include<stdio.h>
int main(){
    printf("Hello World!\n");
    return 0;
}*/

//LogicalBoollean
/*#include<stdio.h>

int main(){
    int a=4,b=5,c=6;
    int isNotequal= !(b>a);
    int andOperator= (a+b)>c && (a-b)>c;
    int orOperator= (a+b)>c || (a-b)>c;
    printf("Result:%d\n",isNotequal);
    printf("Result:%d\n",andOperator);
    printf("Result:%d\n",orOperator);
    return 0;

}*/

//Input the Value
/*#include<stdio.h>

int main(){
    int a;
    int b;
    int sum;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    sum=a+b;
    printf("The sum is %d\n",sum);
    return 0;
}*/

//Char
/*#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    ch=getchar();
    
    printf("The character is: ");
    putchar(ch);
    return 0;

}*/

//Name,Age and Address
/*#include<stdio.h>

int main(){
    char name[50];
    int age;
    char address[20];

    printf("Enter your name: ");
    scanf("%s",name);
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your address: ");
    scanf("%s",address);

    printf("Hello %s, your age is %d and your address is %s.\n",name,age,address);
    return 0;

}*/

//Name
/*#include<stdio.h>
int main(){
    printf("My name is: Diya\n");
    return 0;
}*/

#include <stdio.h>

int main() {
    char ch;

    // Unformattxed input: Read a single character
    //printf("Enter a character: ");
    ch = getchar();

    // Unformatted output: Print the character
    //printf("You entered: ");
    putchar(ch);
    putchar('\n'); // Add a newline for better formatting

    return 0;
}
