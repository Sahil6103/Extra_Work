// WAP to get 3 values and find minimum and maximum values from that value.
#include <stdio.h>
void main()
{
    int a, b, c; // variables
    printf("Enter Value of a: ");
    scanf("%d", &a); // get value
    printf("\nEnter Value of b: ");
    scanf("%d", &b); // get value
    printf("\nEnter Value of c: ");
    scanf("%d", &c); // get value

    if (a < b && a < c) // condition to find minimum value
    {
        printf("%d is a minimum value\n", a);
    }
    else if (b < a && b < c)
    {
        printf("%d is minimum value\n", b);
    }
    else
    {
        printf("%d is a minimum value\n", c);
    }

    if (a > b && a > c) // condition to find maximum value
    {
        printf("%d is maximum value\n", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is maximum value\n", b);
    }
    else
    {
        printf("%d is maximum value\n", c);
    }
}