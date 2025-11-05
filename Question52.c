/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

* */

#include <stdio.h>
int main() {
    int i, j, k;
    int total_groups = 4; 

    for (i = 1; i <= total_groups; i++) {
        
        for (j = 1; j <= i + 1; j++) {
            printf("*\n");
        }
        
        if (i < total_groups) {
            printf("\n");
        }
    }

    return 0;
}