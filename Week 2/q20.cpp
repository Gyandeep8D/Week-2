#include <stdio.h>

// Function to check if a matrix is symmetric
int isSymmetric(int a[50][50], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                return 0; // not symmetric
            }
        }
    }
    return 1; // symmetric
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

    if (isSymmetric(a, n))
        printf("\nThe matrix is SYMMETRIC.\n");
    else
        printf("\nThe matrix is NOT SYMMETRIC.\n");

    return 0;
}

