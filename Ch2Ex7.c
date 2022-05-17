#include<stdio.h>

void main()
{
    int number, first, last, sum;
    printf("Enter five digit number: ");
    scanf("%d",&number);
    first = number/10000;
    last = number%10;
    sum = first + last;
    printf("The sum of first and last digit is: %d" , sum);
}
