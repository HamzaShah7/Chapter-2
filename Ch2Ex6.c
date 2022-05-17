#include<stdio.h>

void main()
{
    int a = 2;
    int b = 3;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);
}
