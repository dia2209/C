/*#include <stdio.h>

int main(){
    char fullname[100];
    char address[100];
    int phone;
    char email[100];
    char qualification[100];
    char skills[100];
    char workExperience[100];
    
    printf("Enter your Full Name: \n");
    fgets(fullname, sizeof(fullname), stdin);

    printf("Enter your Address: \n");
    fgets(address, sizeof(address), stdin);

    printf("Enter your Phone Number: \n");
    scanf("%d", &phone); 

    printf("Enter your Email Address: \n");
    fgets(email, sizeof(email), stdin);

    printf("Enter your Academic Qualification: \n");
    fgets(qualification, sizeof(qualification), stdin);

    printf("Enter your Skills: \n");
    fgets(skills, sizeof(skills), stdin);

    printf("Enter your Work Experience (if any): \n");
    fgets(workExperience, sizeof(workExperience), stdin);

    // Resume Output
    printf("/n--------------------------------------/n");
    printf("/t/t/t RESUME/n");
    printf("/n--------------------------------------/n");

    printf("Name:\t%s",fullname);
    printf("Address:\t%s",address);
    printf("Phone Number:\t%d",phone);
    printf("Email Address:\t%s",email);
    printf("Academic Qualification:\t%s\n",qualification);
    printf("Skills:\t%s\n",skills);
    printf("Work Experience:\t%s\n",workExperience);
    printf("/n--------------------------------------/n");
    return 0;
    }
   #include<stdio.h>

int main(){
    int days;
    printf("Enter a number");
    scanf("%d",&days);
    
    printf("1. Sunday");
    printf("2. Monday");
    printf("3. Tuesday");
    printf("4. Wednesday");
    printf("5. Thursday");
    printf("6. Friday");
    printf("7. Saturday");
    scanf("%d",&days);

    switch(days){
        case 1:
        printf("Sunday\n");
        break;

        case 2:
        printf("Monday\n");
        break;

        case 3:
        printf("Tuesday\n");
        break;

        case 4:
        printf("Wednesday\n");
        break;

        case 5:
        printf("Thursday\n");
        break;

        case 6:
        printf("Friday\n");
        break;

        default:
        printf("Saturday\n");
    }
    return 0;
}*/

#include<stdio.h>
int main(){
    printf("Hello World!\n");
}