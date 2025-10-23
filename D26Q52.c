/*
Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>

int main()
{
    int rows, g;

    for (g = 1; g <= 5; g++)
    {
        if (g == 1 || g == 5)
            rows = 1;
        else if (g == 2 || g == 4)
            rows = 3;
        else
            rows = 5;

        for (int i = 0; i < rows; i++)
        {
            printf("*\n");
        }

        if (g < 5)
        {
            printf("\n");
        }
    }

    return 0;
}
