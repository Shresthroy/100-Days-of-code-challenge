/*
Q5: Write a program to convert temperature from Celsius to Fahrenheit.

Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>
int main()
{
    float temps[] = {0, 100};
    for (int i = 0; i < 2; i++)
    {
        printf("Celsius: %.2f\n", temps[i]);
        printf("Fahrenheit: %.2f\n\n", (temps[i] * 9 / 5) + 32);
    }

    return 0;
}
