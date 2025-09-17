/*
Q22: Write a program to find profit or loss percentage given cost price and selling price.

Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include <stdio.h>

int main()
{
    int cost, selling;
    printf("Enter the cost price and selling price: ");
    scanf("%d %d", &cost, &selling);
    if (selling > cost)
    {
        printf("Profit %.2f%%", ((selling - cost) * 100.0 / cost));
    }
    else if (selling < cost)
    {
        printf("Loss %.2f%%", ((cost - selling) * 100.0 / cost));
    }
    else
    {
        printf("No Profit No Loss");
    }
    return 0;
}
