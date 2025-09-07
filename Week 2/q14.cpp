#include <stdio.h>

#define MAX 10

void readMatrix(int p, int q, int r, int A[MAX][MAX][MAX]) {
    printf("Enter elements of the matrix (%d x %d x %d):\n", p, q, r);
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < r; k++) {
                scanf("%d", &A[i][j][k]);
            }
        }
    }
}

void displayMatrix(int p, int q, int r, int A[MAX][MAX][MAX]) {
    printf("Matrix (%d x %d x %d):\n", p, q, r);
    for (int i = 0; i < p; i++) {
        printf("Slice %d:\n", i + 1);
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < r; k++) {
                printf("%d ", A[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

void addMatrices(int p, int q, int r, int A[MAX][MAX][MAX], int B[MAX][MAX][MAX], int C[MAX][MAX][MAX]) {
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < r; k++) {
                C[i][j][k] = A[i][j][k] + B[i][j][k];
            }
        }
    }
}

void transposeMatrix(int p, int q, int r, int A[MAX][MAX][MAX], int T[MAX][MAX][MAX]) {
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < r; k++) {
                T[i][k][j] = A[i][j][k];  // transpose between q and r
            }
        }
    }
}

void multiplyMatrices(int p, int q, int r, int A[MAX][MAX][MAX], int B[MAX][MAX][MAX], int C[MAX][MAX][MAX]) {
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < r; k++) {
                C[i][j][k] = A[i][j][k] * B[i][j][k];  // element-wise product
            }
        }
    }
}

int main() {
    int p, q, r, choice;
    int A[MAX][MAX][MAX], B[MAX][MAX][MAX], C[MAX][MAX][MAX];

    printf("Enter dimensions (p q r): ");
    scanf("%d %d %d", &p, &q, &r);

    printf("\nEnter Matrix A:\n");
    readMatrix(p, q, r, A);

    printf("\nEnter Matrix B:\n");
    readMatrix(p, q, r, B);

    do {
        printf("\n===== MENU =====\n");
        printf("1. Display Matrices\n");
        printf("2. Sum of Matrices\n");
        printf("3. Transpose of Matrix A\n");
        printf("4. Product of Matrices\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nMatrix A:\n");
                displayMatrix(p, q, r, A);
                printf("\nMatrix B:\n");
                displayMatrix(p, q, r, B);
                break;

            case 2:
                addMatrices(p, q, r, A, B, C);
                printf("\nSum of matrices (A + B):\n");
                displayMatrix(p, q, r, C);
                break;

            case 3:
                transposeMatrix(p, q, r, A, C);
                printf("\nTranspose of Matrix A:\n");
                displayMatrix(p, r, q, C);
                break;

            case 4:
                multiplyMatrices(p, q, r, A, B, C);
                printf("\nProduct of matrices (A * B) [element-wise]:\n");
                displayMatrix(p, q, r, C);
                break;

            case 5:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 5);

    return 0;
}

