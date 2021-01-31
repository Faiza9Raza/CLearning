#include <stdio.h>

int main()
{
    int sum = 0, n;
    printf("Enter the number to print its table and also the sum\n");
    scanf("%d", &n);

    printf("********TABLE OF %d********\n", n);
    for (int i = 1; i <= 10; i++)
    {
        sum += n * i;
        printf("%d x %d = %d\n", n, i, n * i);
    }
    printf("Sum of the table of %d = %d\n", n, sum);
    return 0;
}