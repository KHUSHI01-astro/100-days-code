#include <stdio.h>

// Function to convert uppercase to lowercase
char toLower(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + ('a' - 'A');
    }
    return ch;
}

int main() {
    char str1[1000], str2[1000];
    int freq1[26] = {0}, freq2[26] = {0};
    int i = 0;

    // Input two strings
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Count frequency of letters in str1 (ignore non-alphabet)
    while (str1[i] != '\0' && str1[i] != '\n') {
        char ch = toLower(str1[i]);
        if (ch >= 'a' && ch <= 'z') {
            freq1[ch - 'a']++;
        }
        i++;
    }

    i = 0;
    // Count frequency of letters in str2
    while (str2[i] != '\0' && str2[i] != '\n') {
        char ch = toLower(str2[i]);
        if (ch >= 'a' && ch <= 'z') {
            freq2[ch - 'a']++;
        }
        i++;
    }

    // Compare frequency arrays
    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            printf("The strings are NOT anagrams.\n");
            return 0;
        }
    }

    printf("The strings are anagrams.\n");
    return 0;
}
