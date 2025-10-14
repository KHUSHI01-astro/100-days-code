#include <stdio.h>

int main() {
    char date[20];
    char day[3], month[3], year[5];

    printf("Enter date in dd/04/yyyy format: ");
    scanf("%2s/%2s/%4s", day, month, year);  // Read each part separately

  
    if (month[0] == '0' && month[1] == '4') {
        printf("Formatted date: %s-Apr-%s\n", day, year);
    } else {
        printf("This program only supports conversion for the month '04'.\n");
    }

    return 0;
}
