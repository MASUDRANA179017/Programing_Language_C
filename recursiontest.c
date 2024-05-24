#include <stdio.h>

void recufun(int* number, int i, int arrLen){
    //base case
    if(i == arrLen) return;

    if (number[i]&1 == 1){
            /* 1&1=1
               last bit of odd number is always 1
               last bit of even number is always 0
            */
        printf("odd: %d\n",number[i]);
    }else{
        printf("even: %d\n",number[i]);
    }

    // recall
    recufun(number, i+1, arrLen);
}



int main(){
    int i = 0;
    int number[] = {1,2,3,4,5,6,7,8,9,10,11,12,60};
    int arrLen = sizeof(number)/sizeof(int);
    recufun(number, i, arrLen);
    return 0;
}


