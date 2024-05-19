// get dynamic value from user

#include <stdio.h>
int main()
{
    int arr[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter Number %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nYour Numbers :");

    for (i = 0; i < 5; i++)
    {
        printf("\nValue is: %d", arr[i]);
    }
    return 0;
}