#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int freq[n];  

    for (int i = 0; i < n; i++) {
        freq[i] = 0;
    }

    int repeated = -1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        freq[arr[i]]++;    

        if (freq[arr[i]] > 1) {  
            repeated = arr[i];
        }
    }

    printf("%d", repeated);

    return 0;
}
