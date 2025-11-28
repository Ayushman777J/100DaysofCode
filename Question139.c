//Show that enums store integers by printing assigned values.
#include <stdio.h>

enum Weekday { Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

int main() {
    printf("Monday = %d\n", Monday);
    printf("Tuesday = %d\n", Tuesday);
    printf("Wednesday = %d\n", Wednesday);
    printf("Thursday = %d\n", Thursday);
    printf("Friday = %d\n", Friday);
    printf("Saturday = %d\n", Saturday);
    printf("Sunday = %d\n", Sunday);

    return 0;
}