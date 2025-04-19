//Name: Diya Manandhar   Class:BCSIT-A

//2.Write a C program to find the largest and smallest element in an array.

#include<stdio.h>
int main(){
    int N;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&N);

    int arr[N];
    printf("Enter %d number for the array: ",N);
    

    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    int max=arr[0];
    int min=arr[0];

    for(int i=1;i<N;i++){//1 because 0 is already max and min
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
       
    printf("The largest element is %d\n",max);
    printf("The smallest element is %d\n",min);
    return 0;
    }
    

