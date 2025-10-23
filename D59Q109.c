/*
Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/

#include <stdio.h>

int maxSumSubarray(int arr[], int n, int k)
{
    if (k > n)
        return 0;

    int maxSum = 0;
    int windowSum = 0;

    for (int i = 0; i < k; i++)
        windowSum += arr[i];

    maxSum = windowSum;

    = for (int i = k; i < n; i++)
    {
        windowSum = windowSum + arr[i] - arr[i - k];
        if (windowSum > maxSum)
            maxSum = windowSum;
    }

    return maxSum;
}

int main()
{
    int arr[100], n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter subarray size k: ");
    scanf("%d", &k);

    printf("Maximum sum: %d\n", maxSumSubarray(arr, n, k));

    return 0;
}