//prog/ram to check if the number is even or odd(postive negative or zero)

/*#include<stdio.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);

    printf("The number is %s\n", (num>0)?"positive": (num<0)?"negative": "zero");

    if(num%2==0){
        printf("The number is even.\n");
    }
    else{
        printf("The number is odd.\n");
    }
    return 0;
}

//1. Check Even/Odd
//2. Check Positive/Negative
//3. Exit

#include<stdio.h>
int main(){
    int choice;
    printf("Enter any number(1 to 3): ");
    scanf("%d",&choice);

    if(choice==0||choice>3){
        printf("Invalid choice.\n");
        return 1;
    }
    else{
        switch(choice){
            case 1:
            printf("1. Check Even/Odd\n");
            break;

            case 2:
            printf("2. Check Positive/Negative\n");
            break;

            default:
            printf("Exit.\n");
        }
    }
    return 0;
}

Write a program that prints numbers from 1 to 10 using a for loop.
#include<stdio.h>
int main(){
    for(int i=1;i<=10;i++){
        printf("%d\n",i);
    }
    return 0;
}

Write a program that prints numbers from 1 to 10 using a while loop.
#include<stdio.h>
int main(){
    int i=1;
    while(i<=10){
        printf("%d\n",i);
        i++;
    }
    return 0;
}

//Write a program that keeps asking the user to enter a number until they enter 0. Use a do-while loop.

#include<stdio.h>
int main(){
    int num;

    do{
        printf("Enter any number: ");
        scanf("%d",&num);
        printf("The number you entered is:\n",num);
        if(num==0){
            printf("You entered 0\n");
        }
        else{
             printf("Enter 0 for ending the loop.\n");
        }
    }while(num!=0);
     return 0;
}

#include<stdio.h>
int main(){
    int rows=5;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");    
    }
    return 0;
}

#include<stdio.h>
int main(){
    int rows=5;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=5-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int rows=5;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=5-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int rows=5;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main(){
    int rows=5;
    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");    
    }
    return 0;
}*/

#include <stdio.h>

int main() {
    int rows = 5; // Height of the upper pyramid

    // Upper Half of Diamond
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower Half of Diamond
    for (int i = rows - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


