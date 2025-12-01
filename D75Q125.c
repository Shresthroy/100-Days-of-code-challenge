/*
Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp = fopen("data.txt", "a");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    char buffer[256];
    printf("Enter text to append: ");
    fgets(buffer, sizeof(buffer), stdin);
    size_t len = strlen(buffer);
    if (len > 0 && buffer[len - 1] == '\n')
    {
        buffer[len - 1] = '\0';
    }
    fprintf(fp, "%s\n", buffer);
    fclose(fp);
    printf("File updated successfully with appended text.\n");
    return 0;
}