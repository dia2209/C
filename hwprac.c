//Write a C program to input N numbers in an array, calculate and display their sum and average.
#include<stdio.h>
int main(){
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);
    int arr[N];
    int sum=0;
    int average;
    printf("Enter the elements: ");
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++){
        sum+=arr[i];
    }
    printf("The sum is %d\n",sum);
    average=sum/N;
    printf("The average is %d\n",average);
    return 0;
}


//Write a C program to find the largest and smallest element in an array.
#include<stdio.h>
int main(){
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);
    int arr[N];
    printf("Enter the elements: ");
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    printf("The elements are: ");
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    int largest=arr[0];
    int smallest=arr[0];
    for(int i=1;i<N;i++){//1 because 0 is already ,ax and min
        if(largest<arr[i]){
            largest=arr[i];
        }
        if(smallest>arr[i]){
            smallest=arr[i];
        }
    }
    printf("\nThe largest is %d\n",largest);
    printf("The smallest is %d\n",smallest);
    return 0;
}

//Write a C program to reverse the elements of an array.
#include<stdio.h>
int main(){
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);
    int arr[N];
    printf("Enter the elements: ");
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nThe original array is: ");
    for(int i=0;i<N;i++){
       printf("%d ",arr[i]);
    }
    printf("\nThe reversed array is: ");
    for(int i=N-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}

//Write a C program to insert an element at a specific position in an array.
#include<stdio.h>
int main(){
    int N=5;
    int arr[N+1];
    arr[0]=1;
    arr[1]=2;
    arr[2]=3;
    arr[3]=4;
    arr[4]=5;
    int num,pos;
    printf("Enter the number and position: ");
    scanf("%d %d",&num,&pos);
    if(pos<1||pos>N+1){
        printf("Invalid Position!");
        return 0;
    }
    //shifting it
    for(int i=N-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=num;
    for(int i=0;i<N+1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

//Write a C program to delete an element from an array at a specific position.
#include<stdio.h>
#define N 5
int main(){
    int arr[N]={1,2,3,4,5};
    int pos;
    printf("Enter the position to delete: ");
    scanf("%d",&pos);
    if(pos<1||pos>N){
        printf("Invalid position!");
        return 0;
    }
    //deleting 
    for(int i=pos-1;i<N-1;i++){
        arr[i]=arr[i+1];
    }
    printf("The new array is: ");
    for(int i=0;i<N-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}


//Write a C program to add two matrices of order m × n.
#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the number of rows and columns of the matrices to be added: ");
    scanf("%d %d",&m,&n);
    int matrix1[m][n],matrix2[m][n],sum[m][n];
    printf("Enter the elements of the first matrix: ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("\nThe first matrix is:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",matrix1[i][j]);
        }
        printf("\n");
    }
    printf("Enter the elements of the second matrix: ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix2[i][j]);
        }
    }
    printf("\nThe second matrix is:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",matrix2[i][j]);
        }
        printf("\n");
    }
   
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
    printf("\nThe sum of the two matrices is:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//Write a C program to multiply two matrices
#include<stdio.h>
int main(){
    int m,n,o,p;
    printf("Enter the number of rows and columns of the first matrix(m,n): ");
    scanf("%d %d",&m,&n);
    printf("Enter the number of rows and columns of the second matrix(o,p): ");
    scanf("%d %d",&o,&p);
    int matrix1[m][n];
    int matrix2[o][p];
    int product[m][p];
    if(n!=o){
        printf("Matrix multiplication is not possible");
        return 0;
    }
//initialixing product matrix to zwero
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            product[i][j]=0;
        }
    }
    printf("Enter the elements for the first matrix: ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("The first matrix is:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",matrix1[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter the elements for the second matrix: ");
    for(int i=0;i<o;i++){
        for(int j=0;j<p;j++){
            scanf("%d",&matrix2[i][j]);
        }
    }
    printf("The second matrix is:\n");
    for(int i=0;i<o;i++){
        for(int j=0;j<p;j++){
            printf("%d ",matrix2[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            for(int k=0;k<n;k++){
                product[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
    }

    printf("\nThe product is:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
                printf("%d ",product[i][j]); 
        }printf("\n");
    }
    return 0;
}

//Write a C program to find the transpose of a given matrix.
#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    printf("Enter the elements for the matrix: ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The original matrix: ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }printf("\n");
    }
    printf("\nThe transpose matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[j][i]);
        }printf("\n");
    }
    return 0;
}

//Write a C program to find the sum of each row and each column of a matrix.
#include<stdio.h>
int main(){
   int m,n;
   printf("Enter the number of rows and columns for the matrix: ");
   scanf("%d %d",&m,&n);
   int arr[m][n];
   
   
   printf("Enter the elements: ");
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
    }
   }
   printf("The elements are: ");
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d ",arr[i][j]);
    }printf("\n");
   }
   
   printf("The sum of row elements is:\n");
   for(int i=0;i<m;i++){
    int rsum=0;
    for(int j=0;j<n;j++){
        rsum+=arr[i][j];
    }printf("The sum of row %d is %d",i+1,rsum);
   }

   printf("\nThe sum of column elements is:");
   for(int j=0;j<n;j++){
    int csum=0;
    for(int i=0;i<m;i++){
            csum+=arr[i][j];
        }printf("The sum of column %d is %d",i+1,csum);
    }
   
   return 0;
}*/



//Write a C program to input N names and display them.
#include<stdio.h>
int main(){
    int N;
    char name[N][100];
    printf("Enter a number: ");
    scanf("%d",&N);
    printf("Enter the names: ");
    for(int i=0;i<N;i++){
        scanf("%s",name[i]);
    }
    printf("The names are: ");
    for(int i=0;i<N;i++){
        printf("%s\n",name[i]);
    }
    return 0;
}

//Write a program to reverse a given string without using string functions.
#include<stdio.h>
int main(){
    char str[10]="I love me";
    int length=0;
    while(str[length]!='\0'){
        length++;
    }
    printf("The given string is: ");
    for(int i=0; i<length;i++){
        printf("%c",str[i]);
    }
    printf("\nThe reversed string is: ");
    for(int i=length-1;i>=0;i--){
        printf("%c",str[i]);
    }
return 0;
}

//Write a program to check if a string is a palindrome (same forward & backward).
# include<stdio.h>
int main(){
    char str[20]="Mamam";
    int n=0;
    while(str[n]!='\0'){
        n++;
    }
    int isPalindrome=1;
    for(int i=0;i<n/2;i++){
        if(str[i] != str[n-i-1]){
           isPalindrome=0;
           break;
        }
    }
    if(isPalindrome==1){
        printf("The string is Palindrome");
        
    }
    else{
        printf("Not");
    }
    return 0;
}

//Write a C program to count vowels and consonants in a given string.
#include<stdio.h>
int main(){
    char str[100]="DIYA";
    int vcount=0;
    int ccount=0;
    for(int i=0;str[i]!='\0';i++){
        char ch=str[i];
        if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
             if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
                vcount++;
             }
             else{
                ccount++;
             }
        }
    }
    printf("The number of vowels and consonants is %d and %d",vcount,ccount);
    return 0;
}

//Write a program to find the length of a string without using strlen().
#include<stdio.h>
int main(){
    char str[10]="Diya";
    int n=0;
    while(str[n]!='\0'){
        n++;
    }
    printf("The length is %d",n);
    return 0;
}

//Write a function to calculate the factorial of a number using recursion
#include<stdio.h>
int factorial(int n){
        if(n==0 ||n==1)return 1;
        else{
            return n*factorial(n-1);
        }
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int f=factorial(n);
    printf("The factorial of %d is %d",n,f);
    return 0;
}

//Write a function that checks whether a given number is prime or not.
#include<stdio.h>
int isPrime(int num){
    if(num<=1)return 0;
    for(int i=2;i<num;i++){
        if(num%i==0)
        return 0;
    }
    return 1;
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(isPrime(num)==1){
        printf("The number is prime");
    }
    else{
        printf("The number is not prime");
    }
    return 0;
}

//Write a function to swap two numbers using call by reference.
#include<stdio.h>
void swap(int *a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=2;
    int b=3;
    printf("The numbers before swapping are %d and %d\n",a,b);
    swap(&a,&b);
    printf("The numbers after swapping are %d and %d",a,b);
    return 0;
}

//Write a recursive function to generate the Fibonacci series up to N terms
#include<stdio.h>
int fib(int n){
    if(n==0)return 0;
    if(n==1)return 1;
    else{
        return fib(n-2)+fib(n-1);
    }
}

int main(){
    int n;
    printf("ENTER A NUMBER: ");
    scanf("%d",&n);
    printf("The fibonacci series is: ");
    for(int i=0;i<n;i++){
        printf("%d ",fib(i));
    }
    return 0;
}

//Write a function to find the sum of digits of a number using recursion.
#include<stdio.h>
int sum(int n){
    if(n==0)return 0;
    return (n%10)+sum(n/10);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The sum of %d digits is %d",n,sum(n));
    return 0;
}

//Write a function to find the sum of all elements in a 1D array.
#include<stdio.h>
int sum(int *arr,int n){
    int summ=0;
    for(int i=0;i<n;i++){
        summ+=arr[i];
    }
    return summ;
}
int main(){
    int arr[5]={1,2,3,4,5};
    printf("The sum is %d",sum(arr,5));
    return 0;
}

//Write a function to count the number of words in a given string.
#include<stdio.h>
int count(char *str){
    int countt=0;
    for(int i=0;str[i]!='\0';i++){
        if((str[i]==' ' && str[i+1]!= ' ' && str[i+1]!='\0')||(i==0 && str[i]!=' ')){
        countt++;
        }
    
    }
    return countt;
}
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    printf("The number of words is %d",count(str));
return 0;
}

//Write a program to concatenate two strings without using strcat().
#include<stdio.h>
int main(){
    char str1[100], str2[100];
    int i,j;
    printf("Enter the first string: ");
    scanf("%s",str1);
    printf("Enter the second string: ");
    scanf("%s",str2);
    for( i=0;str1[i]!='\0';i++);
    for( j=0;str2[j]!='\0';j++){
        str1[i+j]=str2[j];
    }
    str1[i+j]='\0';
    printf("The concatenated string is %s",str1);
    return 0;
}

//write a program to copy one string to another without using strcpy()
#include<stdio.h>
int main(){
    int i;
    char source[100],destination[100];
    printf("Enter a string: ");
    scanf("%s",source);
    for( i=0;source[i]!='\0';i++){
        destination[i]=source[i];
    }
    destination[i]='\0';
    printf("The copied thing is %s",destination);
    return 0;
}

//find the GCD of two numbers  using functiin
#include<stdio.h>
int gcd(int a, int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(){
   int num1=24;
   int num2=12;
   printf("The gcd is %d", gcd(num1,num2));
return 0;
}
   
//finf the lcm of two numvers using functions
#include<stdio.h>
int gcd(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
int main(){
    int num1=6;
    int num2=4;
    printf("The least common multiple is %d",lcm(num1,num2));
    return 0;
}

/*WAP to practice the 1d array.
1. Check wether the elements of array is odd or even
2. If even , return the even array and terminate the program.
3. If odd, calculate the mid point of array elements, and print the midpoint
4. If the midpoint of the array elements is 8 , then print "8 array" elese "not 8 array"
5. test with both odd and even array types.

Test cases:

int arr[6] = { 10, 20, 30, 40, 50, 60 }; --"even array"
int arr1[5] = { 10, 20, 30, 40, 50 }; --"not 8 array"
int arr2[5]  = { 10, 20, 8, 40, 50 }; --" 8 array"*/

#include<stdio.h>
int main(){
    int midpoint,length;
    int arr[6]={10,20,30,40,50,60};
    int length=sizeof(arr)/sizeof(arr[0]);
    if(length%2==0){
        printf("It is an even array");
        return 0;
    }
    else{
        printf("It is an odd array\n");
        midpoint=arr[(length+1)/2-1];
        printf("The value of midpoint is %d",midpoint);
        if(midpoint==8){
            printf("The midpoint is 8");
        }
        else{
            printf("The midpoint is not 8");
        }
    }
    return 0;
}


/*WAP for following task;

Ask the user the size of array
Ask use the array elements and enter them into the array;
Generate the two set of arrays, evenarray and oddarray

2. Write a C program to perform the following tasks:
Ask the user for the size of an array.
Take input from the user to populate the array.
Calculate and display the following:
The sum of all elements in the array.
The largest element in the array.
The smallest element in the array.
Reverse the array and display the reversed array.*/

#include<stdio.h>
int main(){
    int N;
    printf("Enter the size of the array: ");
    scanf("%d",&N);
    int arr[N];
    printf("Enter the elements: ");
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    printf("The array is: ");
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    printf("\nThe reversed array is: ");
    for(int i=N-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    printf("\nThe even array is: ");
    for(int i=0;i<N;i++){
        if(arr[i]%2==0){
            printf("%d ",arr[i]);
        }
    }
    printf("\nThe odd array is: ");
    for(int i=0;i<N;i++){
        if(arr[i]%2!=0){
            printf("%d ",arr[i]);
        }
    }
    int sum=0;
    for(int i=0;i<N;i++){
        sum+=arr[i];
    }
    printf("\nThe sum is %d\n",sum);
    int largest=arr[0];
    int smallest=arr[0];
    for(int i=1;i<N;i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
        if(smallest>arr[i]){
            smallest=arr[i];
        }
    }
    printf("The largest is %d\n",largest);
    printf("The smallest is %d",smallest);
    return 0;
}

//atm
#include<stdio.h>
#define INITIAL_BALANCE 1000
#define DEFAULT_PIN 1234
#define DEPOSIT_LIMIT 5000
int main(){
    int ENTERED_PIN;
    int CURRENT_BALANCE;
    int  WITHDRAWAL;
    int DEPOSIT_AMOUNT;
    int choice;
    CURRENT_BALANCE=INITIAL_BALANCE;
    printf("Welcome to the ATM dear user!\n");
    printf("Please enter your pin: ");
    scanf("%d",&ENTERED_PIN);
    if(ENTERED_PIN!=DEFAULT_PIN){
        printf("You have entered a wrong pin!");
        return 0;
    }
    
    //menu
    do{printf("Menu:\n");
    printf("1.Check Balance\n");
    printf("2.Withdraw Money\n");
    printf("3.Deposit Money\n");
    printf("4.Exit\n");
   
    printf("Enter your choice(1-4): ");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
        printf("Your current balance is %d\n",CURRENT_BALANCE);
        break;

        case 2:
        printf("Enter the amount that you want to withdraw: ");
        scanf("%d",&WITHDRAWAL);
        if(WITHDRAWAL<=0){
            printf("You have entered an invalid amount!");
        }
        else if(WITHDRAWAL>CURRENT_BALANCE){
            printf("The amount that you have entered exceeds the balance in your account!");
        }
        else{
            printf("You have successfuly withdrawn $%d",WITHDRAWAL);
            CURRENT_BALANCE-=WITHDRAWAL;
        }
        break;

        case 3:
        printf("Enter the amount that you want to deposit: ");
        scanf("%d",&DEPOSIT_AMOUNT);
        if(DEPOSIT_AMOUNT<=0){
            printf("You have entered an invalid amount!");
        }
        else if(DEPOSIT_AMOUNT>DEPOSIT_LIMIT){
            printf("The deposit limit has been exceeded!");
        }
        else{
            printf("You have succesfully deposited $%d amount!",DEPOSIT_AMOUNT);
            CURRENT_BALANCE+=DEPOSIT_AMOUNT;
        }
        break;

        case 4:
        printf("Exiting...");
        return 0;
        break;
        
        default:
        printf("You have entered an invalid choice!");
    }

while(getchar() !='\n');
printf("\nPress Enter to continue...\n");
getchar();
}while(choice!=4);
   printf("\nThankyou for choosing ATM:D");
   return 0;
}

//Write a C program to demonstrate the use of different types of operators (arithmetic, relational, logical, etc.) in a single expression.
//Example: Evaluate the expression ((a + b) > c) && (c % d == 0) for given values of a, b, c, and d.
#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the numbers(a,b,c,d): ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("The numbers are a = %d ,b = %d,c = %d and d = %d respectively\n",a,b,c,d);
    int evaluation=((a+b)>c)&&((b+c)>d);
    printf("The evaluation of the given condition ((a+b)>c)&&((b+c)>d) is %d(0 if false and 1 if true)",evaluation);
    return 0;
}

//Q2: Create a program that computes compound interest using the formula:
//A = P * (1 + r/n)^(n*t), where P, r, n, and t are user inputs.
#include<stdio.h>
#include<math.h>
int main(){
   double P,Amount;
   double r;
   int n,t;
    printf("Enter the principal(P): ");
    scanf("%lf",&P);
    printf("Enter the rate(r): ");
    scanf("%lf",&r);
    printf("Enter the number of times the interest is compounded per year(n): ");
    scanf("%d",&n);
    printf("Enter the time(t): ");
    scanf("%d",&t);
    r=r/100;//converting rate uto decimal
    Amount=P* pow((1+r/n),(n*t));
    printf("The amount is %.2lf\n",Amount);
    double CI=Amount-P;
    printf("The compound Interest is %.2lf",CI);
    return 0;
}

//Q3: Accept three sides of a triangle and check if it forms a valid triangle using relational operators.
#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter three sides of a triangle(x,y,z): ");
    scanf("%d %d %d",&x,&y,&z);
    if((x+y)>z && (x+z)>y && (y+z)>x){
        printf("It is a valid triangle!\n");
    }
    else{
        printf("It is not a valid triangle!\n");
    }
    return 0;
}

//Q4: Create a program that checks if a given year is a leap year using logical operators.
#include<stdio.h>
int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0)||(year%400==0)){
        printf("It is a leap year!");
    }
    else{
        printf("It is not a leap year!");
    }
    return 0;
}

//Q5: Write a program that swaps two numbers using only assignment operators.
#include<stdio.h>
int main(){
    int a=2;
    int b=3;
    printf("The numbers before swapping are %d and %d\n",a,b);
    a+=b;
    b=a-b;
    a=a-b;
    printf("The numbers after swapping are %d and %d",a,b);
    return 0;
}

//Q6: Write a program to check if a number is positive, negative, or zero using the ternary operator.
#include<stdio.h>
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("The number is %s",(number>0)?"positive":(number<0)?"negative":"zero");
    return 0;
}

/*Write a C program to build a resume using the printf and scanf functions. Your program should:

Prompt the user to input the following details:

Full Name
Address
Phone Number
Email Address
Academic Qualification
Skills
Work Experience (if any)
Use escape sequences like \n, \t, and others to format and display the details as a properly structured resume.
*/

#include<stdio.h>
int main(){
  char phone[15];
    char name[100],address[100],email_address[100],qualif[500],skills[500],exp[500];
    printf("Enter your fullname: ");
    fgets(name,sizeof(name),stdin);
    printf("Enter your address: ");
    fgets(address,sizeof(address),stdin);
    printf("Enter your number: ");
    fgets(phone,sizeof(phone),stdin);
    printf("Enter your email address: ");
    fgets(email_address,sizeof(email_address),stdin);
    printf("Enter your academic qualification: ");
    fgets(qualif,sizeof(qualif),stdin);
    printf("Enter your skills: ");
    fgets(skills,sizeof(skills),stdin);
    printf("Enter your experience: ");
    fgets(exp,sizeof(exp),stdin);


    printf("\t -------------------------------\t");
    printf("\t\t\t\t       RESUME       \t\t\t\t");
    printf("\t -------------------------------\t\n");
    printf("Name: %s",name);
    printf("Address: %s",address);
    printf("Phone: %s",phone);
    printf("Email: %s",email_address);
    printf("Academic Qualification:%s",qualif);
    printf("Skills:%s",skills);
    printf("Work Experience:%s",exp);
    printf("\t -------------------------------\t");
    return 0;
}

//display your persnal info(name,dob,pastschool,addrss,hobbioes)
#include<stdio.h>
int main(){
    printf("Name: Diya Manandhar\n");
    printf("DOB: 22 September,2006\n");
    printf("Past School: Alok Vidyashram\n");
    printf("Address: Gaurighat\n");
    printf("Hobbies: Singing, Coding:D");
    return 0;
}

//calculate the area and permiter of circle
#include<stdio.h>
#define PI 3.14
int main(){
    int radius=4;
    float area,perimeter;
    area=PI*radius*radius;
    perimeter=2*PI*radius;
    printf("The area and perimeter are %.2f and %.2f",area,perimeter);
    return 0;
}

//pattern printing
/*Right-Aligned Star Triangle:

    *
   **
  ***
 ****
***** 

*/
#include<stdio.h>
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/*Inverted Right-Aligned Star Triangle:

*****
 ****
  ***
   **
    *
*/
 
