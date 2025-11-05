//Write a program to swap the first and last digit of a number.

#include <stdio.h>
int swapFirstAndLastDigit(int num) {
    int firstDigit, lastDigit, numDigits = 0, temp = num;

    
    lastDigit = num % 10;

   
    while (temp >= 10) {
        temp /= 10;
        numDigits++;
    }
    firstDigit = temp;

    
    if (numDigits == 0) {
        return num;
    }

    
    int placeValue = 1;
    for (int i = 0; i < numDigits; i++) {
        placeValue *= 10;
    }

    
    num = num - firstDigit * placeValue - lastDigit + lastDigit * placeValue + firstDigit;

    return num;
}