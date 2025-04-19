#include<stdio.h>
struct students{
    int roll;
    char name[100];
    float cgpa;
};
int main(){
    struct students student[5];
    FILE *fptr;
    fptr=fopen("students.txt","w");
    for(int i=0;i<5;i++){
    printf("Enter your name: ");
    scanf("%s",student[i].name);
fprintf(fptr,"%s\n",student[i].name);
}

fclose(fptr);
}