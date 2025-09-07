#include <stdio.h>

int main() {
    int n1, n2, i, j;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    float arr1[n1];
    printf("Enter %d elements for first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%f", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    float arr2[n2];
    printf("Enter %d elements for second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%f", &arr2[i]);
    }

    // merged array
    int total = n1 + n2;
    float merged[total];

    // copy first array
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // copy second array
    for (j = 0; j < n2; j++) {
        merged[n1 + j] = arr2[j];
    }

    // print merged array in reverse
    printf("\nMerged array in reverse order:\n");
    for (i = total - 1; i >= 0; i--) {
        printf("%.2f ", merged[i]);
    }
    printf("\n");

    return 0;
}

