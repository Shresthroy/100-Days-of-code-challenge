/*
Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int matrix[100][100];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int sum = 0; sum < r + c - 1; sum++)
    {
        if (sum % 2 == 0)
        {
            for (int i = sum; i >= 0; i--)
            {
                if (i < r && (sum - i) < c)
                {
                    printf("%d ", matrix[i][sum - i]);
                }
            }
        }
        else
        {
            for (int i = 0; i <= sum; i++)
            {
                if (i < r && (sum - i) < c)
                {
                    printf("%d ", matrix[i][sum - i]);
                }
            }
        }
    }
    return 0;
}