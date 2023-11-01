#include <stdio.h>

void primeFactorization(int n) {
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Prime factorization is not possible for this input.\n");
    } else {
        printf("Prime factorization of %d is: ", num);
        primeFactorization(num);
        printf("\n");
    }

    return 0;
}
