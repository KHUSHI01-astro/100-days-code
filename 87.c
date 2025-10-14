#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;
    int spaces = 0, digits = 0, special = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Iterate over each character until null terminator or newline
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ') {
            spaces++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            // Do nothing for alphabets
        } else {
            special++;
        }
        i++;
    }

    // Print the counts
    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}
