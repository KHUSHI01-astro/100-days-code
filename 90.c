#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Toggle case for each character
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert lowercase to uppercase
            str[i] = str[i] - ('a' - 'A');
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            // Convert uppercase to lowercase
            str[i] = str[i] + ('a' - 'A');
        }
        i++;
    }

    // Print the toggled string
    printf("Toggled case string: %s", str);

    return 0;
}
