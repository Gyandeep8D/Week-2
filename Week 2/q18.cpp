#include <stdio.h>

// Function to check if a matrix is upper triangular
int isUpperTriangular(int a[50][50], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i][j] != 0) {
                return 0; // not upper triangular
            }
        }
    }
    return 1; // upper triangular
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

    if (isUpperTriangular(a, n))
        printf("\nThe matrix is an UPPER TRIANGULAR matrix.\n");
    else
        printf("\nThe matrix is NOT an upper triangular matrix.\n");

    return 0;
}
