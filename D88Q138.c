/*
Q138: Print all enum names and integer values using a loop.

Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/

#include <stdio.h>

enum TrafficLight
{
    RED,
    YELLOW,
    GREEN
};

int main()
{
    char *lightNames[] = {"RED", "YELLOW", "GREEN"};
    enum TrafficLight lights[] = {RED, YELLOW, GREEN};
    int count = sizeof(lights) / sizeof(lights[0]);

    printf("Traffic Light Enum Values:\n");
    printf("==========================\n");

    for (int i = 0; i < count; i++)
    {
        printf("%s=%d\n", lightNames[i], lights[i]);
    }

    return 0;
}