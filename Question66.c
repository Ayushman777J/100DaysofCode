//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int arr[100], n, i, num, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements (in sorted order): ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &num);

   
    pos = n;
    for(i = 0; i < n; i++) {
        if(num < arr[i]) {
            pos = i;
            break;
        }
    }

    
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    
    arr[pos] = num;
    n++; 

    printf("Array after insertion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
