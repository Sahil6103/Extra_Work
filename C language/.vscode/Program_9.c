// Write a program in C to calculate and print the electricity bill of a given customer. The customer ID, name, and unit consumed by the user should be captured from the keyboard to display the total amount to be paid to the customer. The charge are as follow :
//   unit       charge/unit
// upto 350  |  @1.20
// 350 and above but less than 600 | @1.50
// 600 and above but less than 800 | @1.80
// 800 and above | @2.00

#include <stdio.h>
void main()
{
    int cust_id;
    float charges, units;
    char cust_name[50];

    printf("Enter Customer ID : ");
    scanf("%d", &cust_id);

    printf("Enter Customer Name : ");
    scanf("%s", &cust_name);

    printf("Enter Units of consuption : ");
    scanf("%f", &units);

    if (units <= 350)
    {
        printf("Total bill : %.2f", units * 1.20);
    }
    else if (units >= 350 && charges < 600)
    {
        printf("Total bill : %.2f", units * 1.50);
    }
    else if (units >= 600 && charges < 800)
    {
        printf("Total bill : %.2f", units * 1.80);
    }
    else if (units >= 800)
    {
        printf("Total bill : %.2f", units * 2.00);
    }
}