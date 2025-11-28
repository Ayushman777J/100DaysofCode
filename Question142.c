//Store details of 5 students in an array of structures and print all.
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s[5];

    strcpy(s[0].name, "John");
    s[0].roll = 101;
    s[0].marks = 85;

    strcpy(s[1].name, "Alice");
    s[1].roll = 102;
    s[1].marks = 92;

    strcpy(s[2].name, "Bob");
    s[2].roll = 103;
    s[2].marks = 78;

    strcpy(s[3].name, "Eve");
    s[3].roll = 104;
    s[3].marks = 88;

    strcpy(s[4].name, "Charlie");
    s[4].roll = 105;
    s[4].marks = 90;

    for (int i = 0; i < 5; i++) {
        printf("Name: %s | Roll: %d | Marks: %d\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}