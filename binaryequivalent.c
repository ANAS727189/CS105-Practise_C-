#include <stdio.h>

int main() {
    int n, bin = 0, remainder, base = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while (n > 0) {
        remainder = n % 2;
        bin += remainder * base;
        n = n / 2;
        base *= 10;
    }

    printf("Binary equivalent is: %d\n", bin);

    return 0;
}

