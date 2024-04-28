// Masud Rana
// ID: 2023200010126
// Programming Language - I lab


#include <stdio.h>

void swap(int *a, int *b, int *c, int *d) {
    if (a != b && a != c && a != d && b != c && b != d && c != d) {
        *a = *a ^ *b ^ *c ^ *d;
        *b = *a ^ *b ^ *c ^ *d;
        *c = *a ^ *b ^ *c ^ *d;
        *d = *a ^ *b ^ *c ^ *d;
        *a = *a ^ *b ^ *c ^ *d;
    }
}

int main() {
    int num1, num2, num3, num4;

    printf("Enter four numbers to swap:\n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    printf("Before swapping: num1 = %d, num2 = %d, num3 = %d, num4 = %d\n", num1, num2, num3, num4);

    swap(&num1, &num2, &num3, &num4);

    printf("After swapping: num1 = %d, num2 = %d, num3 = %d, num4 = %d\n", num1, num2, num3, num4);

    return 0;
}
