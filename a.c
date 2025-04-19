#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("jkk.txt","w");
   
    char ch;
    fprintf(fptr,"%c",'Y');
    fprintf(fptr,"%c",'O');
    fclose(fptr);
    return 0;
}