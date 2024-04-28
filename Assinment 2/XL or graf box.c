#include <stdio.h>

int main() {
    int rows, R, C;


    // UDERSTAN WAY HOW TO MAKE FORMULA
    printf("row r col er khela hobe:\n");
    rows = 5;
    for (R = 1; R <= 10; R++) {
        for (C = 1; C <= 10; C++) {
            // printf("R%d,C%d",R,C);
            // printf("Y ");


            // use condition
                if (R <= rows) {
                    if (C >= rows - R + 1 && C <= rows + R - 1){
                        printf("%d ",C);
                    }else{
                        printf("  ");
                    }
                } else {
                    if (C >= R - rows + 1 && C <= (rows * 2 - 1) - (R - rows)){
                        printf("* ");
                    }else{
                        printf("  ");
                    }
                }

        }
        printf("\n");
    }
    printf("\n");

    return 0;
}

/*

// Right Triangle Pattern



                if (R <= rows) {
                if (C >= rows - R + 1 && C <= rows + R - 1)
                    printf("* ");
                else
                    printf("  ");
                } else {
                    if (C >= R - rows + 1 && C <= (rows * 2 - 1) - (R - rows))
                        printf("* ");
                    else
                        printf("  ");
                }
*/
