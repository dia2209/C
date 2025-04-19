//Develop a C program for a smart home system that controls lights, heating, and security based on time and presence of people. If it is nighttime and no one is home, turn on security mode. If it is daytime and someone is home, turn off security mode and adjust heating and lighting accordingly.

#include<stdio.h>

int main(){
    char timeOfday;
    int peoplesPresence;
    int Day;
    int Night;

    printf("Enter the time(Enter 1 for DAY and 0 for NIGHT): ");
    printf("Is there anyone's presence in the house?(Enter 1 for YES and 0 for NO): ");
    scanf("%s", &timeOfday);
    scanf("%d",&peoplesPresence);
    
    switch(timeOfday){
        case 1:
        if(timeOfday==1){
           if(peoplesPresence==0){
             printf("Security mode has been turned on");//securityMode=1;
             printf("Lighting system has been turned off");//Lights=0;
             printf("Heating system has been turned off");//Heating=0;
        }
        else{
            printf("Security mode has been turned off");//securityMode=0;
             printf("Lighting system has been turned off");//Lights=0;
             printf("Heating system has been turned off");//Heating=0;
        }
        }
        break;
        case 2:
        if(timeOfday==0){
           if(peoplesPresence==0){
             printf("Security mode has been turned on");//securityMode=1;
             printf("Lighting system has been turned off");//Lights=0;
             printf("Heating system has been turned off");//Heating=0;
        }
        else{
            printf("Security mode has been turned off");//securityMode=0;
             printf("Lighting system has been turned on");//Lights=1;
             printf("Heating system has been turned on");//Heating=1;
        }
        }
        break;
        default:
         printf("\n Invalid Enrty. Please try again.\n");
    }
    return 0;
}
        
    
    

    
