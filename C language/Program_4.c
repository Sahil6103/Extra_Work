// Write a C program to accept two integers and check whether they are equal or not

#include <stdio.h>

void main()
{
    int a, b;
    printf("Enter value of A : ");
    scanf("%d", &a);
    printf("Enter value of B : ");
    scanf("%d", &b);

    if (a == b)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
}