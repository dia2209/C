#include <stdio.h>


int main() {
    /*FILE *fptr;
    fptr=fopen("test.txt","w+");
    if(fptr==NULL){
        printf("file does not exist!\n");
        return 1;
    }
    //char ch;

    fputc('A',fptr);
    /*fscanf(fptr,"%c",&ch);
    printf("%c",ch);
    fflush(fptr);
    rewind(fptr);
    printf("%c",fgetc(fptr));
    fclose(fptr);
    return 0;

    FILE *fptr;
    fptr=fopen("test.txt","r");
    if(fptr==NULL){
        printf("File does not exisr!");
        return 1;
    }
    char ch;
    ch=fgetc(fptr);
    while(ch!=EOF){
        printf("%c",ch);
        ch=fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
    return 0;

    FILE *fptr;
    fptr=fopen("test.txt","r");
    if(fptr==NULL){
        printf("File does not exist!");
        return 1;
    }
    int num;
    fscanf(fptr,"%d",&num);
    printf("number is %d\n",num);
    fscanf(fptr,"%d",&num);
    printf("number is %d\n",num);
    fscanf(fptr,"%d",&num);
    printf("number is %d\n",num);
    fscanf(fptr,"%d",&num);
    printf("number is %d\n",num);
    fscanf(fptr,"%d",&num);
    printf("number is %d\n",num);
    
    FILE *fptr;
    fptr=fopen("student.txt","w");
    if(fptr==NULL){
        printf("Could not open file!\n");
        return 1;
    }
    char name[100];
    int age;
    float cgpa;
    printf("ENTER YOUR NAME: ");
    fgets(name,sizeof(name),stdin);
    fprintf(fptr,"Your name is %s\n",name);
    printf("ENTER YOUR AGE: ");
    scanf("%d",&age);
    fprintf(fptr,"Your age is %d\n",age);
    printf("ENTER YOUR CGPA: ");
    scanf("%f",&cgpa);
    fprintf(fptr,"Your CPGA is %.2f",cgpa);
    fclose(fptr);
    return 0;

    FILE *fptr;
    fptr=fopen("odd.txt","w");
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i%2 != 0){
            fprintf(fptr,"%d\n",i);
        }
    }
    fclose(fptr);*/

    FILE *fptr;
    fptr=fopen("test.txt","r");
    int num1;
    int num2;
    fscanf(fptr,"%d",&num1);
    fscanf(fptr,"%d",&num2);
    printf("a=%d",num1);
    printf("b=%d",num2);
    fflush(fptr);
    int sum=num1+num2;
    fprintf(fptr,"%d",sum);
    fclose(fptr);
}
