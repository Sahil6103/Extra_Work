/*
16 15 14 13
9 10 11 12
8 7 6 5
1 2 3 4
*/

#include <stdio.h>
void main()
{
    int i, j, k = 16;
    for (i = 4; i >= 1; i--)
    {
        for (j = 4; j >= 1; j--)
        {
            printf("%d ", k);
            k--;
        }
        printf("\n");
    }
}