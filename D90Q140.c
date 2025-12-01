/*
Q140: Define a struct with enum Gender and print person's gender.

Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum Gender
{
    MALE,
    FEMALE,
    OTHER
};

struct Person
{
    enum Gender gender;
};

int main()
{
    struct Person person;
    char genderInput[20];

    printf("Gender=");
    scanf("%s", genderInput);

    for (int i = 0; genderInput[i]; i++)
    {
        genderInput[i] = toupper(genderInput[i]);
    }

    if (strcmp(genderInput, "MALE") == 0)
    {
        person.gender = MALE;
    }
    else if (strcmp(genderInput, "FEMALE") == 0)
    {
        person.gender = FEMALE;
    }
    else if (strcmp(genderInput, "OTHER") == 0)
    {
        person.gender = OTHER;
    }
    else
    {
        printf("Invalid gender input!\n");
        return 1;
    }

    switch (person.gender)
    {
    case MALE:
        printf("Male\n");
        break;
    case FEMALE:
        printf("Female\n");
        break;
    case OTHER:
        printf("Other\n");
        break;
    }

    return 0;
}