#include <stdio.h>

#define SIZE 3

int main() {
    int matrix1[SIZE][SIZE], matrix2[SIZE][SIZE], sum[SIZE][SIZE];
    int i, j;

    printf("Enter elements of first 3x3 matrix:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            scanf("%d", (*(matrix1 + i) + j));
        }
    }

    printf("Enter elements of second 3x3 matrix:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            scanf("%d", (*(matrix2 + i) + j));
        }
    }

    // Add matrices using pointers
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            *(*(sum + i) + j) = *(*(matrix1 + i) + j) + *(*(matrix2 + i) + j);
        }
    }

    printf("Sum of the two matrices:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d ", *(*(sum + i) + j));
        }
        printf("\n");
    }

    return 0;
}

