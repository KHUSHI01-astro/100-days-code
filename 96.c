#include <stdio.h>

void reverseWord(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[1000];
    int i = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (sentence[i] != '\0' && sentence[i] != '\n') {
        if (sentence[i] == ' ') {
            reverseWord(sentence, start, i - 1);
            start = i + 1;
        }
        i++;
    }

    reverseWord(sentence, start, i - 1);

    printf("Sentence with reversed words: %s\n", sentence);

    return 0;
}
