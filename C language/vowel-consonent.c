#include <stdio.h>
#include <ctype.h>

void main()
{
    char ch;
    printf("Enter Character : ");
    scanf("%c", &ch);

    if (isdigit(ch))
    {
        printf("number");
    }
    else if (isalpha(ch))
    {
        switch (ch)
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("vowels");
            break;

        default:
            printf("consonent");
            break;
        }
    }
}