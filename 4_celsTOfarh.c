#include <stdio.h>

int main()
{
    float celsius, farh;
    printf("Enter the temprature in celsius\n");
    scanf("%f", &celsius);

    farh = (celsius * 9 / 5) + 32;
    printf("Temprature in fahrenhite is %f\n", farh);
    return 0;
}