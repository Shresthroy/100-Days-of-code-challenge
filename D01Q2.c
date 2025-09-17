/*
Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h>

int main()
{
    int a = 10, b = 2, c = 7, d = 3;

    printf("sum %d ", a + b);
    printf("difference %d ", a - b);
    printf("product %d ", a * b);
    if (b != 0)
        printf("quotient %.2f \n", (float)a / b);
    else
        printf("You can't divide by 0");

    printf("sum %d ", c + d);
    printf("difference %d ", c - d);
    printf("product %d ", c * d);
    if (d != 0)
        printf("quotient %.2f", (float)c / d);
    else
        printf("You can't divide by 0");

    return 0;
}
