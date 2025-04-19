#include<stdio.h>

int main(){
    int n;
    //Asking for the size of the use of array
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    //Declaring the array
    int arr[n];
    //Taking input from the user
    printf("Enter %d elements for the array:\n",n);
    for(int i=0;i<n;i++){
        printf("Element:%d: ",i+1);
        scanf("%d",&arr[i]);
    }
    //Displaying the array
    printf("\nThe elemenfs of the array are:\n");
    for(int i=0;i<n;i++){
        printf("Element %d: %d\n",i+1,arr[i]);
    }
   return 0;
}