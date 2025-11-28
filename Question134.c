//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    enum Status s;

    printf("Enter status (0 for SUCCESS, 1 for FAILURE, 2 for TIMEOUT): ");
    scanf("%d", (int*)&s);

    if (s == SUCCESS)
        printf("Operation completed successfully.\n");
    else if (s == FAILURE)
        printf("Operation failed.\n");
    else if (s == TIMEOUT)
        printf("Operation timed out.\n");
    else
        printf("Invalid status entered.\n");

    return 0;
}