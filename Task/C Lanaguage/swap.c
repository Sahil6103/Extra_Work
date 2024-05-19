// WAP to swap values of two numbers without 3rd variable
#include <stdio.h>
void main()
{
    int a, b; // variables
    printf("Enter value of a: ");
    scanf("%d", &a); // get value
    printf("Enter value of b: ");
    scanf("%d", &b); // get value

    printf("\nBefore swap: \nValue of a is: %d \nVAlue of b is: %d", a, b); // before swap

    a = a + b; // 50 = 20+30
    b = a - b; // 20 = 50-30
    a = a - b; // 30 = 50-20

    printf("\n\nAfter swap: \nValue of a is: %d \nValue of b is: %d", a, b); // after swap
}