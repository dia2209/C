#include <stdio.h>

int main() {
    int choice;
    printf("Menu:\n");
    printf("1. Start Game\n");
    printf("2. Load Game\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Starting game...\n");
            break;
        case 2:
            printf("Loading game...\n");
            break;
        case 3:
            printf("Exiting...\n");
            break;
         
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}

