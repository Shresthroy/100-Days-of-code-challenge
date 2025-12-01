/*
Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

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
    enum TrafficLight light;
    int choice;

    printf("Traffic Light System\n");
    printf("===================\n");
    printf("0. RED\n");
    printf("1. YELLOW\n");
    printf("2. GREEN\n");
    printf("Enter your choice (0-2): ");
    scanf("%d", &choice);

    if (choice < 0 || choice > 2)
    {
        printf("Invalid choice! Please enter 0, 1, or 2.\n");
        return 1;
    }

    light = (enum TrafficLight)choice;

    switch (light)
    {
    case RED:
        printf("Stop\n");
        break;
    case YELLOW:
        printf("Wait\n");
        break;
    case GREEN:
        printf("Go\n");
        break;
    default:
        printf("Invalid traffic light!\n");
    }

    return 0;
}