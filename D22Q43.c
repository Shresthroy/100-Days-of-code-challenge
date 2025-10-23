/*
Q43: Write a program to check if a number is a strong number.

Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>

int main()
{
    int num, temp, sum = 0, fact;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        fact = 1;
        int digit = temp % 10;
        for (int i = 1; i <= digit; i++)
        {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }
    if (sum == num)
    {
        printf("Strong number");
    }
    else
    {
        printf("Not strong number");
    }
    return 0;
}
