//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    enum Role r;

    printf("Enter role (0 for ADMIN, 1 for USER, 2 for GUEST): ");
    scanf("%d", (int*)&r);

    if (r == ADMIN)
        printf("Welcome, Admin! You have full access.\n");
    else if (r == USER)
        printf("Welcome, User! You have limited access.\n");
    else if (r == GUEST)
        printf("Welcome, Guest! Please sign up for more features.\n");
    else
        printf("Invalid role entered.\n");

    return 0;
}