
#include <stdio.h>

int main() {
    int n, i, k, sum, lastNumber;

    printf("Number of terms n: ");
    scanf("%d", &n);
    sum=0;
    i=1;
    printf("\n\n\n");


    // Number 01. problem
    while(i<=n){
        i++;
        lastNumber = n;
        sum= n*(n+1)/2;
        if(i==n){
            printf("01.(Use While loop)Series Last Number = %d,& Sum = %d \n",lastNumber,sum);

        }

    };

    // Number 01. problem
    for(i=1; i<=n; i++){
        lastNumber = n;
        sum= n*(n+1)/2;
        if(i==n){
            printf("01.(Use for loop) Series Last Number = %d,& Sum = %d \n",lastNumber,sum);
        }

    }

    // Number 01. problem
    i=1;
    sum=0;
     do {
        lastNumber = n;
        // Assuming you want to calculate this sum at each step
        sum = n*(n+1)/2;
        i++; // Increment i for the next iteration
    } while(i <= n);
    printf("01.(Use do while loop) Series Last Number = %d,& Sum = %d \n",lastNumber,sum);

   printf("\n\n\n");




    // Number 02. problem
    i=1;
    sum=0;
    while(i<=n){
        lastNumber = n*2;
        sum= n*(n+1);
        i++;
        if(i==n){
            printf("02.(use while loop) Series Last Number = %d,& Sum = %d \n",lastNumber,sum);
        }
    };


    // Number 02. problem
    for(i=1; i<=n; i++){
        lastNumber = n*2;
        sum= n*(n+1);
        if(i==n){
            printf("02.(Use for loop) Series Last Number = %d,& Sum = %d \n",lastNumber,sum);
        }

    }


    // Number 02. problem
    i=1;
    sum=0;
     do {
        lastNumber = n*2;
        // Assuming you want to calculate this sum at each step
        sum = n*(n+1);
        i++; // Increment i for the next iteration
    } while(i <= n);
    printf("02.(Use do while loop) Series Last Number = %d,& Sum = %d \n",lastNumber,sum);

   printf("\n\n\n");





    // Number 03. problem
    i=1;
    sum=0;
    while(i<=n){
        lastNumber = 2*n-1;
        sum= n*n;
        i++;
        if(i==n){
            printf("03.(use while loop) Series Last Number = %d,& Sum = %d \n",lastNumber,sum);
        }
    };


    // Number 03. problem
    for(i=1; i<=n; i++){
        lastNumber = 2*n-1;
        sum= n*n;
        if(i==n){
            printf("03.(Use for loop) Series Last Number = %d,& Sum = %d \n",lastNumber,sum);
        }

    }


    // Number 03. problem
    i=1;
    sum=0;
     do {
        lastNumber = 2*n-1;
        // Assuming you want to calculate this sum at each step
        sum = n*n;
        i++; // Increment i for the next iteration
    } while(i <= n);
    printf("03.(Use do while loop) Series Last Number = %d,& Sum = %d \n",lastNumber,sum);

   printf("\n\n\n");




    printf("Number of K: ");
    scanf("%d", &k);
     printf("\n\n\n");


    // Number 04. problem
    i=1;
    while(i<=n){
        lastNumber = k+n-1;
        sum= n*(2*k+i-1)/2;
        if(i==n){
            printf("04.(use while loop) Series Last Number = %d,& Sum = %d \n",lastNumber,sum);
        };
        i++;
    };


    // Number 04. problem
    for(i=1; i<=n; i++){
        lastNumber = k+n-1;
        sum= n*(2*k+i-1)/2;
        if(i==n){
            printf("04.(Use for loop) Series Last Number = %d,& Sum = %d \n",lastNumber,sum);
        }

    }


    // Number 04. problem
    i=1;
     do {
        lastNumber = k+n-1;
        sum = n*(2*k+i-1)/2;
        i++; // Increment i for the next iteration
    } while(i <= n);
        printf("04.(Use do while loop) Series Last Number = %d,& Sum = %d \n",lastNumber,sum);

    printf("\n\n\n");





    // Number 05. problem
    i=1;
    while(i<=n){
        lastNumber = n*n;
        sum= (n*(n+1)*(2*n+1))/6;
        i++;
        if(i==n){
            printf("05.(use while loop) Series Last Number = %d,& Sum = %d \n",lastNumber,sum);
        }
    };


    // Number 05. problem
    for(i=1; i<=n; i++){
        lastNumber = n*n;
        sum= (n*(n+1)*(2*n+1))/6;
        if(i==n){
            printf("05.(Use for loop) Series Last Number = %d,& Sum = %d \n",lastNumber,sum);
        }

    }


    // Number 05. problem
     do {
        lastNumber = n*n;
        sum= (n*(n+1)*(2*n+1))/6;
        i++; // Increment i for the next iteration
    } while(i <= n);
    printf("05.(Use do while loop) Series Last Number = %d,& Sum = %d \n",lastNumber,sum);

   printf("\n\n\n");


    // Number 06. problem
    i=1;
    while(i<=n){
        lastNumber = n*n*n;
        sum= (n*(n+1)/2)*(n*(n+1)/2);
        i++;
        if(i==n){
            printf("06.(use while loop) Series Last Number = %d,& Sum = %d \n",lastNumber,sum);
        }
    };


    // Number 06. problem
    for(i=1; i<=n; i++){
        lastNumber = n*n*n;
        sum= (n*(n+1)/2)*(n*(n+1)/2);
        if(i==n){
            printf("06.(Use for loop) Series Last Number = %d,& Sum = %d \n",lastNumber,sum);
        }

    }


    // Number 06. problem
     do {
        lastNumber = n*n*n;
        sum= (n*(n+1)/2)*(n*(n+1)/2);
        i++; // Increment i for the next iteration
    } while(i <= n);
    printf("06.(Use do while loop) Series Last Number = %d,& Sum = %d \n",lastNumber,sum);

   printf("\n\n\n");



   // Number 07. problem
    i=1;
    while(i<=n){
        lastNumber = (2*n-1)*(2*n-1);
        sum= (n*(4*n*n-1)/3)*(n*(4*n*n-1)/3);
        i++;
        if(i==n){
            printf("07.(use while loop) Series Last Number = %d,& Sum = %d \n",lastNumber,sum);
        }
    };


    // Number 07. problem
    for(i=1; i<=n; i++){
        lastNumber = (2*n-1)*(2*n-1);
        sum= (n*(4*n*n-1)/3)*(n*(4*n*n-1)/3);
        if(i==n){
            printf("07.(Use for loop) Series Last Number = %d,& Sum = %d \n",lastNumber,sum);
        }

    }


    // Number 07. problem
     do {
        lastNumber = (2*n-1)*(2*n-1);
        sum= (n*(4*n*n-1)/3)*(n*(4*n*n-1)/3);
        i++; // Increment i for the next iteration
    } while(i <= n);
    printf("07.(Use do while loop) Series Last Number = %d,& Sum = %d \n",lastNumber,sum);

   printf("\n\n\n");





   // Number 08. problem
    i=1;
    while(i<=n){
        lastNumber = (2*n-1)*(2*n-1)*(2*n-1);
        sum= (n*n*(2*n*n-1));
        i++;
        if(i==n){
            printf("08.(use while loop) Series Last Number = %d,& Sum = %d \n",lastNumber,sum);
        }
    };


    // Number 08. problem
    for(i=1; i<=n; i++){
        lastNumber = (2*n-1)*(2*n-1)*(2*n-1);
        sum= (n*n*(2*n*n-1));
        if(i==n){
            printf("08.(Use for loop) Series Last Number = %d,& Sum = %d \n",lastNumber,sum);
        }

    }


    // Number 08. problem
     do {
        lastNumber = (2*n-1)*(2*n-1)*(2*n-1);
        sum= (n*n*(2*n*n-1));
        i++; // Increment i for the next iteration
    } while(i <= n);
    printf("08.(Use do while loop) Series Last Number = %d,& Sum = %d \n",lastNumber,sum);

   printf("\n\n\n");





    return 0;
}
