#include <stdio.h>

void swap(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n, i;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    float arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    // sort array to easily find second smallest & second largest
    for (i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                float temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nSorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    // find second smallest and second largest
    float *secondSmallest = &arr[1];     // after sorting
    float *secondLargest = &arr[n - 2];

    // interchange using pointers
    swap(secondSmallest, secondLargest);

    printf("\nArray after interchanging 2nd smallest and 2nd largest:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    return 0;
}

