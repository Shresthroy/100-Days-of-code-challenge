/*
Q32: Write a program to check if a number is a palindrome.

Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include <stdio.h>

int main()
{
    int n, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (; n != 0; n /= 10)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
    }
    if (rev == n)
        printf("Palindrome");
    else
        printf("Not palindrome");
    return 0;
}