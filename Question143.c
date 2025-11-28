//Find and print the student with the highest marks.
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s[3];
    int i, topIndex = 0;

    strcpy(s[0].name, "John");
    s[0].roll = 101;
    s[0].marks = 85;

    strcpy(s[1].name, "Alice");
    s[1].roll = 102;
    s[1].marks = 92;

    strcpy(s[2].name, "Bob");
    s[2].roll = 103;
    s[2].marks = 78;

    for (i = 1; i < 3; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    printf("Top Student Details:\n");
    printf("Name: %s | Roll: %d | Marks: %d\n", s[topIndex].name, s[topIndex].roll, s[topIndex].marks);

    return 0;
}