/*
Q6: Write a program to swap two numbers using a third variable.

Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/

#include <stdio.h>

int main()
{
    int a, b, temp;

    a = 3;
    b = 5;
    temp = a;
    a = b;
    b = temp;
    printf("First pair after swap: %d %d\n", a, b);

    a = 1;
    b = -1;
    temp = a;
    a = b;
    b = temp;
    printf("Second pair after swap: %d %d\n", a, b);

    return 0;
}