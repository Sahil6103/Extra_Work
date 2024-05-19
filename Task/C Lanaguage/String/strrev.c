// WAP to get string from the user and reverse it without using built in fuction
#include <stdio.h>
#include <string.h>
void main()
{
    char str[10];
    int rev, a, len = 0, i;
    printf("Enter a value : ");
    scanf("%s", &str);
    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }

    for (i = len; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}