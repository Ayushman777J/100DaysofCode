//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
    long long binary, onesComplement = 0, place = 1;
    int digit;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0) {
        digit = binary % 10;   

        if (digit == 0)
            onesComplement += 1 * place;   
        else if (digit == 1)
            onesComplement += 0 * place;  
        else {
            printf("Invalid binary number!\n");
            return 0;
        }

        binary /= 10;
        place *= 10;
    }

    printf("1's Complement: %lld\n", onesComplement);

    return 0;
}
