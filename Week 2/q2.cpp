#include <stdio.h>

int main() {
    int arr[100];
    int i, j;

    // Input 100 integers
    printf("Enter 100 integers:\n");
    for (i = 0; i < 100; i++) {
    	printf("Number %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Pairs of elements whose sum is 50:\n");
    // Check all pairs
    for (i = 0; i < 99; i++) {
        for (j = i + 1; j < 100; j++) {
            if (arr[i] + arr[j] == 50) {
                printf("(%d, %d) at indices (%d, %d)\n", arr[i], arr[j], i, j);
            }
        }
    }

    return 0;
}
