#include <stdio.h>
#include <string.h>

int main() {
    char name[1000];
    int i = 0, len;
    
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    
    len = strlen(name);
    if (name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }
  
    int lastSpace = -1;
    for (i = 0; i < len; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }
  
    if (name[0] != ' ') {
        printf("%c. ", name[0]);
    }


    for (i = 0; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            printf("%c. ", name[i + 1]);
        }
    }

  
    if (lastSpace != -1 && lastSpace + 1 < len) {
        printf("%s\n", &name[lastSpace + 1]);
    } else {
        
        printf("\n");
    }

    return 0;
}
