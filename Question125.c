//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100], line[200];

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter a line of text to append: ");
    getchar(); 
    fgets(line, sizeof(line), stdin);

    fprintf(fp, "%s", line);

    fclose(fp);

    printf("Text appended successfully.\n");
    return 0;
}