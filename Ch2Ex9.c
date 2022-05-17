#include<stdio.h>

void main()
{
    char alpha;
    int steps;
    printf("Enter Character: ");
    scanf("%c",&alpha);
    printf("Enter Steps: ");
    scanf("%d", &steps);
    printf("New Character: %c" , alpha + steps);
}
