#include <stdio.h>

int main() {
    int n, pos;
    float arr[50], num;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d floating point numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    printf("Enter the number to insert: ");
    scanf("%f", &num);

    printf("Enter the position (0 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert new number
    arr[pos] = num;
    n++;  // array size increases

    printf("\nUpdated array:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    return 0;
}

