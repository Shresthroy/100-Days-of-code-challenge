/*
Q143: Find and print the student with the highest marks.

Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

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
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student students[n];

    printf("Enter details of %d students:\n", n);

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

    int maxMarks = -1;
    int topperIndex = -1;

    for (int i = 0; i < n; i++)
    {
        if (students[i].marks > maxMarks)
        {
            maxMarks = students[i].marks;
            topperIndex = i;
        }
    }

    printf("\nTopper: %s (Marks: %d)\n",
           students[topperIndex].name, students[topperIndex].marks);

    return 0;
}