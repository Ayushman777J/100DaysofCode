//Define a struct with enum Gender and print person's gender.
#include <stdio.h>

enum Gender { Male, Female, Other };

struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter age: ");
    scanf("%d", &p.age);

    printf("Enter gender (0 for Male, 1 for Female, 2 for Other): ");
    scanf("%d", (int*)&p.gender);

    printf("Person Details:\n");
    printf("Name: %s | Age: %d | Gender: ", p.name, p.age);

    if (p.gender == Male)
        printf("Male\n");
    else if (p.gender == Female)
        printf("Female\n");
    else
        printf("Other\n");

    return 0;
}