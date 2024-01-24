// Accept number of students from user. I need to give 5 apples to each student. How many apples are required?

#include <stdio.h>
void main()
{
    int stud, apples;
    printf("Enter Number of Students : ");
    scanf("%d", &stud);

    apples = stud * 5;

    printf("Total Apples : %d", apples);
}