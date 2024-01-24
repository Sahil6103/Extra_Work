/*
 *
 * * *
 * * * * *
 * * * * * * *
 * * * * *
 * * *
 *
 */

#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 4; j >= i; j--)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (j = 2; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 2; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("  ");
        }
        for (j = i; j <= 4; j++)
        {
            printf("* ");
        }
        for (j = 3; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}