#include <stdio.h>

int main() {
    char filename[100];
    char ch;

    printf("Enter the filename: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: File '%s' does not exist.\n", filename);
        return 1;
    }

    printf("Contents of '%s':\n", filename);

    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
    return 0;
}
