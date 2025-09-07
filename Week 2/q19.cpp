#include <stdio.h>

// Function to check if a matrix is lower triangular
int isLowerTriangular(int a[50][50], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i][j] != 0) {
                return 0; // not lower triangular
            }
        }
    }
    return 1; // lower triangular
}

int main() {
    int n;
    int a[50][50];

    printf("Enter size of square matrix (n): ");
    scanf("%d", &n);

    printf("Enter elements of %d x %d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMatrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    if (isLowerTriangular(a, n))
        printf("\nThe matrix is a LOWER TRIANGULAR matrix.\n");
    else
        printf("\nThe matrix is NOT a lower triangular matrix.\n");

    return 0;
}

