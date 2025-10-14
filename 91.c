#include <stdio.h>

int isVowel(char ch) {
    // Check if the character is a vowel (case-insensitive)
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        return 1;
    }
    return 0;
}

int main() {
    char str[1000];
    int i = 0, j = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove vowels by copying only non-vowels
    while (str[i] != '\0' && str[i] != '\n') {
        if (!isVowel(str[i])) {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';  // Null terminate the modified string

    // Output string without vowels
    printf("String after removing vowels: %s\n", str);

    return 0;
}
