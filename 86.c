#include <stdio.h>

int main() {
    char str[1000];
    int length = 0, i, flag = 1;


    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            flag = 0;  // Not palindrome
            break;
        }
    }

  
    if (flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
