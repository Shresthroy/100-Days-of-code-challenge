/*
Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end)
{
    char temp;
    while (start < end)
    {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

int main()
{
    char str[100];
    printf("Enter a sentence: ");
    gets(str);

    int len = strlen(str);
    char *start = str;

    for (int i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            reverseWord(start, &str[i - 1]);
            start = &str[i + 1];
        }
    }

    printf("%s\n", str);
    return 0;
}