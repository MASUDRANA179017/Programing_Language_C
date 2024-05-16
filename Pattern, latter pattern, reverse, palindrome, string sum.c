// Lab Assignment piramid and Latter piramid
// Masud rana
// ID: 2023200010126
#include <stdio.h>

int main() {
    int i, j, k, a, b, c;
    char letter;
    for(i=1; i<=5; i++){
                for(i=1; i<=5; i++){
                    for(k=1; k<=i; k++){
                    printf("* ");
                }
                    printf("\n");
                }

            }


        for(i=1; i<=5; i++){
            for(j=i; j<=5; j++){
                printf("  ");
            }
            for(k=1; k<2*i; k++){
                    printf("* ");
                }
            printf("\n");
        }
    letter = 'A';
    for(a=1; a<=5; a++){
            for(b=a; b<=5; b++){
                printf("  ");
            }
            for(c=1; c<2*a; c++){
                    printf("%c ", letter);
                    letter++;
                }
            printf("\n");
    }
    return 0;
}







//number 03
#include <stdio.h>
#include <ctype.h>

int main() {
    char strName[100];
    printf("Enter a string: ");
    scanf("%s", strName);

    int sumName = 0;
    for (int i = 0; strName[i] != '\0'; i++) {
            printf("for i is%d,", i);
        if (isdigit(strName[i])) {
            sumName += strName[i] - '0';
            printf("%d\n", sumName);
        }
    }
    printf("%d\n", sumName);
    return 0;
}





// number 01
#include <stdio.h>
#include <string.h>

int main() {
    char strName[100];
    int i;
    printf("Enter a string: ");
    scanf("%s", strName);

    // string livery strlen pedicure function
    int lenth = strlen(strName)-1;
    printf("Reverse of the string: ");
    for(i = lenth; i >= 0; i--) {
        printf("%c", strName[i]);
    }
    return 0;
}






// number 02

#include <stdio.h>
#include <string.h>

int main() {
    char strName[100];
    int i;
    printf("Enter the string: ");
    scanf("%s", strName);

    int lenth = strlen(strName)-1;

    int isPalindrome = 1;

    for (i = 0; i < lenth / 2; i++) {
        if (strName[i] != strName[lenth - i]) {
            printf("%s is not a palindrome string\n", strName);
            break;
        }else{
            printf("%s is a palindrome string\n", strName);
        }
    }

    return 0;
}




