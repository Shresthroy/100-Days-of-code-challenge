/*
Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/

#include <stdio.h>

struct Student
{
    char name[50];
    int rollNumber;
    float marks;
};

int main()
{
    FILE *file;
    int n, i;

    file = fopen("students.txt", "w");
    if (file == NULL)
    {
        printf("Error creating file!\n");
        return 1;
    }

    printf("=== ENTER STUDENT RECORDS ===\n");
    printf("How many students? ");
    scanf("%d", &n);

    struct Student s;

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s.name);
        printf("Roll Number: ");
        scanf("%d", &s.rollNumber);
        printf("Marks: ");
        scanf("%f", &s.marks);

        fprintf(file, "%s %d %.2f\n", s.name, s.rollNumber, s.marks);
    }
    fclose(file);

    printf("\n=== READING FROM FILE ===\n");
    file = fopen("students.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\n%-15s %-12s %s\n", "Name", "Roll Number", "Marks");
    printf("---------------------------------\n");

    int recordCount = 0;
    while (fscanf(file, "%s %d %f", s.name, &s.rollNumber, &s.marks) != EOF)
    {
        printf("%-15s %-12d %.2f\n", s.name, s.rollNumber, s.marks);
        recordCount++;
    }

    fclose(file);
    printf("\nTotal records read: %d\n", recordCount);

    return 0;
}
