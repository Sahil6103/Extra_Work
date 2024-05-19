#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    printf("\nAddition is: %d", a + b);
    printf("\nSubtraction is: %d", a - b);
    printf("\nMultiplication is: %d", a * b);
    printf("\nDivision is: %.1f", (float)a / (float)b);
    printf("\nModulo is: %d", a % b);
}