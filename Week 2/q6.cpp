#include <stdio.h>

#define MAX 100

void readSquareMatrix(int n, int matrix[MAX][MAX]) {
    printf("Enter elements of the %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displaySquareMatrix(int n, int matrix[MAX][MAX]) {
    printf("The %dx%d matrix is:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    int matrix[MAX][MAX];

    printf("Enter the size of the square matrix (max %d): ", MAX);
    scanf("%d", &n);

    if (n > MAX || n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    readSquareMatrix(n, matrix);
    displaySquareMatrix(n, matrix);

    return 0;
}


