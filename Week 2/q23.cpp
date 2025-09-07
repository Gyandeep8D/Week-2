#include <stdio.h>

int main() {
    long num;
    int digits[20], n = 0;

    printf("Enter a number: ");
    scanf("%ld", &num);

    long temp = num;

    // Extract digits from end
    while (temp > 0) {
        digits[n] = temp % 10;  // store last digit
        temp /= 10;             // remove last digit
        n++;
    }

    printf("\nThe number %ld in digits is:\n", num);

    // Digits are stored in reverse, so print backwards
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", digits[i]);
    }

    printf("\nTotal digits: %d\n", n);

    return 0;
}

