/*
Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/

#include <stdio.h>
#include <ctype.h>

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

    int vowels = 0, consonants = 0, total_chars = 0;
    char ch;

    printf("File content:\n");
    while ((ch = fgetc(file)) != EOF)
    {
        printf("%c", ch); // Display file content
        total_chars++;

        char lower_ch = tolower(ch);

        if (isalpha(ch))
        {
            if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' ||
                lower_ch == 'o' || lower_ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    fclose(file);

    printf("\n\n--- Statistics ---\n");
    printf("Total characters: %d\n", total_chars);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Non-alphabetic characters: %d\n", total_chars - vowels - consonants);

    return 0;
}