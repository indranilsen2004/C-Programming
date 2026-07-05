#include <stdio.h>

int main() {
    int n, temp, rem, reverse = 0, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0) {
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp = temp / 10;
    }

    sum = n + reverse;

    printf("Original Number = %d\n", n);
    printf("Reverse Number = %d\n", reverse);
    printf("Sum = %d\n", sum);

    return 0;
}