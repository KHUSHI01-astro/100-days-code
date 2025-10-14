#include <stdio.h>

int main() {
    int arr[100], size;
    int i;
    int largest, secondLargest;

    printf("Enter number of elements in the array: ");
    scanf("%d", &size);

    if (size < 2) {
        printf("Array should have at least two elements.\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    if (arr[0] > arr[1]) {
        largest = arr[0];
        secondLargest = arr[1];
    } else {
        largest = arr[1];
        secondLargest = arr[0];
    }

    for (i = 2; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (largest == secondLargest) {
        printf("There is no distinct second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", secondLargest);
    }

    return 0;
}
