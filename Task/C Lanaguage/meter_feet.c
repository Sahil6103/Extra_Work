// take meter from the user and convert it into feet
#include <stdio.h>
void main()
{
    float meter, feet; // variables
    printf("Enter Meter: ");
    scanf("%f", &meter); // get value

    feet = meter * 3.28; // formula for conversion

    printf("Feet: %.2f", (float)feet);
}