
// Masud Rana
// ID: 2023200010126

#include <stdio.h>

int main() {
    int m, n, p, q, c, d, k, sum = 0;

    printf("Enter Matrix A's row and column: ");
    scanf("%d%d", &m, &n);

    printf("Enter Matrix B's row and column: ");
    scanf("%d%d", &p, &q);

    if (n != p) {
        printf("Matrices with entered orders can't be multiplied with each other.\n");
    } else {
        int first[m][n], second[p][q], multiply[m][q];

        printf("Enter elements of matrix A:\n");

        for (c = 0; c < m; c++) {
            for (d = 0; d < n; d++) {
                scanf("%d", &first[c][d]);
            }
        }

        printf("Enter elements of matrix B:\n");

        for (c = 0; c < p; c++) {
            for (d = 0; d < q; d++) {
                scanf("%d", &second[c][d]);
            }
        }

        for (c = 0; c < m; c++) {
            for (d = 0; d < q; d++) {
                for (k = 0; k < p; k++) {
                    sum = sum + first[c][k] * second[k][d];
                }
                multiply[c][d] = sum;
                sum = 0;
            }
        }

        printf("The Multiplication of two matrices is:\n");

        for (c = 0; c < m; c++) {
            for (d = 0; d < q; d++) {
                printf("%d\t", multiply[c][d]);
            }
            printf("\n");
        }
    }

    return 0;
}
