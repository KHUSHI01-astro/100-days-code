#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid;  // Element found at index mid
        else if (arr[mid] < target)
            low = mid + 1;  // Search in right half
        else
            high = mid - 1; // Search in left half
    }

    return -1;  // Element not found
}

int main() {
    int arr[100], size, target;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &size);

    printf("Enter %d sorted elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, size, target);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found in the array\n");

    return 0;
}
