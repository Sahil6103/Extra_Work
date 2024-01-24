/*
     1
    12  3
   123  45
  1234  567

   123 45
    12 3
     1
*/

#include <stdio.h>
void main()
{
    int i, j, k;
    for (i = 1; i <= 4; i++)
    {
        for (j = 4; j >= i; j--)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        for (k = 2; k <= i; k++)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
}