#include <stdio.h>

int main(){

    int num1, num2, num3,num4, num5;
    int max, min;


    // input for maximum and minimum number
    printf("Enter five number: \n");
    scanf("%d %d %d %d %d",&num1, &num2, &num3,&num4, &num5 );

    // finding maximum number

        max= num1;
        if (num2>max) max=num2;
        if (num3>max) max=num3;
        if (num4>max) max=num4;
        if (num5>max) max=num5;

   // finding minimum number
        min= num1;
        if (num2<min) min=num2;
        if (num3<min) min=num3;
        if (num4<min) min=num4;
        if (num5<min) min=num5;

    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);



    return 0;
}




