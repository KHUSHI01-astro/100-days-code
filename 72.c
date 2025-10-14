#include <stdio.h>

int main() {
    int rows, cols;
    int matrix[100][100];
    int sum = 0;

    // Input matrix size
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    // Print the sum
    printf("Sum of all elements in the matrix: %d\n", sum);

    return 0;
}
