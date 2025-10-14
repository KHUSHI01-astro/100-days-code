#include <stdio.h>

int main() {
    int rows, cols;
    int matrix[100][100];
    int rowSum[100] = {0};  

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
        rowSum[i] = sum; 
    }

    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d sum = %d\n", i, rowSum[i]);
    }

    return 0;
}
