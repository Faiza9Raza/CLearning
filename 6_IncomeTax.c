#include <stdio.h>

int main()
{
    int income, tax = 0;

    printf("Please enter your annual income\n");
    scanf("%d", &income);

    if (income <= 250000)
    {
        printf("There will be no tax below 250000\n");
    }
    else if (income > 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000);
        printf("Tax to be submitted is %d\n", tax);
    }
    else if (income > 500000 && income <= 1000000)
    {
        tax = tax + 0.2 * (income - 500000);
        printf("Tax to be submitted is %d\n", tax);
    }
    else
    {
        tax = tax + 0.3 * (income - 1000000);
        printf("Tax to be submitted is %d\n", tax);
    }

    return 0;
}