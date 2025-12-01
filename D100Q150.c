/*
Q150: Use pointer to struct to modify and display data using -> operator.

Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

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
    struct Student student;
    struct Student *studentPtr;
    studentPtr = &student;

    printf("Enter student details using pointer:\n");
    printf("Name: ");
    scanf("%s", studentPtr->name);
    printf("Roll: ");
    scanf("%d", &studentPtr->roll_no);
    printf("Marks: ");
    scanf("%d", &studentPtr->marks);

    studentPtr->roll_no += 100;
    studentPtr->marks += 5;

    printf("Name: %s | Roll: %d | Marks: %d\n",
           studentPtr->name, studentPtr->roll_no, studentPtr->marks);

    return 0;
}