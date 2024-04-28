#include <stdio.h>

int main() {
    long int n, i, k, sum, limit;

    printf("Limit of n: ");
    scanf("%d", &limit);
    sum=0;
    n=0;

    // Number 01. problem
    for(i=1; i<=limit; i++){
        n= i;
        sum= n*(n+1)/2;
        printf("number n= %d sum: %d \n",n,sum);

    }
    printf("\n\n\n");


    // Number 02. problem
    for(i=1; i<=limit; i++){
        n= 2*i;
        sum= n*(n+1);
        printf("number n= %d sum: %d \n",n,sum);

    }
    printf("\n\n\n");



    // Number 03. problem
    for(i=1; i<=limit; i++){
        n= (2*i)-1;
        sum= n*n;
        printf("number n= %d sum: %d \n",n,sum);

    }
    printf("\n\n\n");


    // Number 04. problem
    printf("Number of K: ");
    scanf("%d", &k);
    for(i=1; i<=limit; i++){
        n= (k+i-1);
        sum= n*(2*k+i-1)/2;
        printf("number n= %d sum: %d \n",n,sum);

    }
    printf("\n\n\n");



   // Number 05. problem
   printf("this is do while number 05 problem \n");
    i=1;
    sum=0;
     do {
        n= i*i;
        // Assuming you want to calculate this sum at each step
        sum = n*n;
        printf("number n= %d, sum: %d \n", n, sum);
        i++; // Increment i for the next iteration
    } while(i <= limit);


    printf("\n\n\n");


   // Number 06. problem
   printf("this is do while number 06 problem \n");
    i=1;
    sum=0;
     do {
        n= i*i*i;
        // Assuming you want to calculate this sum at each step
        sum = (n*(n+1)/2)*(n*(n+1)/2);
        printf("number n= %d, sum: %d \n", n, sum);
        i++; // Increment i for the next iteration
    } while(i <= limit);



    printf("\n\n\n");


    // Number 07. problem
   printf("this is do while number 07 problem \n");
    i=1;
    sum=0;
     do {
        n= ((2*i)-1)*((2*i)-1);
        // Assuming you want to calculate this sum at each step
        sum = n*((4*n*n)-1)/3;
        printf("number n= %d, sum: %d \n", n, sum);
        i++; // Increment i for the next iteration
    } while(i <= limit);



    printf("\n\n\n");



      // Number 08. problem
   printf("this is do while number 08 problem \n");
    i=1;
    sum=0;
     do {
        n= ((2*i)-1)*((2*i)-1)*((2*i)-1);
        // Assuming you want to calculate this sum at each step
        sum = n*n*((2*n*n)-1);
        printf("number n= %d, sum: %d \n", n, sum);
        i++; // Increment i for the next iteration
    } while(i <= limit);

    return 0;
}
