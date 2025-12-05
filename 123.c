#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;

    int chars = 0, words = 0, lines = 0;
    int inWord = 0;

    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Could not open file.");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;

        if (ch == '\n')
            lines++;
      
        if (!isspace(ch) && inWord == 0) {
            inWord = 1;
            words++;
        } else if (isspace(ch)) {
            inWord = 0;
        }
    }

    fclose(fp);

    if (chars > 0 && ch != '\n')
        lines++;

    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
