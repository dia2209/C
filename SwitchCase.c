#include<stdio.h>

int main() {
    int timeOfday;       // 1 for DAY, 2 for NIGHT
    int peoplesPresence; // 1 for YES, 0 for NO

    // Prompt the user for input
    printf("Enter the time (Enter 1 for DAY and 2 for NIGHT): ");
    scanf("%d", &timeOfday);

    printf("Is there anyone's presence in the house? (Enter 1 for YES and 0 for NO): ");
    scanf("%d", &peoplesPresence);

    // Switch case to handle time of day
    switch (timeOfday) {
        case 1: // DAY
            if (peoplesPresence == 0) {
                printf("Security mode has been turned on\n");  // securityMode = 1
                printf("Lighting system has been turned off\n"); // Lights = 0
                printf("Heating system has been turned off\n");  // Heating = 0
            } else {
                printf("Security mode has been turned off\n");  // securityMode = 0
                printf("Lighting system has been turned off\n"); // Lights = 0
                printf("Heating system has been turned off\n");  // Heating = 0
            }
            break;

        case 2: // NIGHT
            if (peoplesPresence == 0) {
                printf("Security mode has been turned on\n");  // securityMode = 1
                printf("Lighting system has been turned off\n"); // Lights = 0
                printf("Heating system has been turned off\n");  // Heating = 0
            } else {
                printf("Security mode has been turned off\n");  // securityMode = 0
                printf("Lighting system has been turned on\n");  // Lights = 1
                printf("Heating system has been turned on\n");  // Heating = 1
            }
            break;

        default: // Invalid entry
            printf("Invalid entry. Please enter 1 for DAY or 2 for NIGHT.\n");
    }

    return 0;
}

