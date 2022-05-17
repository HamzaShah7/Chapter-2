#include<stdio.h>

void main()
{
    float Shirt1 = 423;
    float Shirt2 = 320;
    float Shirt3 = 270;
    float Shirt4 = 680;
    float Shirt5 = 520;
    float originalPrice,discount,priceAfterDiscount;
    originalPrice = Shirt1 + Shirt2 + Shirt3 + Shirt4 + Shirt5;
    discount = originalPrice * (15.0/100.0);
    priceAfterDiscount = originalPrice - discount;
    printf("Price after discount is : %f\n", priceAfterDiscount);
    printf("Amount of discount availed is : %f\n", discount);
}
