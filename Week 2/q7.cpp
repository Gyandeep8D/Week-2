#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    printf("Enter the size of the square matrix: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int matrix[n][n];

    printf("Enter the elements of the %dx%d matrix:\n", n, n);
    for (i = 0; i < n * n; i++) {
        if (scanf("%d", ((int *)matrix) + i) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    int *ptr = (int *)matrix;
    for (i = 0; i < n; i++) {
        sum += *(ptr + i * n + i);
    }

    printf("Sum of main diagonal elements: %d\n", sum);

    return 0;
}

