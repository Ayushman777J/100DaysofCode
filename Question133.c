//Create an enum for months and print how many days each month has.
#include <stdio.h>

enum Month { JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE,
             JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };

int main() {
    const char *names[] = { "January", "February", "March", "April", "May", "June",
                            "July", "August", "September", "October", "November", "December" };
    int days[] = { 31, 28, 31, 30, 31, 30,
                   31, 31, 30, 31, 30, 31 };

    for (int i = JANUARY; i <= DECEMBER; i++) {
        printf("%s has %d days\n", names[i - 1], days[i - 1]);
    }

    return 0;
}