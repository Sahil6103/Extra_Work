#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int choice, user_choice;
char str[20], str2[20], ch;
int string[20];
int i = 1;
int space = 0, digit = 0;
void operation()
{
    printf("Main Menu\n\t1.Reverse a string\n\t2.Concatenation\n\t3.Palindrome\n\t4.Copy a string\n\t5.Length of string\n\t6.Frequency of character in a string\n\t7.Find number of vowels and consonants\n\t8.Find number of blank space and digit");
    printf("\nPlease enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf(" Please enter a string : ");
        scanf("%s", &str);
        strrev(str);
        printf("The string you entered is : %s", str);
        printf("\n\n\tDo you want continue <Press 1 to continue>  :");
        scanf("%d", &user_choice);
        if (user_choice == 1)
        {
            operation();
        }
        else
        {
            printf("Invalid choice");
            exit(1);
        }
        break;

    case 2:
        printf("Please enter two string\n");
        scanf("\n%s", &str);
        scanf("\n%s", &str2);
        strcat(str, str2);
        printf("\nconcatenation of string is : %s", str);
        printf("\n\n\tDo you want continue <Press 1 to continue>  :");
        scanf("%d", &user_choice);
        if (user_choice == 1)
        {
            operation();
        }
        else
        {
            printf("Invalid choice");
            exit(1);
        }

        break;

        /*  case 3:
                printf("Please enter two string\n");
                scanf("%s",&str);

                printf("\n\n\tDo you want continue <Press 1 to continue>  :");
                scanf("%d",&user_choice);
                if(user_choice==1) {
                    operation();
                }    else {
                    printf("Invalid choice");
                    exit(1);
                }
                break;*/

    case 4:
        printf("\nPlease enter the string : ");
        scanf("%s", &str);
        strcpy(str2, str);
        printf("%s", str2);
        printf("\n\n\tDo you want continue <Press 1 to continue>  :");
        scanf("%d", &user_choice);
        if (user_choice == 1)
        {
            operation();
        }
        else
        {
            printf("Invalid choice");
            exit(1);
        }
        break;

    case 5:
        printf("\nPlease enter the string : ");
        scanf("%s", &str);
        int len = strlen(str);
        printf("The length of string you entered is : %s", str);
        printf("\n\n\tDo you want continue <Press 1 to continue>  :");
        scanf("%d", &user_choice);
        if (user_choice == 1)
        {
            operation();
        }
        else
        {
            printf("Invalid choice");
            exit(1);
        }
        break;

    case 6:
        printf("Palindrome\n");
        break;

    case 7:
        printf("\nPlease enter the character : ");
        scanf(" %c", &ch);
        switch (ch)
        {
        case 'a':
        case 'A':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        case 'e':
        case 'E':
            printf("%c is vowel.\n", ch);
            break;

        default:
            printf("%c is consonent.\n", ch);
            break;
        }
        printf("\n\n\tDo you want continue <Press 1 to continue>  :");
        scanf("%d", &user_choice);
        if (user_choice == 1)
        {
            operation();
        }
        else
        {
            printf("Invalid choice");
            exit(1);
        }
        break;

    default:
        printf("Invalid choice\n");
        break;
    }
}
void main()
{

    do
    {
        if (i == 1)
        {
            operation();
        }

    } while (i != 0);
}
