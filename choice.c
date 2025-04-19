#include<stdio.h>

int main(){
    int days;
    int language=1;
    printf("Enter day number(1-7):");
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
        if(language==1){
        printf("Sunday\n");}
        else{
            printf("")
        }
        break;

        case 2:
        if(language==2){
            printf("Monday\n");
        }
        else{
            printf("");
        }
        
        break;

        case 3: // card, en or neo, input pin, verification
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

        case 7:
        printf("Saturday\n");

        default:
        printf("Invalid day number\n");
    }
    }
    
    return 0;
}