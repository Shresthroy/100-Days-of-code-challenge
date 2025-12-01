/*
Q145: Return a structure containing top student's details from a function.

Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/

#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    int marks;
};

struct Student findTopStudent(struct Student students[], int n)
{
    int maxMarks = -1;
    int topIndex = 0;

    for (int i = 0; i < n; i++)
    {
        if (students[i].marks > maxMarks)
        {
            maxMarks = students[i].marks;
            topIndex = i;
        }
    }

    return students[topIndex];
}

int main()
{
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    printf("\nEnter student details:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    struct Student topStudent = findTopStudent(students, n);

    printf("\nTop Student: %s | Roll: %d | Marks: %d\n",
           topStudent.name, topStudent.roll_no, topStudent.marks);

    return 0;
}