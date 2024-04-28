#include <stdio.h>
#include <stdbool.h>

void printPrimes(int limit) {
    bool isPrime[limit+1];
    for (int i = 2; i <= limit; i++)
        isPrime[i] = true;

    for (int p = 2; p * p <= limit; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= limit; i += p)
                isPrime[i] = false;
        }
    }

    printf("Prime numbers up to %d are: ", limit);
    for (int p = 2; p <= limit; p++) {
        if (isPrime[p])
            printf("%d ", p);
    }
}

int main() {
    int limit;
    printf("Enter the limit to find prime numbers up to: ");
    scanf("%d", &limit);

    printPrimes(limit);
    return 0;
}
