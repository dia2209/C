#include <stdio.h>

int main() {
    int arr[] = {10, 20, 8, 40, 50};  // Change this for different test cases
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int sum = 0, allEven = 1;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) allEven = 0;  // Check for odd numbers
        sum += arr[i];
    }

    if (allEven) {
        printf("even array\n");
        return 0;
    }

    int midpoint = sum / size;
    printf("Midpoint: %d\n", midpoint);

    if (midpoint == 8) 
        printf("8 array\n");
    else 
        printf("not 8 array\n");

    return 0;
}
