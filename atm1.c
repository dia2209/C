//Name: DIYA MANANDHAR
//Class: BCSIT SEC-A

//ATM Machine Simulation Problem Statement//

#include<stdio.h>
#define DEFAULT_PIN 1234
#define INITIAL_BALANCE 1000.0
#define DAILY_DEPOSIT_LIMIT 5000.0

int main(){
    int entered_PIN;
    int choice;
    double amount;
    double balance= INITIAL_BALANCE;
    
    printf("\n************************\n");
    printf("\n     Welcome to ATM     \n");
    printf("\n************************\n");

    printf("Enter your 4-digit PIN\n");
    scanf("%d", &entered_PIN);

    if(entered_PIN != DEFAULT_PIN) {
    printf("The PIN you entered is Invalid. Acess Denied\n");
    return 0;
    }

    printf("\n************************\n");
    printf("\n       ATM Menu         \n");
    printf("\n************************\n");
    printf("1. Check Balance\n");
    printf("2. Withdraw Money\n");
    printf("3. Deposit Money\n");
    printf("4. Exit\n");
    printf("Enter your choice(1-4): ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        printf("Your current balance is $%.2f\n",balance);
        break;

        case 2:
        printf("Enter the amount that you want to withdraw: ");
        scanf("%lf", &amount);

        if(amount<=0){
            printf("Invalid Value. Please enter a valid amount.\n");
            break;
        }
        else if(amount>balance){
            printf("Insufficient Funds. Your current balance is $%.2f\n",balance);
            break;
        }
        else{
            balance-=amount;
            printf("Withdraw successful. Your new balance is $%.2f\n",balance);
        }
        break;
        
        case 3:
        printf("Enter the amount of money you want to deposit: ");
        scanf("%lf",&amount);

        if(amount<=0){
            printf("Invalid Amount. Please enter a valid amount.\n");
            break;
        }
        else if(amount>DAILY_DEPOSIT_LIMIT){
            printf("Your daily deposit limit is $%.2f. Please try a smaller amount.",DAILY_DEPOSIT_LIMIT);
            break;
        }
        else{
            balance += amount;
            printf("Deposit successful. Your new balance is $%.2f.\n",balance);
        }
        break;

        case 4:
         printf("\n   Thankyou for using the ATM. Goodbye.\n");
        break;

        default:
        printf("\n Invalid Choice. Please restart the program and try again.\n");
        return 0;
    }
    
    printf("\n************************\n");
    printf("\n  Transaction Complete  \n");
    printf("\n************************\n");
    return 0;
    }
