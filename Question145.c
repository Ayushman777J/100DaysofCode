//Return a structure containing top student's details from a function.
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student getTopStudent(struct Student s1, struct Student s2) {
    if (s1.marks >= s2.marks) {
        return s1;
    } else {
        return s2;
    }
}

int main() {
    struct Student s1, s2, top;

    strcpy(s1.name, "John");
    s1.roll = 101;
    s1.marks = 85;

    strcpy(s2.name, "Alice");
    s2.roll = 102;
    s2.marks = 92;

    top = getTopStudent(s1, s2);

    printf("Top Student Details:\n");
    printf("Name: %s | Roll: %d | Marks: %d\n", top.name, top.roll, top.marks);

    return 0;
}