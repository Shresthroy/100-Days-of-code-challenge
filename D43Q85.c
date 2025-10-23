/*
Q85: Reverse a string.

Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], temp;
    int i, j;

    scanf("%s", str);

    j = strlen(str) - 1;
    for (i = 0; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("%s\n", str);
    return 0;
}