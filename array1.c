/*WAP to practice the 1d array.
1.Check whether the elements of array is odd or even,
2.If evwn, return the even array and terminate the program.
3.If odd, calculate the mid piint of array elements, and print the midpoint
4.If the midpoint of the array elements is 8, then print "8 array" else "not 8 array"
5.Test with both odd and even array types*/

#include<stdio.h>
int main(){
    int arr[6]={10,20,30,40,50,60};  
    int n = sizeof(arr); 

    printf("Checking whether the array elements is odd or even:\n");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("Element %d (%d) is Even\n", i + 1, arr[i]);
        } else {
            printf("Element %d (%d) is Odd\n", i + 1, arr[i]);
        }
    }

    return 0;
}

 