#include<stdio.h>

void main()
{
    int payRatePerHour = 50;
    int overtimePayRate = 20;
    int workingHours, overtimeHours, basicSalary, overtimeSalary, totalSalary;
    printf("Enter your working hours: ");
    scanf("%d",&workingHours);
    printf("Enter your overtime hours: ");
    scanf("%d",&overtimeHours);
    basicSalary = payRatePerHour * workingHours;
    overtimeSalary = overtimePayRate * overtimeHours;
    totalSalary = basicSalary + overtimeSalary;
    printf("The total salary is : %d",totalSalary);
}
