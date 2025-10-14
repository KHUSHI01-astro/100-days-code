#include <stdio.h>

int main() {
    int matrix[100][100];
    int n, i, j, flag = 1;

  
    int diag[100], count = 0;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        diag[count++] = matrix[i][i];  
    }

    for (i = 0; i < count; i++) {
        for (j = i + 1; j < count; j++) {
            if (diag[i] == diag[j]) {
                flag = 0;  // Duplicate found
                break;
            }
        }
        if (!flag) break;
    }

    if (flag)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are NOT distinct.\n");

    return 0;
}
