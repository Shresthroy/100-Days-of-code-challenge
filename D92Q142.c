/*
Q142: Store details of 5 students in an array of structures and print all.

Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/

#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    int marks;
};

int main()
{
    struct Student students[5];

    printf("Enter details of 5 students:\n");
    printf("=============================\n");

    for (int i = 0; i < 5; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    printf("\nStudent Details:\n");
    printf("================\n");
    printf("%-20s %-10s %s\n", "Name", "Roll No", "Marks");
    printf("-------------------------------------------------\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%-20s %-10d %d\n",
               students[i].name,
               students[i].roll_no,
               students[i].marks);
    }

    return 0;
}
