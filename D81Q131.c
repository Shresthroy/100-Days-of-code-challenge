/*
Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

Sample Test Cases:
Input 1:
No input
Output 1:
SUNDAY = 0
MONDAY = 1
TUESDAY = 2
WEDNESDAY = 3
THURSDAY = 4
FRIDAY = 5
SATURDAY = 6

*/

#include <stdio.h>

enum Days
{
    SUNDAY = 0,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main()
{
    char *dayNames[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY"};

    printf("Days of the week with their integer values:\n");
    printf("===========================================\n");

    enum Days days[] = {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};

    for (int i = 0; i < 7; i++)
    {
        printf("%s = %d\n", dayNames[i], days[i]);
    }

    return 0;
}