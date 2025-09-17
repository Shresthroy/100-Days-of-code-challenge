/*
Q11: Write a program to input an integer and check whether it is even or odd using if–else.

Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/

#include <stdio.h>

int main()
{
    int a = 7, b = 12;

    if (a % 2 == 0)
        printf("%d is even\n", a);
    else
        printf("%d is odd\n", a);

    if (b % 2 == 0)
        printf("%d is even\n", b);
    else
        printf("%d is odd\n", b);

    return 0;
}