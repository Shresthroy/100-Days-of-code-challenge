/*
Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum UserRole
{
    ADMIN,
    USER,
    GUEST
};

int main()
{
    char roleInput[20];

    printf("User Role System\n");
    printf("================\n");
    printf("Available roles: ADMIN, USER, GUEST\n");
    printf("Enter your role: ");
    scanf("%s", roleInput);

    for (int i = 0; roleInput[i]; i++)
    {
        roleInput[i] = toupper(roleInput[i]);
    }

    enum UserRole role;

    if (strcmp(roleInput, "ADMIN") == 0)
    {
        role = ADMIN;
    }
    else if (strcmp(roleInput, "USER") == 0)
    {
        role = USER;
    }
    else if (strcmp(roleInput, "GUEST") == 0)
    {
        role = GUEST;
    }
    else
    {
        printf("Error: Invalid role! Please use ADMIN, USER, or GUEST.\n");
        return 1;
    }

    switch (role)
    {
    case ADMIN:
        printf("Welcome Administrator!\n");
        break;
    case USER:
        printf("Welcome User!\n");
        break;
    case GUEST:
        printf("Welcome Guest!\n");
        break;
    }

    return 0;
}