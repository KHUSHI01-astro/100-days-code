#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Reads input including spaces

    // Count characters until null terminator '\0' or newline '\n'
    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }

    // Print result
    printf("Number of characters in the string: %d\n", count);

    return 0;
}
