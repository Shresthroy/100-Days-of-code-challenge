/*
Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    char *token;

    printf("Enter the full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    token = strtok(name, " ");
    while (token != NULL)
    {
        char *next = strtok(NULL, " ");
        if (next == NULL)
        {
            printf("%s", token);
        }
        else
        {
            printf("%c.", token[0]);
        }
        token = next;
    }
    printf("\n");
    return 0;
}