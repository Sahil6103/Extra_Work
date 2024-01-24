#include <stdio.h>
int main()
{
    int n, i, m = 0, flag = 0;
    printf("Enter the number to check prime:");
    scanf("%d", &n);         /// 10
    m = n / 2;               // m = 10 / 2 = 5
    for (i = 2; i <= m; i++) // (2;2<=5;i++)
    {
        if (n % i == 0) // 10 % 2 == 0
        {
            printf("Number is not prime");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("Number is prime");
    return 0;
}