#include<stdio.h>
int main(){
    printf("Hey");
    FILE *fptr;
    fptr=fopen("studentinfo.txt","w");
    char name[100];
    int roll_no;
    char address[100];
    printf("Enter your full name: ");
    fgets(name,100,stdin);
    printf("Enter your roll_no: ");
    scanf("%d",&roll_no);
    printf("Enter your address: ");
    scanf("%s",address);
    
    fprintf(fptr,"%s\n",name);
    fprintf(fptr,"%d\n",roll_no);
    fprintf(fptr," %s\n",address);
    fclose(fptr);
    printf("Hey");
}