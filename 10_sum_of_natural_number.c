#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter the number to which you want sum of natural numbers :\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
        sum += i;
    }
    printf("Sum of first %d natural numbers are %d", n, sum);
    return 0;
}