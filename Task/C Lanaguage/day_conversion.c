// WAP to get days from the user and convert it into week, months and years
#include <stdio.h>
void main()
{
    int days, weeks, months; // variables
    float years;             // variable
    printf("Enter no of days: ");
    scanf("%d", &days); // get value

    weeks = days / 7; // days to weeks
    printf("\nWeeks : %d", weeks);

    months = days / 30; // days to months
    printf("\nMonths: %d", months);

    years = (float)days / 365; // days to years
    printf("\nYears: %.1f", years);
}