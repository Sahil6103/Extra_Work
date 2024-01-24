// Accept monthly salary from the user and deduct 10% insurance premium, 10% loan installment find out of remaining salary.

#include <stdio.h>
void main()
{
    int salary, premium = 0, installment = 0, final_salary;
    printf("Enter Salary : ");
    scanf("%d", &salary);

    premium = salary * 10 / 100;
    printf("\nPremium : %d", premium);
    installment = salary * 10 / 100;
    printf("\nInstallment : %d", installment);

    final_salary = salary - (premium + installment);

    printf("\nFinal Salary : %d", final_salary);
}