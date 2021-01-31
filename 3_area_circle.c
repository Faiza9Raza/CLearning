#include <stdio.h>

int main()
{
    int r, h;
    float pi = 3.14;
    printf("Enter the value of radius\n");
    scanf("%d", &r);
    printf("Enter the value of height\n");
    scanf("%d", &h);
    printf(" The area of circle is %f\n ", pi * r * r);
    printf("        AND         \n");
    printf("The volume of cylinder of height %d is %f\n ", h, pi * r * r * h);
    return 0;
}