#include <stdio.h>
#include <math.h>

void main()
{
    int a, b;
    printf("Enetr a : ");
    scanf("%d", &a);
    printf("Enetr B : ");
    scanf("%d", &b);
    if (a < b)
    {
        b = -(b);
        a -= b;
        printf("%d", a);
    }
    else
    {
        a = -(a);
        b -= a;
        printf("%d", b);
    }
}