#include <stdlib.h>

int main() {
    long long number;
    int digitCount[10] = {0};  // Array to count digits 0-9
    int digit, maxDigit = 0, maxCount = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &number);

    number = llabs(number);  

    while (number > 0) {
        digit = number % 10;
        digitCount[digit]++;
        number /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > maxCount) {
            maxCount = digitCount[i];
            maxDigit = i;
        }
    }

    printf("The digit that occurs the most is: %d (appears %d times)\n", maxDigit, maxCount);

    return 0;
}
