/*
Q148: Take two structs as input and check if they are identical.

Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/

#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int roll_no;
    int marks;
};

int areStudentsIdentical(struct Student s1, struct Student s2)
{
    if (strcmp(s1.name, s2.name) != 0)
        return 0;
    if (s1.roll_no != s2.roll_no)
        return 0;
    if (s1.marks != s2.marks)
        return 0;
    return 1;
}

int main()
{
    struct Student student1, student2;

    printf("=== Enter Student 1 Details ===\n");
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Roll: ");
    scanf("%d", &student1.roll_no);
    printf("Marks: ");
    scanf("%d", &student1.marks);

    printf("\n=== Enter Student 2 Details ===\n");
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Roll: ");
    scanf("%d", &student2.roll_no);
    printf("Marks: ");
    scanf("%d", &student2.marks);

    printf("\n=== Comparison Result ===\n");
    if (areStudentsIdentical(student1, student2))
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    // Display both students for verification
    printf("\nStudent 1: %s | Roll: %d | Marks: %d\n",
           student1.name, student1.roll_no, student1.marks);
    printf("Student 2: %s | Roll: %d | Marks: %d\n",
           student2.name, student2.roll_no, student2.marks);

    return 0;
}