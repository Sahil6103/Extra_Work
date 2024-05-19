// WAP to count length of the function without using inbuilt function

#include <stdio.h>
void main()
{
    char str[20];
    int i, len = 0;
    printf("Enter String : ");
    scanf("%s", &str);

    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    printf("Length of String : %d", len);
}