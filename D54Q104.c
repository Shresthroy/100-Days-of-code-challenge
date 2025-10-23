/*
Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/

#include <stdio.h>

void findMajorityElement(int nums[], int n)
{
    int candidate = nums[0];
    int count = 1;

    for (int i = 1; i < n; i++)
    {
        if (count == 0)
        {
            candidate = nums[i];
            count = 1;
        }
        else if (nums[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == candidate)
        {
            count++;
        }
    }

    if (count > n / 2)
    {
        printf("%d\n", candidate);
    }
    else
    {
        printf("-1\n");
    }
}

int main()
{
    int nums[] = {2, 2, 1, 1, 1, 2, 2};
    int n = sizeof(nums) / sizeof(nums[0]);
    findMajorityElement(nums, n);
    return 0;
}