#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 2;
    int result;

    // Precedence Example
    result = a + b * c; // * has higher precedence than +
    printf("Result: %d\n", result); // Output: 20

    // Associativity Example
    result = a - b - c; // - has left-to-right associativity
    printf("Result: %d\n", result); // a = 10, b - 5, c= 2 output=>
    //10-5-2, 5-2 , 3

    // Right-to-Left Associativity
    result = a = b = c; // = has right-to-left associativity
    printf("Result: %d\n", result); //  a= 10, b =5, c= 2
   
   

    //result = a = b = c
    //result = a=2
    //result =2 

    return 0;
}
