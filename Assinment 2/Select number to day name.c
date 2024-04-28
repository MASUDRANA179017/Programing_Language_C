
#include <stdio.h>

int main(){

    int year, day;

     // Input for weekday conversion
    printf("1 means  Sunday \n");
    printf("2 means  Monday \n");
    printf("3 means  Tuesday \n");
    printf("4 means  Wednesday \n");
    printf("5 means  Thursday \n");
    printf("6 means  Friday \n");
    printf("7 means  Saturday \n\n");

    printf("Select Number: ");

    scanf("%d", &day);

    // Converting number to weekday
    switch (day) {
        case 1:
            printf("Select number is Sunday\n");
            break;
        case 2:
            printf("Select number is Monday\n");
            break;
        case 3:
            printf("Select number is Tuesday\n");
            break;
        case 4:
            printf("Select number is Wednesday\n");
            break;
        case 5:
            printf("Select number is Thursday\n");
            break;
        case 6:
            printf("Select number is Friday\n");
            break;
        case 7:
            printf("Select number is Saturday\n");
            break;
        default:
            printf("Invalid input!\n");
    }

    }
