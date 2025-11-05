//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    char *word_start = NULL;
    int i;

    printf("Enter a sentence: ");
    gets(str); 

    word_start = str;

    for (i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverse(word_start, &str[i - 1]); 
            if (str[i] == '\0')
                break; 
            word_start = &str[i + 1]; 
        }
    }

    printf("Reversed words: %s\n", str);
    return 0;
}
