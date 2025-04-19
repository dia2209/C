#include <stdio.h>

int main() {
    char str[5];

    // Unformatted input: Read a string (use fgets to avoid buffer overflow)
    printf("Enter a string: ");//
    fgets(str, sizeof(str), stdin); // Read the string with a newline

    // Unformatted output: Print the string
    printf("You entered: ");
    puts(str);

    return 0;
}

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
