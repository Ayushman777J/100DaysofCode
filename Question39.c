//Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main() {
    int number, digit;
    long long product = 1;
    int has_odd_digit = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        digit = number % 10;
        if (digit % 2 != 0) { 
            product *= digit;
            has_odd_digit = 1;
        }
        number /= 10;
    }

    if (has_odd_digit) {
        printf("The product of odd digits is: %lld\n", product);
    } else {
        printf("There are no odd digits in the number.\n");
    }

    return 0;
}