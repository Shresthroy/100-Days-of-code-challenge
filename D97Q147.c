/*
Q147: Store employee data in a binary file using fwrite() and read using fread().

Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/

#include <stdio.h>
#include <string.h>

struct Employee
{
    char name[50];
    int id;
    float salary;
    char department[30];
};

void writeEmployeeToFile()
{
    struct Employee emp;
    FILE *file;

    printf("=== Enter Employee Data ===\n");
    printf("Name: ");
    scanf("%s", emp.name);
    printf("ID: ");
    scanf("%d", &emp.id);
    printf("Salary: ");
    scanf("%f", &emp.salary);
    printf("Department: ");
    scanf("%s", emp.department);

    file = fopen("employees.dat", "ab");
    if (file == NULL)
    {
        printf("Error opening file for writing!\n");
        return;
    }

    fwrite(&emp, sizeof(struct Employee), 1, file);
    fclose(file);

    printf("Employee data stored successfully!\n\n");
}

void readEmployeesFromFile()
{
    struct Employee emp;
    FILE *file;
    int count = 0;

    printf("=== Reading Employee Data from File ===\n");

    file = fopen("employees.dat", "rb");
    if (file == NULL)
    {
        printf("No employee records found!\n");
        return;
    }

    while (fread(&emp, sizeof(struct Employee), 1, file) == 1)
    {
        printf("\nEmployee %d:\n", ++count);
        printf("Name: %s\n", emp.name);
        printf("ID: %d\n", emp.id);
        printf("Salary: %.2f\n", emp.salary);
        printf("Department: %s\n", emp.department);
    }

    fclose(file);

    if (count == 0)
    {
        printf("No records found!\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("Employee Management System\n");
        printf("1. Add Employee\n");
        printf("2. View All Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            writeEmployeeToFile();
            break;
        case 2:
            readEmployeesFromFile();
            break;
        case 3:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
        }
    } while (choice != 3);

    return 0;
}