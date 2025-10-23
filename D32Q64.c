/*
Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>

int main()
{
    int number, digit, max_digit = 0, max_count = 0;
    int count[10] = {0};

    printf("Enter an integer number: ");
    scanf("%d", &number);

    while (number > 0)
    {
        digit = number % 10;
        count[digit]++;
        number /= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        if (count[i] > max_count)
        {
            max_count = count[i];
            max_digit = i;
        }
    }

    printf("%d\n", max_digit);
    return 0;
}