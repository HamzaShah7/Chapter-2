#include<stdio.h>

void main()
{
    int radius;
    float area;
    printf("Enter the value of radius: ");
    scanf("%d", &radius);
    area = 3.14 * radius * radius;
    printf("Area of a circle is: %f", area);
}
