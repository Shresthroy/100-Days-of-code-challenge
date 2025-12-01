/*
Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;
    scanf("%d", &m);
    int *nums1 = (int *)malloc(m * sizeof(int));
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &nums1[i]);
    }
    scanf("%d", &n);
    int *nums2 = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums2[i]);
    }
    int *merged = (int *)malloc((m + n) * sizeof(int));
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (nums1[i] <= nums2[j])
        {
            merged[k++] = nums1[i++];
        }
        else
        {
            merged[k++] = nums2[j++];
        }
    }
    while (i < m)
    {
        merged[k++] = nums1[i++];
    }
    while (j < n)
    {
        merged[k++] = nums2[j++];
    }
    for (int p = 0; p < m + n; p++)
    {
        if (p > 0)
            printf(" ");
        printf("%d", merged[p]);
    }
    printf("\n");
    free(nums1);
    free(nums```c
#include <stdio.h>
#include <stdlib.h>

int main() {
        int size1, size2;
        scanf("%d", &size1);
        int *arr1 = (int *)malloc(size1 * sizeof(int));
        for (int idx = 0; idx < size1; idx++)
        {
            scanf("%d", &arr1[idx]);
        }
        scanf("%d", &size2);
        int *arr2 = (int *)malloc(size2 * sizeof(int));
        for (int idx = 0; idx < size2; idx++)
        {
            scanf("%d", &arr2[idx]);
        }
        int total = size1 + size2;
        int *result = (int *)malloc(total * sizeof(int));
        int p1 = 0, p2 = 0, pos = 0;
        while (p1 < size1 && p2 < size2)
        {
            if (arr1[p1] < arr2[p2])
            {
                result[pos] = arr1[p1];
                p1++;
            }
            else
            {
                result[pos] = arr2[p2];
                p2++;
            }
            pos++;
        }
        for (; p1 < size1; p1++)
        {
            result[pos++] = arr1[p1];
        }
        for (; p2 < size2; p2++)
        {
            result[pos++] = arr2[p2];
        }
        for (int idx = 0; idx < total; idx++)
        {
            if (idx != 0)
                printf(" ");
            printf("%d", result[idx]);
        }
        printf("\n");
        free(arr1);
        free(arr2);
        free(result);
        return 0;
}