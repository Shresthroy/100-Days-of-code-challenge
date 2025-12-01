/*
Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum Operation
{
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    char operation[20];
    int num1, num2;
    int result;

    printf("Simple Calculator\n");
    printf("=================\n");
    printf("Available operations: ADD, SUBTRACT, MULTIPLY\n");
    printf("Enter operation and two numbers (eg, ADD 10 20): ");

    scanf("%s %d %d", operation, &num1, &num2);

    for (int i = 0; operation[i]; i++)
    {
        operation[i] = toupper(operation[i]);
    }

    enum Operation op;

    if (strcmp(operation, "ADD") == 0)
    {
        op = ADD;
    }
    else if (strcmp(operation, "SUBTRACT") == 0)
    {
        op = SUBTRACT;
    }
    else if (strcmp(operation, "MULTIPLY") == 0)
    {
        op = MULTIPLY;
    }
    else
    {
        printf("Error: Invalid operation! Use ADD, SUBTRACT, or MULTIPLY.\n");
        return 1;
    }

    switch (op)
    {
    case ADD:
        result = num1 + num2;
        printf("%d + %d = %d\n", num1, num2, result);
        break;
    case SUBTRACT:
        result = num1 - num2;
        printf("%d - %d = %d\n", num1, num2, result);
        break;
    case MULTIPLY:
        result = num1 * num2;
        printf("%d * %d = %d\n", num1, num2, result);
        break;
    }

    return 0;
}