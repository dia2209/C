/*ATM Machine Simulation Problem Statement

Problem:
Design a simple ATM machine simulation program in C. The program should perform the following tasks:

PIN Verification:
The user must enter the correct PIN (default: 1234) to access the ATM functionalities.
If the entered PIN is incorrect, display a message and terminate the program.
ATM Menu: After successful PIN verification, display the following menu:
ATM Menu:

1. Check Balance

2. Withdraw Money

3. Deposit Money

4. Exit

Based on the user’s choice, perform the corresponding operation.
Functionalities:
Check Balance: Display the current account balance.
Withdraw Money: Allow the user to enter an amount to withdraw. Ensure:
The withdrawal amount doesn’t exceed the current balance.
The entered amount is positive.
Update the balance after a successful withdrawal.
Deposit Money: Allow the user to enter an amount to deposit. Ensure:
The deposit amount doesn’t exceed a daily limit of $5000.
The entered amount is positive.
Update the balance after a successful deposit.
Exit: Terminate the program.
Validation Rules:
For withdrawal and deposit, check the entered amount for validity (positive values only).
Display appropriate messages for invalid inputs or unsuccessful transactions.
Assumptions:
The initial balance in the account is $1000.
There are no loops; the program should execute one operation and then terminate.*/

#include <stdio.h>

int main() {
    // Variables for PIN, balance, user choice, and transaction amount
    int pin = 1234, enteredPin;
    int balance = 1000;
    int choice;
    int amount;

    // Step 1: PIN Verification
    printf("Welcome to the ATM!\n");
    printf("Please enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("Incorrect PIN. Access Denied.\n");
        return 0; // Exit program if PIN is incorrect
    }

    // Step 2: Display ATM Menu
    printf("\nATM Menu:\n");
    printf("1. Check Balance\n");
    printf("2. Withdraw Money\n");
    printf("3. Deposit Money\n");
    printf("4. Exit\n");
    printf("Please enter your choice (1-4): ");
    scanf("%d", &choice);

    // Step 3: Process User Choice
    switch (choice) {
        case 1: // Check Balance
            printf("\nYour current balance is: $%d\n", balance);
            break;

        case 2: // Withdraw Money
            printf("\nEnter the amount to withdraw: ");
            scanf("%d", &amount);

            // Validate withdrawal amount
            if (amount <= 0) {
                printf("Invalid amount. Please enter a positive value.\n");
            } else if (amount > balance) {
                printf("Insufficient balance. You cannot withdraw more than $%d.\n", balance);
            } else {
                balance -= amount; // Deduct the amount from balance
                printf("Transaction successful! You have withdrawn $%d.\n", amount);
                printf("Your new balance is: $%d\n", balance);
            }
            break;

        case 3: // Deposit Money
            printf("\nEnter the amount to deposit: ");
            scanf("%d", &amount);

            // Validate deposit amount
            if (amount <= 0) {
                printf("Invalid amount. Please enter a positive value.\n");
            } else if (amount > 5000) {
                printf("Deposit limit exceeded. You can deposit up to $5000 per day.\n");
            } else {
                balance += amount; // Add the amount to balance
                printf("Transaction successful! You have deposited $%d.\n", amount);
                printf("Your new balance is: $%d\n", balance);
            }
            break;

        case 4: // Exit
            printf("\nThank you for using the ATM. Goodbye!\n");
            break;

        default: // Handle invalid menu choices
            printf("\nInvalid choice. Please restart the program and select a valid option.\n");
    }

    return 0; // End of program
}

