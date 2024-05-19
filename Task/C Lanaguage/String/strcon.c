// WAP to concate two strings withour using inbuild function
#include <stdio.h>
void main()
{
    char str1[50], str2[50];
    int i, len = 0;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    for (i = 0; str1[i] != '\0'; i++)
    {
        len++;
    }

    for (i = 0; str2[i] != '\0'; i++)
    {
        str1[len + i] = str2[i];
    }
    str1[len + i] = '\0';
    printf("After Concatination : %s", str1);
}