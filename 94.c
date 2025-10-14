#include <stdio.h>

int main() {
    char sentence[1000];
    char longestWord[1000] = "";
    char currentWord[1000];
    int i = 0, j = 0, maxLen = 0;

    // Input sentence (including spaces)
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (1) {
        // Reset current word index
        j = 0;

        // Skip leading spaces
        while (sentence[i] == ' ') {
            i++;
        }

        // If end of string, break
        if (sentence[i] == '\0' || sentence[i] == '\n') {
            break;
        }

        // Extract a word until space or end of string
        while (sentence[i] != ' ' && sentence[i] != '\0' && sentence[i] != '\n') {
            currentWord[j++] = sentence[i++];
        }
        currentWord[j] = '\0';

        // Check if current word is longer than max length found so far
        if (j > maxLen) {
            maxLen = j;
            int k = 0;
            // Copy current word to longestWord
            while (currentWord[k] != '\0') {
                longestWord[k] = currentWord[k];
                k++;
            }
            longestWord[k] = '\0';
        }
    }

    printf("Longest word: %s\n", longestWord);

    return 0;
}
