#include <stdio.h>

int main() {
    char src[100], dest[100];

    printf("Enter source file name: ");
    scanf("%s", src);

    printf("Enter destination file name: ");
    scanf("%s", dest);

    FILE *fs = fopen(src, "r");
    FILE *fd = fopen(dest, "w");  

    if (fs == NULL) {
        printf("Error: Cannot open source file.\n");
        return 1;
    }

    char ch;

    while ((ch = fgetc(fs)) != EOF) {
        fputc(ch, fd);
    }

    printf("File copied successfully!\n);

fclose(fs);

fclose(fd);
