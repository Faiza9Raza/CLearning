#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the value of length\n");
    scanf("%d", &a);
    printf("Enter the value of breadth\n");
    scanf("%d", &b);
    printf(" The area of rectangle is %d\n ", 2 * (a + b));
    return 0;
}