//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>
int main() {
    int num, originalNum, temp, n = 0,result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0) {
        temp = originalNum % 10;
        result += pow(temp, n);
        originalNum /= 10;
    }

    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
