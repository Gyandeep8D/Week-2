#include <stdio.h>

int main() {
    int rows, cols, i, j, count = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nArray:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
            if (arr[i][j] != 0) {
                count++;
            }
        }
        printf("\n");
    }

    printf("\nTotal number of nonzero elements = %d\n", count);

    return 0;
}

