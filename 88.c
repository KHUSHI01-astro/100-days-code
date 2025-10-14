#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Replace spaces with hyphens
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ') {
            str[i] = '-';
        }
        i++;
    }

    // Output the modified string
    printf("Modified string: %s", str);

    return 0;
}
