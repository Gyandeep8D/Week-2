#include <stdio.h>

int main() {
    int n, i, j, sum = 0;

    printf("Enter the size of square matrix (n): ");
    scanf("%d", &n);

    int arr[n][n];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMatrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
            if (i == j) {   // main diagonal condition
                sum += arr[i][j];
            }
        }
        printf("\n");
    }

    printf("\nSum of diagonal elements = %d\n", sum);

    return 0;
}

