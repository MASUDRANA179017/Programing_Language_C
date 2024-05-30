#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Problem 1: Convert a decimal number to binary
void decimalToBinary(int decimal) {
    if(decimal > 0) {
        decimalToBinary(decimal / 2);
        printf("%d", decimal % 2);
    }
}

// Problem 2: Print even or odd numbers in a given range
void printEvenOrOdd(int start, int end, int isEven) {
    if(start <= end) {
        if((start % 2 == 0 && isEven) || (start % 2 != 0 && !isEven)) {
            printf("%d ", start);
        }
        printEvenOrOdd(start + 1, end, isEven);
    }
}

// Problem 3: Calculate the length of a string
int stringLength(char* str) {
    if(*str == '\0') {
        return 0;
    }
    return 1 + stringLength(str + 1);
}

// Problem 4: Calculate the power of a number
int power(int base, int exponent) {
    if(exponent == 0) {
        return 1;
    }
    return base * power(base, exponent - 1);
}

// Problem 5: Find the largest number in an array
int findLargest(int arr[], int size) {
    if(size == 1) {
        return arr[0];
    }
    int maxRest = findLargest(arr, size - 1);
    return (arr[size - 1] > maxRest) ? arr[size - 1] : maxRest;
}

// Problem 6: Count the occurrence of an element in an array
int countOccurrence(int arr[], int size, int element) {
    if(size == 0) {
        return 0;
    }
    return (arr[size - 1] == element) + countOccurrence(arr, size - 1, element);
}

// Problem 7: Find the first capital letter in a string
int firstCapitalIndex(char* str) {
    if(*str == '\0') {
        return -1; // Capital letter not found
    }
    if(*str >= 'A' && *str <= 'Z') {
        return 0; // Index of the capital letter
    }
    int index = firstCapitalIndex(str + 1);
    return (index == -1) ? -1 : 1 + index;
}

// Problem 8: Check if a number is divisible by 11 and 9
int isDivisible(int num) {
    if(num == 0) {
        return 1;
    }
    if(num < 11 || num < 9) {
        return 0;
    }
    return isDivisible(num - 11) || isDivisible(num - 9);
}

// Problem 9: Find the sum of the proper divisors of a number
int sumOfDivisors(int num, int divisor) {
    if(divisor == 1) {
        return 0;
    }
    if(num % divisor == 0) {
        return divisor + sumOfDivisors(num, divisor - 1);
    }
    return sumOfDivisors(num, divisor - 1);
}

// Problem 10: Find the frequency of vowels in a string
int vowelFrequency(char* str) {
    if(*str == '\0') {
        return 0;
    }
    if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
       *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') {
        return 1 + vowelFrequency(str + 1);
    }
    return vowelFrequency(str + 1);
}

int main() {
    // Problem 1: Convert a decimal number to binary
    printf("Binary representation of 10: ");
    decimalToBinary(10);
    printf("\n");

    // Problem 2: Print even or odd numbers in a given range
    printf("Even numbers between 1 and 10: ");
    printEvenOrOdd(1, 10, 1);
    printf("\nOdd numbers between 1 and 10: ");
    printEvenOrOdd(1, 10, 0);
    printf("\n");

    // Problem 3: Calculate the length of a string
    char str[] = "Hello World";
    printf("Length of the string \"%s\": %d\n", str, stringLength(str));

    // Problem 4: Calculate the power of a number
    printf("2 raised to the power of 3: %d\n", power(2, 3));

    // Problem 5: Find the largest number in an array
    int arr[] = {3, 7, 2, 9, 5};
    printf("Largest number in the array: %d\n", findLargest(arr, 5));

    // Problem 6: Count the occurrence of an element in an array
    printf("Number of occurrences of 2 in the array: %d\n", countOccurrence(arr, 5, 2));

    // Problem 7: Find the first capital letter in a string
    printf("Index of the first capital letter in \"%s\": %d\n", str, firstCapitalIndex(str));

    // Problem 8: Check if a number is divisible by 11 and 9
    printf("Is 99 divisible by both 11 and 9? %s\n", isDivisible(99) ? "Yes" : "No");

    // Problem 9: Find the sum of the proper divisors of a number
    printf("Sum of proper divisors of 12: %d\n", sumOfDivisors(12, 12));

    // Problem 10: Find the frequency of vowels in a string
    printf("Frequency of vowels in \"%s\": %d\n", str, vowelFrequency(str));

    return 0;
}
