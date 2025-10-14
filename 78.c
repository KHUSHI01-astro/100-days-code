#include <stdio.h>

int main() {
    int matrix[100][100];
    int n, i, j, sum = 0;

    // Input the size of the square matrix
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of main diagonal elements (where i == j)
    for (i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    // Output the sum
    printf("Sum of main diagonal elements: %d\n", sum);

    return 0;
}
