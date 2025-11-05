//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
void printBinary(int n) {
    if (n > 1) {
        printBinary(n / 2);
    }
    printf("%d", n % 2);
}