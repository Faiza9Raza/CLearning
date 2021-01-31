#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, greater = 0;
    printf("Enter the first no.\n");
    scanf("%d", &n1);

    printf("Enter the second no.\n");
    scanf("%d", &n2);

    printf("Enter the third no.\n");
    scanf("%d", &n3);

    printf("Enter the fourth no.\n");
    scanf("%d", &n4);

    if (n1 > n2)
        greater = n1;
    else
    {
        greater = n2;
    }
    if (greater < n3)
        greater = n3;
    if (greater < n4)
        greater = n4;

    printf("The greatest number is %d\n", greater);
}