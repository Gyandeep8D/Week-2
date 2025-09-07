#include <stdio.h>

int main() {
    int n, i, j;
    long long product = 1;  // use long long for larger results

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMatrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // compute product of elements above the main diagonal
    for (i = 0; i < n - 1; i++) {
        product *= matrix[i][i + 1];
    }

    printf("\nProduct of elements above main diagonal = %lld\n", product);

    return 0;
}

