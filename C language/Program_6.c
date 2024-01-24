// Write a C program to determine eligibility for admission to a professional course based on the following criteria Eligibility Criteria :
// Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140
// -------------------------------------
// Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.

#include <stdio.h>
void main()
{
    int math, phy, chem, total = 0;

    printf("Enter Marks of maths : ");
    scanf("%d", &math);

    printf("Enter Marks of Physics : ");
    scanf("%d", &phy);

    printf("Enter Marks of Chemestry : ");
    scanf("%d", &chem);

    total = math + phy + chem;
    printf("Total : %d", total);

    if (math >= 65 && phy >= 55 && chem >= 50 && total >= 190 && math + phy >= 140)
    {
        printf("\nCandidate is eligible");
    }
    else
    {
        printf("\nCandidate is not eligible");
    }
}