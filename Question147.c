//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char role[50];
};

int main() {
    struct Employee e, r;
    FILE *fp;

    fp = fopen("employee.dat", "wb");
    printf("Enter ID: ");
    scanf("%d", &e.id);
    printf("Enter Name: ");
    scanf("%s", e.name);
    printf("Enter Role: ");
    scanf("%s", e.role);
    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);

    fp = fopen("employee.dat", "rb");
    fread(&r, sizeof(r), 1, fp);
    fclose(fp);

    printf("\nStored Data:\n");
    printf("ID: %d\n", r.id);
    printf("Name: %s\n", r.name);
    printf("Role: %s\n", r.role);

    return 0;
}
