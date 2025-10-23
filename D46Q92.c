/*
Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int hash[26] = {0};

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (hash[str[i] - 'a'] == 1)
            {
                printf("%c\n", str[i]);
                return 0;
            }
            hash[str[i] - 'a']++;
        }
    }

    printf("No repeating character found\n");
    return 0;
}