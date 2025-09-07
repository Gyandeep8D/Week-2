#include <stdio.h>

int main() {
    int n, i;
    long long sum_of_squares = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum of squares
    for (i = 0; i < n; i++) {
        sum_of_squares += (long long)arr[i] * arr[i];
    }

    printf("Sum of squares of the elements: %lld\n", sum_of_squares);

    return 0;
}

