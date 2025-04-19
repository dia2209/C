#include <stdio.h>

int main() {
    int x = 5, y = 10;
    int isEqual = (x != y);
    int isLess = (x < y);
    int isGreaterOrEqual = (x >= y);

    printf("x != y: %d\n", isEqual);//True
    printf("x < y: %d\n", isLess); //true
    printf("x >= y: %d\n", isGreaterOrEqual); //False
    return 0;
}
