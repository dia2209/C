#include<stdio.h>

int main(){
    char fullname[30], address[30], phone[15], email[40];
    char qualification[100], skills[100], workExperience[100];

    printf("Enter your fullname: \n");
    fgets(fullname, sizeof(fullname),stdin);

    printf("Enter your address: \n");
    scanf("%c",address);

    printf("Enter your Phone Number: \n");
    scanf("%d",phone);

    printf("Enter your Email Address: \n");
    fgets(email, sizeof(email),stdin);

    printf("Enter your Academic Qualification: \n");
    fgets(qualification, sizeof(qualification), stdin);

    printf("Enter your Skills: ");
    fgets(skills, sizeof(skills), stdin);

    printf("Enter your Work Experience (if any): ");
    fgets(workExperience, sizeof(workExperience), stdin);

    //Resume
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