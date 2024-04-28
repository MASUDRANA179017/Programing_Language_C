#include <stdio.h>

int main() {
    int n, i, sum, lowerlimit, upperlimit;

    printf("Input the starting range: ");
    scanf("%d", &lowerlimit);
    printf("Input the ending range: ");
    scanf("%d", &upperlimit);
    printf("The perfect numbers within the given range:\n");

    for (n = lowerlimit; n <= upperlimit; n++) {
        sum = 0;
        for (i = 1; i < n; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }
        if (sum == n) {
            printf("%d\n", n);
        }
    }

    return 0;
}
