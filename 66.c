#include <stdio.h>

int main() {
    int arr[100], size, i, pos, num;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &size);

    printf("Enter %d sorted elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
  
    printf("Enter the element to insert: ");
    scanf("%d", &num);

    for (pos = 0; pos < size; pos++) {
        if (arr[pos] > num) {
            break;
        }
    }

    for (i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }


    arr[pos] = num;
    size++; 

    printf("Array after insertion:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
