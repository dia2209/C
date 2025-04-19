#include <stdio.h>

int main() {
    char name[50], address[100], phone[15], email[50];
    char qualification[100], skills[200], experience[200];

    // Input details from the user
    printf("Enter your full name: ");
    scanf(" %[^\n]s", name);

    printf("Enter your address: ");
    scanf(" %[^\n]s", address);

    printf("Enter your phone number: ");
    scanf(" %[^\n]s", phone);

    printf("Enter your email address: ");
    scanf(" %[^\n]s", email);

    printf("Enter your academic qualification: ");
    scanf(" %[^\n]s", qualification);

    printf("Enter your skills: ");
    scanf(" %[^\n]s", skills);

    printf("Enter your work experience (or write 'None' if no experience): ");
    scanf(" %[^\n]s", experience);

    // Print the resume in a formatted way
    printf("\n--------------------------------------\n");
    printf("\t\tResume\n");
    printf("--------------------------------------\n\n");

    printf("Name:             %s\n", name);
    printf("Address:          %s\n", address);
    printf("Phone Number:     %s\n", phone);
    printf("Email Address:    %s\n\n", email);

    printf("Academic Qualification:\n");
    printf("- %s\n\n", qualification);

    printf("Skills:\n");
    printf("- %s\n\n", skills);

    printf("Work Experience:\n");
    printf("- %s\n", experience);

    printf("--------------------------------------\n");

    return 0;
}
