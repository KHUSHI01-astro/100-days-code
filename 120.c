#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];

    fgets(s, sizeof(s), stdin);

    int i = 0;

    while (s[i] == ' ') {
        i++;
    }

    if (s[i] != '\0') {
        s[i] = toupper(s[i]);
        i++;
    }

    while (s[i] != '\0') {
        s[i] = tolower(s[i]);
        i++;
    }

    printf("%s", s);

    return 0;
}
