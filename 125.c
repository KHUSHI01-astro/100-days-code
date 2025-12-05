#include <stdio.h>

int main() {
    char filename[100];
    char text[1000];

    printf("Enter the filename: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    printf("Enter the text to append: ");
    getchar(); 
    fgets(text, sizeof(text), stdin);

  
    fprintf(file, "%s", text);

    printf("Text successfully appended to %s\n", filename);

    fclose(file);
    return 0;
}
