/*
Q149: Use malloc() to allocate structure memory dynamically and print details.

Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[50];
    int roll_no;
    int marks;
};

int main()
{
    struct Student *studentPtr;

    studentPtr = (struct Student *)malloc(sizeof(struct Student));

    if (studentPtr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter student details:\n");
    printf("Name: ");
    scanf("%s", studentPtr->name);
    printf("Roll: ");
    scanf("%d", &studentPtr->roll_no);
    printf("Marks: ");
    scanf("%d", &studentPtr->marks);

    printf("\nStudent Details\n");
    printf("Name: %s | Roll: %d | Marks: %d\n",
           studentPtr->name, studentPtr->roll_no, studentPtr->marks);

    free(studentPtr);

    return 0;
}