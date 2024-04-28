#include <stdio.h>

int main() {
    int rows, rowCount, colCount;

    // Right Triangle Pattern
    printf("Right Triangle Pattern:\n");
    rows = 5;
    for (rowCount = 1; rowCount <= rows*2; rowCount++) {
        if(rowCount%2==1){
            for (colCount = 1; colCount <=rowCount; colCount++) {
                printf("* ");
            }
        }else {
            printf("\n");

        }
    }




    //Left Triangle A and * Pattern
   printf("Left Triangle A and * Pattern:\n");
    rows = 10; // Total number of rows
    for (rowCount = 1; rowCount <= rows; rowCount++) {
        // Check if the row is odd
        if (rowCount % 2 == 1) {
            for (colCount = 1; colCount <= rowCount; colCount++) {
                if (colCount % 2 == 0) { // For even position in an odd row, print 'A'
                    printf("A");
                } else { // For odd position, print '*'
                    printf("*");
                }
            }
        }
        printf("\n");
    }


    printf("\n");

//Left Triangle number
//1
//232
//34543
// Pattern


    printf("Left Triangle number Pattern:\n");
    rows = 5; // Total number of rows
    for(rowCount = 1; rowCount <= rows; rowCount++) {
        // Printing the increasing part of the pattern
        for(colCount = 1; colCount <= rowCount; colCount++) {
            printf("%d", rowCount + colCount - 1);
        }
        // Printing the decreasing part of the pattern
        for(colCount = rowCount - 1; colCount >= 1; colCount--) {
            printf("%d", rowCount + colCount - 1);
        }
        printf("\n");
    }




printf("\n");

//Left Triangle number
//1
//121
//12321
// Pattern
     printf("Left Triangle number Pattern:\n");
    rows = 5; // Total number of rows
    for(rowCount = 1; rowCount <= rows; rowCount++) {
        // First, print the ascending part of the pattern
        for(colCount = 1; colCount <= rowCount; colCount++) {
            printf("%d", colCount);
        }
        // Then, print the descending part of the pattern
        for(colCount = rowCount - 1; colCount >= 1; colCount--) {
            printf("%d", colCount);
        }
        printf("\n");
    }



//Left Triangle number
//1
//12
//123
// Pattern
     printf("Left Triangle number Pattern:\n");
    rows = 5; // Total number of rows
    for(rowCount = 1; rowCount <= rows; rowCount++) {
        for(colCount = 1; colCount <= rowCount; colCount++) {
            printf("%d", colCount);
        }
        printf("\n");
    }


    // Print + pattern
    printf("+ Pattern:\n");
    rows = 9; // Total number of rows
      for (rowCount = 1; rowCount <= rows; rowCount++) {
        for (colCount = 1; colCount <= rows; colCount++) {
            // Print '+' for the middle row and column, and for the rest, print spaces
            if (rowCount == (rows / 2) + 1 || colCount == (rows / 2) + 1) {
                printf("+ ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }




    // Diamond Pattern
    printf("Diamond Pattern:\n");
    rows = 5;
    for (rowCount = 1; rowCount <= rows * 2 - 1; rowCount++) {
        for (colCount = 1; colCount <= rows * 2 - 1; colCount++) {
            if (rowCount <= rows) {
                if (colCount >= rows - rowCount + 1 && colCount <= rows + rowCount - 1)
                    printf("* ");
                else
                    printf("  ");
            } else {
                if (colCount >= rowCount - rows + 1 && colCount <= (rows * 2 - 1) - (rowCount - rows))
                    printf("* ");
                else
                    printf("  ");
            }
        }
        printf("\n");
    }






    return 0;
}
