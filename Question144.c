//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

void display(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student s1;
    strcpy(s1.name, "John");
    s1.roll = 106;
    s1.marks = 91;

    display(s1);

    return 0;
}