/*
Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/

#include <stdio.h>
#include <string.h>

enum Status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    char *statusNames[] = {
        "SUCCESS", "FAILURE", "TIMEOUT"};

    int choice;

    printf("Status Code System\n");
    printf("==================\n");
    printf("0. SUCCESS\n");
    printf("1. FAILURE\n");
    printf("2. TIMEOUT\n");
    printf("Enter status code (0-2): ");
    scanf("%d", &choice);

    if (choice < 0 || choice > 2)
    {
        printf("Invalid status code! Please enter 0, 1, or 2.\n");
        return 1;
    }

    enum Status status = (enum Status)choice;

    switch (status)
    {
    case SUCCESS:
        printf("Operation successful\n");
        break;
    case FAILURE:
        printf("Operation failed\n");
        break;
    case TIMEOUT:
        printf("Operation timed out\n");
        break;
    }

    return 0;
}