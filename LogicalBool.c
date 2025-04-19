#include <stdio.h>

int main() {
    int a = 1, b = 0;
    int andResult = a && b;
    int orResult = a || b;
    int notA = !a;

    printf("a AND b: %d\n", andResult);//0
    printf("a OR b: %d\n", orResult);//1
    printf("NOT a: %d\n", notA);
    return 0;
}
