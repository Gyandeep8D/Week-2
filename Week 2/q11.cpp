#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int even[100], odd[100];  // arrays to store even & odd elements
    int eCount = 0, oCount = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter elements of the array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);

            // classify element as even or odd
            if (arr[i][j] % 2 == 0) {
                even[eCount++] = arr[i][j];
            } else {
                odd[oCount++] = arr[i][j];
            }
        }
    }

    // Print original array
    printf("\nOriginal Array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Print even elements
    printf("\nEven elements array:\n");
    for (i = 0; i < eCount; i++) {
        printf("%d ", even[i]);
    }

    // Print odd elements
    printf("\n\nOdd elements array:\n");
    for (i = 0; i < oCount; i++) {
        printf("%d ", odd[i]);
    }

    printf("\n");

    return 0;
}

