/*
Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

#include <stdio.h>

int main()
{
    int l1 = 5, b1 = 10, l2 = 3, b2 = 7;
    printf("Area 1: %d, ", l1 * b1);
    printf("Perimeter 1: %d\n", 2 * (l1 + b1));
    printf("Area 2: %d, ", l2 * b2);
    printf("Perimeter 2: %d\n", 2 * (l2 + b2));
    return 0;
}