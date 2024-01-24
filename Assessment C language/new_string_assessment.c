#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int choice, len, i, freq = 0, space = 0, digit = 0, continue_choice, k = 1;
char str[50], str2[50], ch;

void operations()
{
    printf("\nMain operations\n\t1. Reverse a String\n\t2. String Concatination\n\t3. Palindrome\n\t4. Copy String\n\t5. Lenght of String\n\t6. Frequency of charcaters in String\n\t7. Vowels and Consonants\n\t8. Space and Digits");
    printf("\nPlease Enter Your Choice : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter a string : ");
        scanf("%s", &str);
        strrev(str);
        printf("%s", str);
        printf("\nDo you want to continue<Press 1 to continue> ");
        scanf("%d", &continue_choice);
        if (continue_choice == 1)
        {
            operations();
        }
        else
        {
            exit(0);
        }
        break;

    case 2:
        printf("Enter first string : ");
        scanf("%s", &str);
        printf("Enter second string : ");
        scanf("%s", &str2);
        strcat(str, str2);
        printf("%s", str);
        printf("\nDo you want to continue<Press 1 to continue> ");
        scanf("%d", &continue_choice);
        if (continue_choice == 1)
        {
            operations();
        }
        else
        {
            exit(0);
        }
        break;

    case 3:
        printf("Enter a string : ");
        scanf("%s", &str);
        strcpy(str2, str);
        strrev(str2);

        if (strcmp(str, str2) == 0)
        {
            printf("String is palindrome");
        }
        else
        {
            printf("String is not palindrome");
        }

        printf("\nDo you want to continue<Press 1 to continue> ");
        scanf("%d", &continue_choice);
        if (continue_choice == 1)
        {
            operations();
        }
        else
        {
            exit(0);
        }
        break;

    case 4:
        printf("Enter a string : ");
        scanf("%s", &str);
        strcpy(str2, str);
        printf("Copied String : %s", str2);
        printf("\nDo you want to continue<Press 1 to continue> ");
        scanf("%d", &continue_choice);
        if (continue_choice == 1)
        {
            operations();
        }
        else
        {
            exit(0);
        }
        break;

    case 5:
        printf("Enter a String : ");
        scanf("%s", str);
        len = strlen(str);
        printf("Lenght of String : %d", len);
        printf("\nDo you want to continue<Press 1 to continue> ");
        scanf("%d", &continue_choice);
        if (continue_choice == 1)
        {
            operations();
        }
        else
        {
            exit(0);
        }
        break;

    case 6:
        printf("Enter a String : ");
        scanf("%s", &str);
        printf("Enter a charcater to find frequency of that charcter : ");
        scanf("%s", &ch);

        for (i = 0; str[i] != '\0'; i++)
        {
            if (ch == str[i])
            {
                freq++;
            }
        }

        printf("Frequency of %c : %d", ch, freq);
        printf("\nDo you want to continue<Press 1 to continue> ");
        scanf("%d", &continue_choice);
        if (continue_choice == 1)
        {
            operations();
        }
        else
        {
            exit(0);
        }
        break;

    case 7:
        printf("Enter a character : ");
        scanf(" %c", &ch);

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
            printf("It's Vowel");
            break;

        default:
            printf("It's Consonant");
            break;
        }
        printf("\nDo you want to continue<Press 1 to continue> ");
        scanf("%d", &continue_choice);
        if (continue_choice == 1)
        {
            operations();
        }
        else
        {
            exit(0);
        }
        break;

    case 8:
        printf("Enter a string with space and digits : ");
        scanf("%s", &str);
        // gets(str);

        for (i = 0; str[i] != '\0'; i++)
        {
            if (str[i] >= '0' && str[i] <= '9')
            {
                digit++;
            }
            else if (str[i] == ' ')
            {
                space++;
            }
        }
        printf("\nspace : %d", space);
        printf("\nDigit : %d", digit);
        break;

    default:
        printf("\nInvalid Choice");
        exit(0);
        break;
    }
}

void main()
{

    do
    {
        if (k == 1)
        {
            operations();
        }

    } while (k != 0);
}