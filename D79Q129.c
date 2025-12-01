/*
Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/

#include <stdio.h>

int main()
{
    char filename[100];
    printf("Enter filename: ");
    scanf("%99s", filename);

    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error: Cannot open file '%s'\n", filename);
        return 1;
    }

    int number;
    int sum = 0;
    int count = 0;

    printf("Numbers found in file:\n");
    while (fscanf(file, "%d", &number) == 1)
    {
        printf("%d ", number);
        sum += number;
        count++;
    }

    fclose(file);

    printf("\n\n--- Results ---\n");
    printf("Total numbers: %d\n", count);
    printf("Sum = %d\n", sum);

    if (count > 0)
    {
        float average = (float)sum / count;
        printf("Average = %.2f\n", average);
    }
    else
    {
        printf("Average = 0.00 (no numbers found)\n");
    }

    return 0;
}