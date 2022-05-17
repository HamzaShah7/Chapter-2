#include<stdio.h>

void main()
{
    int monthlyIncome, elctricity, gasBill, food;
    int monthlyExpense, yearlyExpense, monthlySaving, yearlySaving, averageSavingMonth, averageExpenseMonth;
    printf("Enter Monthly Income:");
    scanf("%d",&monthlyIncome);
    printf("Enter Electricity Bill:");
    scanf("%d",&elctricity);
    printf("Enter Gas Bill:");
    scanf("%d",&gasBill);
    printf("Enter Food Expense:");
    scanf("%d",&food);
    monthlyExpense = elctricity + gasBill + food;
    yearlyExpense = 12 * monthlyExpense;
    monthlySaving = monthlyIncome - monthlyExpense;
    yearlySaving = 12 * monthlySaving;
    averageSavingMonth = yearlySaving/12;
    averageExpenseMonth= yearlyExpense/12;
    printf("Monthly Expense is : %d\n", monthlyExpense);
    printf("Yearly Expense is : %d\n", yearlyExpense);
    printf("Monthly Saving is : %d\n", monthlySaving);
    printf("Yearly Saving is : %d\n",yearlySaving);
    printf("Average Monthly Saving is : %d\n",averageSavingMonth);
    printf("Average Monthly Expense is : %d\n",averageExpenseMonth);

}
