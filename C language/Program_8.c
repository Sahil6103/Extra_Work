// Write a C program to calculate profit and loss on a transaction.

#include <stdio.h>

void main()
{
    int buy, sell;

    printf("Enter Buying price : ");
    scanf("%d", &buy);

    printf("Enter Selling price : ");
    scanf("%d", &sell);

    if (buy > sell)
    {
        printf("Loss");
    }
    else if (buy <= sell)
    {
        printf("Profit");
    }
}