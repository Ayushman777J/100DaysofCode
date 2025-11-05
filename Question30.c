//Write a program to reverse a given number.
#include <stdio.h>
int main() {
    int number, rev = 0, temp;
    printf("Enter an integer: ");
    scanf("%d", &number);
    while (number != 0) {
        temp = number % 10; 
        rev = rev * 10 + temp;
        number /= 10; 
    }
    printf("Reversed Number: %d\n", rev);
    
    return 0;
}