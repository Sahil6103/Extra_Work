#include <stdio.h>
void main()
{
    int num;
    printf("enter a number : ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }

    // if user enters zero
    // if (num == 0)
    // {
    //     printf("zero");
    // }
    // else if (num % 2 == 0)
    // {
    //     printf("even");
    // }
    // else
    // {
    //     printf("odd");
    // }
}