#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    // Input string
    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);  // Reads the full line including spaces

    // Convert to uppercase
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');  // or str[i] -= 32;
        }
        i++;
    }

    // Output result
    printf("Uppercase string: %s", str);

    return 0;
}
