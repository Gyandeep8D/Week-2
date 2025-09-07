#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;
    int sum = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter the elements of the %dx%d array:\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate sum of all elements
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }

    // Calculate mean
    float mean = (float)sum / (rows * cols);

    printf("Sum of all elements: %d\n", sum);
    printf("Mean of all elements: %.2f\n", mean);

    return 0;
}

