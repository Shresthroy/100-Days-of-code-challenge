/*
Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    printf("Enter a string: ");
    scanf("%s", s);

    int lastIndex[256];
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;
    int maxLength = 0;
    int start = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        unsigned char ch = s[i];

        if (lastIndex[ch] >= start)
        {
            start = lastIndex[ch] + 1;

            lastIndex[ch] = i;

            int currentLength = i - start + 1;

            if (currentLength > maxLength)
                maxLength = currentLength;
        }

        printf("Length of longest substring without repeating characters: %d\n", maxLength);

        return 0;
    }
}
