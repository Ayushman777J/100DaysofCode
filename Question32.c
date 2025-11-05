//Write a program to check if a number is a palindrome.
#include <stdio.h>

int main() {
    int n, original, rev = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;  

    while (n != 0) {
        temp = n % 10;               
        rev = rev * 10 + temp;  
        n = n / 10;                       
    }

    if (original == rev)
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");

    return 0;
}
