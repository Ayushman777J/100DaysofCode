//Print all enum names and integer values using a loop.
#include <stdio.h>

enum Weekday { Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

int main() {
    const char *names[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };

    for (int i = Monday; i <= Sunday; i++) {
        printf("%s = %d\n", names[i - 1], i);
    }

    return 0;
}