//Name: Diya Manandhar   Class:BCSIT-A
//25.Write a function to count the number of words in a given string

#include <stdio.h>

int count_words(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0')) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Reads input with spaces
    printf("Number of words: %d\n", count_words(str));
    return 0;
}
