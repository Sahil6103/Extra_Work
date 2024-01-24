// Write a C program to check whether a triangle can be formed with the given values for the angles.

#include <stdio.h>
void main()
{
    int side1, side2, side3, total;
    printf("Enter Size of side 1 : ");
    scanf("%d", &side1);

    printf("Enter size of side 2 : ");
    scanf("%d", &side2);

    printf("Enter size of side 3 : ");
    scanf("%d", &side3);

    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
    {
        printf("Triangle can be formed");
    }
    else
    {
        printf("Triangle can not be formed");
    }
}