//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int a[10][10], diag[10];
    int n, i, j, k, distinct = 1;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        diag[i] = a[i][i];
    }

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(diag[i] == diag[j]) {
                distinct = 0;
                break;
            }
        }
        if(!distinct)
            break;
    }

    if(distinct)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}
