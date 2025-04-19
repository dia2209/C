#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    if(marks>30){
        printf('Congratulations! You have passed!');
    }
    else{
        printf("So sad! You have failed. Try better next time");
    }
}