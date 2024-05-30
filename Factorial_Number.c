
#include <stdio.h>

int main() {
    // Write C code here
    int i, f, n;
    f=i=1;
    printf("Enput your Factorial number: ");
    scanf("%d", &n);
    while (i<=n){
        f*=i;
        printf("f:%d i:%d \n", f, i);
        i++;
    }

    return 0;
}
