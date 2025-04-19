#include <stdio.h>

int main() {
    char ch;

    // Prompt the user to enter a character
    printf("Enter a character: ");

    // Read a single character using getchar()
    ch = getchar();

    // Output the character using putchar()
    printf("You entered: ");
    putchar(ch);
    putchar('\n'); // Print a newline for better formatting

    return 0;
}
