#include <stdio.h>

int main() {
    int a = 10;
    size_t size = sizeof(a);

    printf("Size of int: %zu bytes\n", size);

    int result;
    result = (5, 10, 15, 2, 20,0); // The last value is assigned to result

    printf("Result using comma operator: %d\n", result);
    return 0;
}
