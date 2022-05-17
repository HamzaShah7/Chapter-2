#include<stdio.h>

void main()
{
    float celsius,Fahrenheit;
    printf("Enter the temperature in celsius: ");
    scanf("%f",&celsius);
    Fahrenheit = ((9.0/5.0) * celsius) + 32;
    printf("Your temperature in fahrenheit is: %f",Fahrenheit);
}
