// WAP to get cel and convert it into fehrenhit
#include <stdio.h>
void main()
{
    int c, f; // variable
    printf("Enter Celsius: ");
    scanf("%d", &c); // get value

    f = c * (9 / 5) + 32; // formula to get fehrenhit

    printf("Fehrenhit: %d", f);
}