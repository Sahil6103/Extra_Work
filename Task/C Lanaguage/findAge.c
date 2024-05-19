// WAP to get current age and print previous and next age
#include <stdio.h>
void main()
{
    int cur_age, prev_age, next_age;
    printf("Enter Your Current Age: ");
    scanf("%d", &cur_age);

    prev_age = --cur_age; // prev = 20 - 1 = 20
    next_age = ++cur_age; // next_age = 20 + 1 = 20
    next_age = ++cur_age; // next_age = 20 + 1 = 20

    printf("\nYour age was %d in last year", prev_age);
    printf("\nYour age will be %d in next year", next_age);
}