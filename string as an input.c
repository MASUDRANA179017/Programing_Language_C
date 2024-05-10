
//number 03
#include <stdio.h>
#include <ctype.h>

int main() {
    char strName[100];
    printf("Enter a string: ");
    scanf("%s", strName);

    int sum = 0;
    for (int i = 0; strName[i] != '\0'; i++) {
            printf("for i is%d,", i);
        if (isdigit(strName[i])) {
            sum += strName[i] - '0';
            printf("%d\n", sumName);
        }
    }
    printf("%d\n", sum);
    return 0;
}


/*


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



*/
