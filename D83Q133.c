/*
Q133: Create an enum for months and print how many days each month has.

Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/

#include <stdio.h>

enum Month
{
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(enum Month month, int year)
{
    switch (month)
    {
    case JANUARY:
    case MARCH:
    case MAY:
    case JULY:
    case AUGUST:
    case OCTOBER:
    case DECEMBER:
        return 31;
    case APRIL:
    case JUNE:
    case SEPTEMBER:
    case NOVEMBER:
        return 30;
    case FEBRUARY:
        return isLeapYear(year) ? 29 : 28;
    default:
        return 0;
    }
}

int main()
{
    char *monthNames[] = {
        "", "JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE",
        "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"};

    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    printf("\nDays in each month for year %d:\n", year);
    printf("================================\n");

    for (enum Month month = JANUARY; month <= DECEMBER; month++)
    {
        int days = getDaysInMonth(month, year);
        printf("%-10s: %d days", monthNames[month], days);

        if (month == FEBRUARY && isLeapYear(year))
        {
            printf(" (Leap Year)");
        }
        printf("\n");
    }

    return 0;
}