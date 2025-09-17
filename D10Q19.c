/*
Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/

#include <stdio.h>

int main()
{
    int a, b, c, x, y, z;

    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        printf("The triangle is valid.\n");

        if (a == b && b == c)
        {
            printf("Equilateral triangle.");
        }
        else if (a == b || b == c || a == c)
        {
            printf("Isosceles triangle.");
        }
        else
        {
            printf("Scalene triangle.");
        }
        x = a * a;
        y = b * b;
        z = c * c;
        if ((x + y == z) || (x + z == y) || (y + z == x))
        {
            printf("Also a Right-angled triangle.");
        }
    }
    else
    {
        printf("triangle is not valid.\n");
    }

    return 0;
}
