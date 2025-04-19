#include <stdio.h>

int main() {
    char ch;

    // Unformattxed input: Read a single character
    //printf("Enter a character: ");
    ch = getchar();

    // Unformatted output: Print the character
    //printf("You entered: ");
    putchar(ch);
    putchar('\n'); // Add a newline for better formatting

    return 0;
}
