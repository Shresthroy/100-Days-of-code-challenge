/*
Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], word[50], longest[50];
    int i, j = 0, maxlen = 0;

    printf("Enter a sentence: ");
    gets(str);

    for (i = 0; i <= strlen(str); i++)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            word[j] = str[i];
            j++;
        }
        else
        {
            word[j] = '\0';
            if (strlen(word) > maxlen)
            {
                maxlen = strlen(word);
                strcpy(longest, word);
            }
            j = 0;
        }
    }

    printf("%s\n", longest);
    return 0;
}