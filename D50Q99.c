/*
Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char date[11];
    scanf("%s", date);

    char month[4];
    strcpy(month, "Apr");

    printf("%c%c-%s-%c%c%c%c\n",
           date[0], date[1],
           month,
           date[6], date[7], date[8], date[9]);

    return 0;
}