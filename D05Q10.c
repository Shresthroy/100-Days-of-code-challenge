/*
Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include <stdio.h>

int main()
{
    int total_seconds1 = 3661;
    int total_seconds2 = 7322;
    int hours, minutes, seconds;

    hours = total_seconds1 / 3600;
    minutes = (total_seconds1 % 3600) / 60;
    seconds = total_seconds1 % 60;
    printf("Time for %d seconds: %d:%d:%d\n", total_seconds1, hours, minutes, seconds);

    hours = total_seconds2 / 3600;
    minutes = (total_seconds2 % 3600) / 60;
    seconds = total_seconds2 % 60;
    printf("Time for %d seconds: %d:%d:%d\n", total_seconds2, hours, minutes, seconds);

    return 0;
}