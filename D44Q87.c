/*
Q87: Count spaces, digits, and special characters in a string.

Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isspace(str[i]))
            spaces++;
        else if (isdigit(str[i]))
            digits++;
        else if (!isalpha(str[i]))
            special++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}