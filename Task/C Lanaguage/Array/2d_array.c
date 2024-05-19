// 2d array
#include <stdio.h>
void main()
{
    int i, j, arr[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter Value of array[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}