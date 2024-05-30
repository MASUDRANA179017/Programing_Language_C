/*
i. Loops
ii. Array :  1D, 2D, 3D, Bubble sort
iii. Function
iv. Recursion
v. Dynamic Memory Allocation
*/

#include<stdio.h>

int main (){


// 2 type of loop

//1 while loop
//2 for loop


//________01________//

/*
int countdown=5;

while (countdown > 0){
printf("%d\n", countdown);

countdown--;

}

*/


int *n=0,i;
char* name[10];
int lenth = sizeof(name)/sizeof(name[0]);
for (int i=0; i<=lenth; i++){
    scanf("%s",&name[i]);
    printf("Name: %s: %d",name[i],i);
}

return 0;
}


