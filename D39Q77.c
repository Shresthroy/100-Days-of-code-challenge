/*
Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int r, c;
    if (scanf("%d %d", &r, &c) != 2)
        return 0;
    int n = r < c ? r : c;
    if (n == 0)
    {
        printf("True\n");
        return 0;
    }

    int *diag = malloc(n * sizeof(int));
    if (!diag)
        return 0;

    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            int x;
            if (scanf("%d", &x) != 1)
                x = 0;
            if (i == j && i < n)
                diag[i] = x;
        }
    }

    int distinct = 1;
    for (int i = 0; i < n && distinct; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (diag[i] == diag[j])
            {
                distinct = 0;
                break;
            }
        }
    }

    printf(distinct ? "True\n" : "False\n");
    free(diag);
    return 0;
}