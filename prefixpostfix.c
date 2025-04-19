#include <stdio.h>

int main() {
    int a = 5, b = 5;
    int prefixIncrement = ++a; //6
    int postfixIncrement = b++; //6

    printf("Prefix Increment: %d\n", prefixIncrement);
    printf("Postfix Increment (before increment): %d\n", postfixIncrement);
    printf("Value of b after Postfix Increment: %d\n", b);
    return 0;
}
