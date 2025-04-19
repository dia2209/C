#include <stdio.h>

int main() {
    // Predefined array
    int arr[] = {10, 20, 30, 40}; // Change this array to test with odd/even arrays
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Check if all elements are even
    int allEven = 1; // Flag to check if all elements are even
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            allEven = 0; // If an odd number is found, set the flag to 0
            break;
        }
    }

    if (allEven) {
        // Case 2: If all elements are even, return the even array and terminate
        printf("Even Array: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\nProgram terminated as the array is even.\n");
        return 0; // Terminate the program
    } else {
        // Case 3: If not all elements are even, calculate the midpoint
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        int midpoint = sum / n; // Calculate the average of array elements
        printf("Midpoint of the array elements: %d\n", midpoint);

        // Case 4: Check if the midpoint is 8
        if (midpoint == 8) {
            printf("8 Array\n");
        } else {
            printf("Not 8 Array\n");
        }
    }

    return 0;
}
