#include <stdio.h>
#include <string.h>

int isSubstring(char str1[], char str2[]) {
    int len1 = 0, len2 = 0, i, j;

    while (str1[len1] != '\0' && str1[len1] != '\n') len1++;
    while (str2[len2] != '\0' && str2[len2] != '\n') len2++;

    if (len2 > len1) return 0;

    for (i = 0; i <= len1 - len2; i++) {
        for (j = 0; j < len2; j++) {
            if (str1[i + j] != str2[j]) break;
        }
        if (j == len2) return 1; 
    }
    return 0;
}

int main() {
    char str1[1000], str2[1000];
    char temp[2000];  

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    int len1 = 0, len2 = 0;


    while (str1[len1] != '\0' && str1[len1] != '\n') len1++;
    while (str2[len2] != '\0' && str2[len2] != '\n') len2++;

    if (len1 != len2) {
        printf("Strings are NOT rotations of each other.\n");
        return 0;
    }

  
    for (int i = 0; i < len1; i++) {
        temp[i] = str1[i];
    }
    for (int i = 0; i < len1; i++) {
        temp[len1 + i] = str1[i];
    }
    temp[len1 * 2] = '\0';

    if (isSubstring(temp, str2)) {
        printf("Strings are rotations of each other.\n");
    } else {
        printf("Strings are NOT rotations of each other.\n");
    }

    return 0;
}
