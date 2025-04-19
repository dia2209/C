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
}