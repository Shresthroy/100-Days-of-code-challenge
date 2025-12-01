/*
Q146: Create Employee structure with nested Date structure for joining date and print details.

Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/

#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    char name[50];
    int id;
    struct Date joining_date;
};

int main()
{
    struct Employee emp;

    printf("Enter employee details:\n");
    printf("Name: ");
    scanf("%s", emp.name);
    printf("ID: ");
    scanf("%d", &emp.id);
    printf("Joining Date (DD MM YYYY): ");
    scanf("%d %d %d", &emp.joining_date.day,
          &emp.joining_date.month,
          &emp.joining_date.year);

    printf("\nName: %s | ID: %d | Joining Date: %02d/%02d/%d\n",
           emp.name, emp.id,
           emp.joining_date.day,
           emp.joining_date.month,
           emp.joining_date.year);

    return 0;
}