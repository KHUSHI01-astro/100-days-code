#include <stdio.h>

int main() {
    char str[1000], ch;
    int i = 0, count = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Input character to count
    printf("Enter the character to find frequency of: ");
    scanf("%c", &ch);

    // Count frequency of ch in str
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }

    // Output result
    printf("Frequency of '%c' in the string: %d\n", ch, count);

    return 0;
}
