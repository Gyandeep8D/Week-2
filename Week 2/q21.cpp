#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int X = 2, Y = 3;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int A[50][50], B[50][50], Result[50][50];

    printf("\nEnter elements of Matrix A (%d x %d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter elements of Matrix B (%d x %d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Compute Result = X*A + Y*B
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            Result[i][j] = X * A[i][j] + Y * B[i][j];
        }
    }

    // Print Result
    printf("\nResultant Matrix (2A + 3B):\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", Result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

