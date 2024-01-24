// Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable

#include <stdio.h>
void main()
{
    int a, b, c;

    printf("Enter Value of A : ");
    scanf("%d", &a);
    printf("Enter Value of B : ");
    scanf("%d", &b);

    printf("Swap Using Third Variable : ");

    c = a;
    a = b;
    b = c;

    printf("\nValue of A : %d", a);
    printf("\nValue of B : %d", b);

    printf("\n\nSwap without third variable : ");

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\n\nVAlue of A : %d", a);
    printf("\nValue of B : %d", b);
}