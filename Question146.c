//Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[50];
    struct Date join;
};

int main() {
    struct Employee e;

    printf("Enter ID: ");
    scanf("%d", &e.id);

    printf("Enter Name: ");
    scanf("%s", e.name);

    printf("Enter Joining Day: ");
    scanf("%d", &e.join.day);

    printf("Enter Joining Month: ");
    scanf("%d", &e.join.month);

    printf("Enter Joining Year: ");
    scanf("%d", &e.join.year);

    printf("\nEmployee Details:\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Joining Date: %02d-%02d-%d\n", e.join.day, e.join.month, e.join.year);

    return 0;
}
