//Unformatted char
/*#include<stdio.h>

int main(){
    char ch;
    ch=getchar();
    putchar(ch);
    putchar('\n');
    return 0;

}*/

//Unformatted string
/*#include<stdio.h>
#include<string.h>
int main(){
    char name[10];
    printf("Enter a string: ");
    fgets(name,sizeof(name),stdin);

    name[strcspn(name,"\n")]='\0';//strcspn(name, "\n") finds the position of the first occurrence of the newline (\n) in the name array.
The newline is replaced with \0, effectively removing it and properly ending the string.


    printf("You entered: ");
    puts(name);
    return 0;
}*/

//Read an Integer and Floating-point no
/*#include<stdio.h>
int main(){
    int num;
    float pi;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter a floating-point number: ");
    scanf("%f",&pi);
    printf("You have entered: Integer=%d and Floating-point number=%.2f",num,pi);
    return 0;
}*/

//Name,Age and Salary
/*#include<stdio.h>
#include<string.h>
int main(){
    char name[50];
    int age;
    double salary;

    printf("Enter your name: ");
    //scanf("%s",name);
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]='\0';
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your salary: ");
    scanf("%lf",&salary);
    printf("Hello %s, your age is %d and your salary is $%.2lf",name,age,salary);
    return 0;
}*/

//Ask the user to enter any numner? Print if the number is even or odd
/*#include<stdio.h>

int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);

    if(num%2==0){
        printf("The number is even.\n");
    }
    else{
        printf("The number is odd.\n");
    }
    return 0;
}*/

//Find the weight:Underweight(weight<20), Normal Weight(weight=20-59), Over Weight(weight=60-79), Obese(weight>80)
/*#include<stdio.h>
int main(){
    int weight;
    printf("Enter your weight: ");
    scanf("%d",&weight);

    if(weight<20){
        printf("Underweight\n");
    }
    else if(weight>=20 && weight<60){
        printf("Normal Weight\n");
    }
    else if(weight>=60 && weight<80){
        printf("Over Weight\n");
    }
    else{
        printf("Obese\n");
    }
    return 0;
}*/

//Enter the age and check if eligible for senior citizen discount(65 or greater)
/*#include<stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("You entered %d\n",age);

    if(age<0){
        printf("You entered an invalid age. Please try again.\n");
    }
    else if(age<65){
        printf("You are not eligible for senior citizen discount.\n");
    }
    else{
        printf("You are eligible for senior citizen discount.\n");
    }
    return 0;
}*/

//gpa is total 4 and extracurricular 5 so if the student gets more than 3.5 and more than 4 then qualified for honors program else not
/*#include<stdio.h>
int main(){
    float gpa;
    float extracurricular;
    printf("Enter your gpa: ");
    scanf("%f",&gpa);

    if(gpa<0 || gpa>4){
        printf("Invalid entry.\n");
        return 1;
    }

    printf("Enter your extracurricular: ");
    scanf("%f",&extracurricular);
    if(extracurricular<0 || extracurricular>5){
        printf("Invalid entry.\n");
        return 1;
    }

    if(gpa>3.5){
        printf("Congratulations!\n");
        if(extracurricular>=4 && extracurricular<=5){
            printf("You are eligible for the honours program.\n");
        }
        else{
            printf("You are not eligible for the honours progam.\n");
        }
    }
    else{
        printf("Goodluck next time!\n");
    }
    return 0;
}*/

//Enter the days of a week
/*#include<stdio.h>

int main(){
    int day;
    int choice;
    printf("Enter a day number(1-7): ");
    scanf("%d",&day);

    printf("Enter your language choice(1 for English and 0 for Nepali): ");
    scanf("%d",&choice);
    
    if(choice==1){
        switch(day){
        case 1:
        printf("Monday\n");
        break;

        case 2:
        printf("Tuesday\n");
        break;

        case 3:
        printf("Wednesday\n");
        break;

        case 4:
        printf("Thursday\n");
        break;

        case 5:
        printf("Friday\n");
        break;

        case 6:
        printf("Saturday\n");
        break;

        case 7:
        printf("Sunday\n");
        break;

        default:
        printf("Invalid choice\n");
        break;
    }
    
}
 else if(choice==0){
    switch(day){
        case 1:
        printf("Mon\n");
        break;

        case 2:
        printf("Tues\n");
        break;

        case 3:
        printf("Wed\n");
        break;

        case 4:
        printf("Thur\n");
        break;

        case 5:
        printf("Fri\n");
        break;

        case 6:
        printf("Sat\n");
        break;

        case 7:
        printf("Sun\n");
        break;

        default:
        printf("Invalid choice\n");
        break;
    }
    
 }

 else{
    printf("Invalid choice of language.");
    return 1;
 }
 return 0;}*/
 
//Operator choice
/*#include<stdio.h>
int main(){
    char operator;
    double num1,num2,result;

    printf("Enter any operator(+,-,*,/): ");
    scanf(" %c",&operator);
    printf("Enter num1 and num2: ");
    scanf("%lf %lf",&num1,&num2);

    switch(operator){
        case '+':
        result=num1+num2;
        printf("The sum of %.2lf and %.2lf is %.2lf",num1,num2,result);
        break;

        case '-':
        result=num1-num2;
        printf("The difference between %.2lf and %.2lf is %.2lf",num1,num2,result);
        break;

        case '*':
        result=num1*num2;
        printf("The product of %.2lf and %.2lf is %.2lf",num1,num2,result);
        break;

        case '/':
        result=num1/num2;
        if(num2!=0){
            printf("The divison of %.2lf and %.2lf is %.2lf",num1,num2,result);
        }
        else{
            printf("The denominator is invalid.\n");
            return 1;
        }
        
        break;

        default:
        printf("The operator you entered is invalid. Please use +,-,* or /");

    }
    return 0;
}*/

//Game Menu
/*#include<stdio.h>
int main(){
    int choice;
    printf("Menu:\n");
    printf("1.Start Game\n");
    printf("2.Load Game\n");
    printf("3.Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        printf("Starting the game!\n");
        break;

        case 2:
        printf("Loading the game....\n");
        break;

        case 3:
        printf("Exiting the game. Goodbye!\n");
        break;

        default:
        printf("Invalid Choice");

    }
 return 0;
}*/

//Resume
/*#include<stdio.h>
#include<string.h>
int main(){
    char name[30];
    char address[20];
    char phone[10];
    char email[40];
    char qualifications[50];
    char skills[50];
    char experience[60];

    printf("Enter your name: ");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]='\0';
    printf("Enter your address: ");
    fgets(address,sizeof(address),stdin);
    address[strcspn(address,"\n")]='\0';
    printf("Enter your phone: ");
    fgets(phone,sizeof(phone),stdin);
    phone[strcspn(phone,"\n")]='\0';
    printf("Enter your email: ");
    fgets(email,sizeof(email),stdin);
    email[strcspn(email,"\n")]='\0';
    printf("Enter your qualifications: ");
    fgets(qualifications,sizeof(qualifications),stdin);
    qualifications[strcspn(qualifications,"\n")]='\0';
    printf("Enter your skills: ");
    fgets(skills,sizeof(skills),stdin);
    skills[strcspn(skills,"\n")]='\0';
    printf("Enter your experience(None if no): ");
    fgets(experience,sizeof(experience),stdin);
    experience[strcspn(experience,"\n")]='\0';

    printf("*********************\n");
    printf("\t\tResume\n");
    printf("*********************\n");
    printf("Name:     %s\n",name);
    printf("Address:  %s\n",address);
    printf("Phone:    %s\n",phone);
    printf("Email:    %s\n",email);

    printf("Qualifications:\n");
    printf("- %s\n\n",qualifications);

    printf("Skills:\n");
    printf("- %s\n\n",skills);

    printf("Experience:\n");
    printf("- %s\n",experience);
    printf("*********************\n");

return 0;
}*/

//Operators
/*#include<stdio.h>
int main(){
    int num1,num2,sum,difference,product,remainder;
    float division;
    printf("Enter any two numbers: ");
    scanf("%d %d",&num1,&num2);

    sum=num1+num2;
    difference=num1-num2;
    product=num1*num2;

    if(num2!=0){
        division=num1/num2;
        remainder=num1%num2;
    }
    else{
        printf("Invalid number\n");
        return 1;
    }

    printf("Sum: %d + %d = %d\n",num1,num2,sum);
    printf("Difference: %d - %d = %d\n",num1,num2,difference);
    printf("Product: %d * %d = %d\n",num1,num2,product);
    printf("Division: %d / %d = %.2f\n",num1,num2,division);
    printf("Remainder: %d %% %d = %d\n",num1,num2,remainder);
    return 0;
}*/

//CHAPTER 2
/*#include<stdio.h>
int main(){
    //Basic Data Types
    int num=1;
    float percentage=69.9;
    char grade= 'A';
    void *ptr=&num;

    //Derived Data Types
    int numArray[4]={1,2,3,4};
    int *numptr=numArray;

    //User-Defined Data Types
    struct student{
        int id;
        char name[20];
    } student={1,"John Doe"};

    enum levels{
        A=1,B=2,C=3,D=4
    } Gradelevel=A;

    typedef float Score;
    Score avgscore=1.0f;

    //printing
    printf("The num is %d\n",num);
    printf("The percentage is %.2f\n",percentage);
    printf("The grade is %c\n",grade);
    printf("The void pointer where address stored is %p\n",ptr);

    //printing the array thing
    printf("First element: %d\n", *numptr);           // Dereferencing pointer to access the first element (1)
    printf("Second element: %d\n", *(numptr + 1));    // Dereferencing pointer to access the second element (2)
    printf("Third element: %d\n", *(numptr + 2));     // Dereferencing pointer to access the third element (3)
    printf("Fourth element: %d\n", *(numptr + 3));    // Dereferencing pointer to access the fourth element (4)

    printf("Pointer:%p\n",&numArray);

    //printing user defined stuffs
    printf("Structure: ID=%d and Name=%s\n",student.id,student.name);
    printf("Enumeration(Grade A):%d\n",Gradelevel);
    printf("Avgscore: %f\n",avgscore);
    return 0;
}*/

//Defining macros and constants
/*#include<stdio.h>
#define PI 3.14159
#define MAX 1000

#define SQUARE(x) ((x)*(x))

int main(){
   int num=1;
   char grade='A';
   float percentage=85.5;
   double pi=3.14158;

   printf("The num is %d\n",num);
   printf("The grade is %c\n",grade);
   printf("The percentage is %.2f\n",percentage);
   printf("The pi is %.5lf\n",pi);

   const float PI_CONST=3.14;
   const int MAX_AGE=100;
   printf("The value of PI is %.2f\n",PI_CONST);
   printf("The value of MAX AGE is %d\n",MAX_AGE);

   printf("\tThis is tab baby.\n");

   int a=10;
   float num2=56;
   float result=a+num2;
   printf("The result is %.2f\n",result);

   printf("The value using #define of MAX_VALUE is %d\n",MAX_AGE);
   int num3=5;
   printf("The square of %d is %d\n",num3,SQUARE(5));
   return 0;

}*/

//Bitwise
/*#include<stdio.h>
int main(){
    int a=5;//0101
    int b=3;//0011
    int andOperator=a & b;
    int orOperator=a|b;
    int xorOperator=a^b;
    int notOperator=~a; 
    int LSOperator=a<<1;
    int RSOperator=1>>b;
    printf("a & b=%d\n",andOperator);
    printf("a | b=%d\n",orOperator);
    printf("a ^ b=%d\n",xorOperator);
    printf("~a=%d\n",notOperator);
    printf("a<<1=%d\n",LSOperator);
    printf("1>>b=%d\n",RSOperator);
    return 0;
}*/

//Assignment Operator
/*#include<stdio.h>
int main(){
    int a=2;
    a+=5;
    int afterAddition=a;

    int b=5;
    b*=5;
    int afterMultiplication=b;

    printf("The value after addition is %d\n",afterAddition);
    printf("The value after multiplication is %d\n",afterMultiplication);
    return 0;
}*/

//Arithmetic Operators
/*#include<stdio.h>
int main(){
    int a=2;
    int b=1;
    int addition=a+b;
    int multiplication=a*b;
    int difference=a-b;
    int remainder=a%b;
    int division=a/b;
    printf("The sum is %d\n",addition);
    printf("The multiplication is %d\n",multiplication);
    printf("The difference is %d\n",difference);
    printf("The remainder is %d\n",remainder);
    printf("The division is %d\n",division);
    return 0;
}*/

//CONGRATULATIONS BABY!!!


//Write a program to check if a student passed or failed
#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    if(marks>=0 && marks<=30){
        printf("So sad! You have failed. Try better next time");
    }
    else if(marks>30 && marks<=100){
        printf("Congratulations! You have passed!");
    }
    else{
        printf("You have entere a wrong mark!");
    }
}

//A program to give grades to a student
#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    if(marks>=0 && marks<30){
        printf("You have got C");
    }
    else if(marks>=30 && marks<70){
        printf("You have got B");
    }
    else if(marks>=70 && marks<90){
        printf("You have got A");
    }
    else if(marks>=90 && marks<=100){
        printf("You have got A+! I knew you could do it, my beloved lady!");
    }
    else{
        printf("You have entered a wrong marks");
    }
    return 0;
}

//Write a Programt o find if a character entered by user in uppercase or not
#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch>='a'&& ch<='z'){
        printf("Lower case");
    }
    else if(ch>='A'&& ch<='Z'){
        printf("Upper case");
    }
    else{
        printf("Wrong char");
    }
}

//write a program to chec if a given numer is armstrong or not
#include<stdio.h>
int main(){
    int num,originalNum,remainder,result=0;
    printf("Enter a number please, my lady: ");
    scanf("%d",&num);
    originalNum=num;

    while(num!=0){
        remainder=num%10;
        result+=remainder*remainder*remainder;
        num/=10;
    }
   
    if(result==originalNum){
        printf("It is an armstrong number, my darling");
    }
    else{
        printf("It is not an armstrong number,baby");
    }
    return 0;
}

//Check if the given number is a natural number
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num>0){
        printf("It is a natural number");
    }
    else{
        printf("It is not a natural number");
    }
    return 0;
}
//this may be used for stricter thingy
#include<stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    // Check if input is a valid integer
    if (scanf("%d", &num) == 1) {  // scanf returns 1 if input is a valid integer
        if (num > 0) {
            printf("It is a natural number\n");
        } else {
            printf("It is not a natural number\n");
        }
    } else {
        printf("Invalid input! Please enter a valid number.\n");
    }

    return 0;
}


//print the number form 0 t 10besides6
#include<stdio.h>
int main(){
    for(int i=1;i<=10;i++){
        if(i==6)continue;
        printf("%d \n",i);
    }
    return 0;
}

//print the number from 0 to n
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int i=0;
    while(i<=n){
        printf("%d \n",i);
        i++;
    }
    return 0;
}

//print numbers from 0 to 5 using do while
#include<stdio.h>
int main(){
    int i=0;
    do{
        printf("%d \n",i);
        i++;
    }while(i<=5);
    return 0;
}

//print the sum of first n natural nubers
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum=0;
    printf("The reverse list is: "); 
    for(int i=1,j=n;i<=n && j>=1;i++,j--){
        sum+=i;
        printf("%d \n",i);
    }
    printf("The sum is %d\n",sum);
    return 0;
}

//print the table of a umber imput by the user usimng breal\k
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i==2)break;
        int product=n*i;
        printf("%d \n",product);
    
    }
    return 0;
}

//keep taking numbers as input from useruntil user enters an odd number
#include<stdio.h>
int main(){
    int n;
    while(n%2==0){
        printf("ENTER A NUMBER: ");
        scanf("%d",&n);
    }
    printf("Darling you have entered an off number");
    return 0;
}

//keep taking numbers from user until user enters a nu,ber which i multiple of 7
#include<stdio.h>
int main(){
    int num;
    while(num%7!=0){
        printf("Enter a number: ");
    scanf("%d",&num);
    }
    printf("This is a multiple of 7");
}

//print all off  numbers from 5 t 50
#include<stdio.h>
int main(){
    for(int i=5;i<=50;i++){
        if(i%2==0){
            continue;
        }
        printf("%d \n",i);
    }
}

//factprial
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    printf("The factorial is %d",factorial);
}

//reverse of a table for a numerb n
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        printf("%d \n",n*i);
    }
    return 0;
}

//sum of all number betwenn 5 to 50(including it)
#include<stdio.h>
int main(){
    int sum=0;
    for(int i=5;i<=50;i++){
        sum+=i;
    }
    printf("The sum is %d",sum);
    return 0;
}

//fn to print 'hello' and anothe to prit 'goodbye'
#include<stdio.h>
void hello();
void goodbye();
int main(){
    hello();
    goodbye();
    return 0;
}
void hello(){
    printf("Hello, my beautiful lady!\n");
}
void goodbye(){
    printf("Goodbye,darling!");
}

//fn that prints NAMASTE if user is Indian and BONJOUR if the user is french
#include<stdio.h>
void Namaste();
void Bonjour();
int main(){
    int num;
    printf("Please enter 1 if you are Indian and 0 if you are French: ");
    scanf("%d",&num);
    if(num==1){
        Namaste();
    }
    else if(num==0){
        Bonjour();
    }
    else{
        printf("Invalid Number");
    }
    return 0;
}
void Namaste(){
    printf("Namaste!");
}
void Bonjour(){
    printf("Bonjour!");
}

//print tables
#include<stdio.h>
void table(int n);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    table(n);
    return 0;
}
void table(int n){
    for(int i=1;i<=n;i++){
        printf("%d \n",n*i);
    }
}

//library ffn to calculate te swuare of a number gibem by user
#include<stdio.h>
#include<math.h>
void square(int n);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    square(n);
    return 0;
}
void square(int n){
    printf("%f",pow(n,2));
}

//fn to calculate area of a quarea cricel an a rectangle
#include<stdio.h>//YOU MAY USE DEFINE PI BUT DONT KEEP SEMICOLON
int squareArea(int l);
float circleArea(float r);
int rectangleArea(int x,int y);
int main(){
    int l,x,y;
    float r;
    printf("Enter the length of the square: ");
    scanf("%d",&l);
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%d %d",&x,&y);
    int sarea=squareArea(l);
    printf("The area of a square is %d\n",sarea);
    float carea=circleArea(r);
    printf("The area of a circle is %.2f\n",carea);
    int rarea=rectangleArea(x,y);
    printf("The area of a rectangle is %d\n",rarea);
    return 0;
}
int squareArea(int l){
    return l*l;
}
float circleArea(float r){
    return 3.14*r*r;
}
int rectangleArea(int x, int y){
    return x*y;
}

//PRINT hey baby 5 times this is a recursive fn
#include<stdio.h>
void greet(int count){
    if(count==0)return;
    printf("Hey baby!\n");
    greet(count-1);
}
int main(){
    int count;
    printf("Enter a number: ");
    scanf("%d",&count);
    greet(count);
    return 0;
}

//sum of first n natural numbers
#include<stdio.h>
int sum(int n){
    if(n==0)return 0;
    return sum(n-1)+n;
}
int main(){
    int n;
    printf("Enter a natural number: ");
    scanf("%d",&n);
    int nsum=sum(n);
    printf("The sum of first %d natural numbers is %d",n,nsum);
    return 0;
}

//factorial
#include<stdio.h>
int factorial(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int n;
    printf("Enter a natural number: ");
    scanf("%d",&n);
    if(n<0){
        printf("Factorial is not defined for negative numbers");
    }
    else{
        int FactorialN=factorial(n);
    printf("The factorial of %d number is %d",n,FactorialN);
    }
    return 0;
}


//a fn yo convert celsius to fahrenheut
#include<stdio.h>
float converter(float c){
    return (c*9.0/5)+32;
}
int main(){
    float c;
    printf("Enter the degree: ");
    scanf("%f",&c);
    printf("The fahrenheit is %.2f",converter(c));
    return 0;
}

//a fn to calculate percentage of a student from marks in science, maths and sanskrit
#include<stdio.h>
float percentagecalc(float science, float maths, float sanskrit){
    float percentage=((science+maths+sanskrit)/300)*100;
    return percentage;
}
int main(){
    float science,maths,sanskrit;
    printf("Enter the marks for science, maths and sanskrit: ");
    scanf("%f %f %f",&science,&maths,&sanskrit); 
    printf("The percentage is %.2f",percentagecalc(science,maths,sanskrit));
    return 0;
}

//a fn to print n terms of the fibonacci series
#include<stdio.h>
int fibseries(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibseries(n-2)+fibseries(n-1);
    }
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The fibseries upto %d is: ",n);
    for(int i=0;i<=n;i++){
        printf("%d ",fibseries(i));
    }
    return 0;
}

//print the value of i fromits ointer to pointer
#include<stdio.h>
int main(){
    int a=5;
    int *ptr=&a;
    int **pptr=&ptr;
    printf("The value is %d",**pptr);
    return 0;
} 

//square 
#include<stdio.h>
void square(int *n);
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    square(&number);
    printf("The square is %d",number);
    return 0;
}
void square(int *n){
    *n=(*n)*(*n);
}

//swap a and b
#include<stdio.h>
void swap(int *a, int *b);
int main(){
    int a=2;
    int b=4;
    print("The numbers before swapping are %d and %d",&a,&b);
    swap(&a,&b);
    printf("The numbers after swapping are %d and %d",&a,&b);
    return 0;
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;  
    *b=temp;
}

//a fn to cacilate the sum product and avg of 2 numbers
#include<stdio.h>
void calculation(int *a,int *b,int *sum,int *product,int *average){
     *sum=*a+*b;
     *product=(*a)*(*b);
     *average=(*a+*b)/2;
}
int main(){
    int a=2;
    int b=3;
    int sum=0,product=1,average=0;
    calculation(&a,&b,&sum,&product,&average);
    printf("%d %d %d %d %d",a,b,sum,product,average);
}

//write a program to eter price of 3 items and rnt their final cost with gst
#include<stdio.h>
int main(){
    float price[3];
    printf("Enter the price for 3 items: ");
    for(int i=0;i<3;i++){
        scanf("%f",&price[i]);
    }
    printf("The final cost is: ");
    for(int i=0;i<3;i++){
        price[i]=price[i]+0.18*price[i];
        printf("%.2f \n",price[i]);
    }
    return 0;
}

//ptr aritymeti
#include<stdio.h>
int main(){
    int age=22;
    int dage=23;
    int *ptr=&age;
    int*dptr=&dage;
    printf("difference: %u\n",ptr-dptr);
    dptr=&age;
    printf("comaprison: %u",ptr==dptr);
    return 0;
}

//array pointer
#include<stdio.h>
int main(){
    int akon[5];

    //input
    int *ptr=&akon[0];
    for(int i=0;i<5;i++){
        printf("%d index: ",i);
        scanf("%d",(ptr+i));
    }
    //output
    for(int i=0;i<5;i++){
        printf("%d index: ",i);
        printf("%d\n",*(ptr+i));
    }
    return 0;
} 

//print numbers
#include<stdio.h>
void printNumbers(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
}
int main(){
    int number;
    printf("Enter the number of elements: ");
    scanf("%d",&number);
    int PN[number];
    printf("Enter the elements of the array: ");
    for(int i=0;i<number;i++){
        scanf("%d",(PN+i));
    }
    printNumbers(PN,number);
    return 0;
}

//store 3 subject marks of 2 students
#include<stdio.h>
int main(){
    int i,j;
    printf("Enter the values for i and j: ");
    scanf("%d %d",&i,&j);
    int marks[i][j];
    printf("Enter the marks of the students: ");
    for(int a=0;a<i;a++){
        for(int b=0;b<j;b++){
            scanf("%d",&marks[a][b]);
        }
    }
    for(int a=0;a<i;a++){
        for(int b=0;b<j;b++){
            printf("%d ",marks[a][b]);
        }
        printf("\n");
    }
    return 0;
}

//a fn to count the number of odd numbers in an array
#include<stdio.h>
void countOdd(int *arr,int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0)continue;
        else count++;
    }
   printf("The number of odd numbers is %d",count); 
}
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    int arr[number];
    printf("Enter the elements: ");
    for(int i=0;i<number;i++){
        scanf("%d",(arr+i));
    }
    printf("The elements: ");
    for(int i=0;i<number;i++){
        printf("%d ",*(arr+i));
    }
    countOdd(arr,number);
    return 0;
}

//a fn to reverse an array
#include<stdio.h>
void reverseArray(int *arr,int n){
    for(int i=n-1;i>=0;i--){
        printf("%d ",*(arr+i));
    }
}
int main(){
    int number;
    printf("Enter the number of elements you want in your array, mademoiselle: ");
    scanf("%d",&number);
    int arr[number];
    printf("Enter the elements for your array, your highness: ");
    for(int i=0;i<number;i++){
        scanf("%d",(arr+i));
    }
    printf("The elements of your original array, your highness: ");
    for(int i=0;i<number;i++){
        printf("%d ",*(arr+i));
    }
    
    printf("\nThe elements of your reversed array, your highness: ");
    reverseArray(arr,number);
    return 0;
}


/


//write a prohram to sypre the firt n fibonacci numbers
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements:(n>2) ");
    scanf("%d",&n);
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<n;i++){
       fib[i]=fib[i-1]+fib[i-2];
    }
    printf("The fb series is: ");
    printf("%d %d ",fib[0],fib[1]);
    for(int i=2;i<n;i++){
        printf("%d ",fib[i]);
     }
    return 0;
}

//wap to create a 2d array storing the tables of 2 and 3
#include<stdio.h>
void printTables(int arr[][10],int m,int n,int number){
    for(int i=0;i<n;i++){
        arr[m][i]=number*(i+1);
    }
}
int main(){
    int tables[2][10];
    printTables(tables,0,10,2);
    printTables(tables,1,10,3);
    for(int i=0;i<10;i++){
        printf("%d ",tables[0][i]);
    }
    printf("\n");
    for(int i=0;i<10;i++){
        printf("%d ",tables[1][i]);
    }
    return 0;
}

//an array tp find how many times does anumber x occurs
#include<stdio.h>
int main(){
   int arr[6]={1,2,6,4,3,0};
   int largest=arr[0];
   for(int i=0;i<6;i++){
    if(largest<arr[i]){
        largest=arr[i];
       }
   }
  printf("%d",largest);
  return 0;
}

//a program to insert an element at the end of an array
#include<stdio.h>
int main(){
    int n=6;
    int arr[6]={1,2,3,4,5,6};
    printf("The original array is: ");
    for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
    int mwarr[7];//crate a ne array with sixe 7
    for(int i=0;i<n;i++){
     mwarr[i]=arr[i];
    }
    mwarr[n]=7;//add new element

    printf("\nThe new array is: ");
    for(int i=0;i<7;i++){
        printf("%d ",mwarr[i]);
    }
    return 0;
}

//in an array of numbers, find how many times does a number 'x' occurs
#include<stdio.h>
int main(){
    int n=6,x,count=0;
    int arr[6]={1,2,1,2,2,3};
    //for courning number
    printf("Enter the number you want to check, my darling: ");
    scanf("%d",&x);

    //counting
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            count++;
        }
    }
    printf("The number %d occurs %d times",x,count);
    return 0;
}

//crate a strug firstname and astname to dstore detals of user and print all the charavters usijg a loop
#include<stdio.h>
void print(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
       }
       printf("\n");
}
int main(){
    char firstName[]="Diya";
    char lastName[]="Manandhar";
    print(firstName);
    print(lastName);
   return 0;
}

//asl the usre to enter thei first name and print i back to te
#include<stdio.h>
#include<string.h>
int main(){
    char fullName[50];
    printf("Enter your fullname: ");
    //fgets(fullName,50,stdin);
    scanf("%s",fullName);
    printf("BEAUTIFUL, YOUR NAME IS %s",fullName);
    int count=0;
    //for(int i=1;fullName[i]!='\0';i++){
        //count++;
    //}
    printf("The length is %d",strlen(fullName));
    return 0;
}
//strcpy
#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="Hey";
    char str2[]="Baby";
    strcpy(str2,str1);
    printf("The string is %s",str2);
    return 0;
}

//strcat
#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="Hey";
    char str2[]="Baby";
    strcat(str1,str2);
    printf("The string is %s",str1);
    return 0;
}

//strcmp
//strcat
#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="Hey";
    char str2[]="Baby";
   int check=strcmp(str1,str2);
    printf("The string is %d",check);
    return 0;
}


//take a string input fron the user using %c
#include<stdio.h>
int main(){
    char stringo[30];
    char ch;
    int i=0;
    printf("Enter a string babygirl to pull you in: ");
    while(ch!='\n'){
        scanf("%c",&ch);
        stringo[i]=ch;
        i++;
    }
    stringo[i]='\0';
    puts(stringo);
   return 0;
}

//find the salted form of a password entered by user if the salt is "123" and added at the end
#include<stdio.h>
int main(){
    char pass[5]="test";
    char saltedpass[10];
    int i;
    for( i=0;pass[i]!='\0';i++){
        saltedpass[i]=pass[i];
    }
    saltedpass[i++]='1';
    saltedpass[i++]='2';
    saltedpass[i++]='3';
    saltedpass[i]='\0';
    printf("The salted pass is %s",saltedpass);
    return 0;
}

//find the salted form of a password entered by user if the salt is "123" and added at the end
#include<stdio.h>
#include<string.h>
int main(){
    char pass[10]="test";
    char saltedpass[10]="123";
    printf("The salted password is %s",strcat(pass,saltedpass));
    return 0;
}

//you may use yyhis as well
#include<stdio.h>
#include<string.h>
char salting(char password[]){
    char salt[]="123";
    char newpass[200];
    strcpy(newpass,password);
    strcat(newpass,salt);
    puts(newpass);
}
int main(){
    char password[]="scoupsie";
     salting(password);
    return 0;
}

//a fn named slice which takes a string and returns a sliced string from index n to m
#include<stdio.h>
void slice(char arr[],int n, int m)
{
  char newpass[100];
  for(int i=n,j=0;i<=m;i++,j++){
   newpass[j]=arr[i];
  }
  puts(newpass);
}
int main(){
    char pass[10]="heyo baby";
    slice(pass,2,4);
    return 0;
}

//a fn to count the occurencwe of voewel sin a strinhg
#include<stdio.h>
void counto(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')count++;
    }
    printf("%d",count);
}

int main(){
    char arr[100]="hello";
    counto(arr);
    return 0;
}

//check if given character is present in a string or not
#include<stdio.h>
#include<string.h>
int main(){
    char str[10]="hello";
    char ch;
    printf("Enter the character that you want to check: ");
    scanf("%c",&ch);
    for(int i=0;str[i]!='\0';i++){
        if(ch==str[i]){
            printf("The character occurs");
        }
    }
   
}

//wap to allocate memoryto store 5 prices
#include<stdio.h>
#include<stdlib.h>
int main(){
float *price;
//price=(float*)malloc(5*sizeof(float));
/*price[0]=10;
price[1]=20;
price[2]=30;
price[3]=40;
price[4]=50; */

//calloc
price=(float*)calloc(5,sizeof(float));
printf("The prices are: ");
for(int i=0;i<5;i++){
    printf("%.2f\n",price[i]);
}
}

//wap to allocate memory of size n. where n is entre by the user
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int*)calloc(5,sizeof(int));
    printf("Enter numbers: ");
    for(int i=0;i<5;i++){
      scanf("%d",&ptr[i]);
    }
    ptr=realloc(ptr,8);
    printf("Enter numbers(8): ");
    for(int i=0;i<8;i++){
        scanf("%d",&ptr[i]);
    }
    printf("The numbers are: ");
    for(int i=0;i<8;i++){
       printf("%d ",ptr[i]);
    }
    return 0;
}

//create an array of size 5(using calloc) and enter its values from the user
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int*)calloc(5,sizeof(int));
    ptr[0]=1;
    ptr[1]=3;
    ptr[2]=5;
    ptr[3]=7;
    ptr[4]=9;
    printf("The values: ");
    for(int i=0;i<5;i++){
        printf("%d\n",ptr[i]);
    }
    ptr=realloc(ptr,6*sizeof(int));
    ptr[0]=2;
    ptr[1]=4;
    ptr[2]=6;
    ptr[3]=8;
    ptr[4]=10;
    ptr[5]=12;
    printf("The values: ");
    for(int i=0;i<6;i++){
        printf("%d\n",ptr[i]);
    }
    return 0;
}