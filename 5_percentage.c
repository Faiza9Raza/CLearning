#include <stdio.h>

int main()
{
    int physics, maths, chemistry, total;

    printf("Enter the marks obtained in physics\n");
    scanf("%d", &physics);

    printf("Enter the marks obtained in maths\n");
    scanf("%d", &maths);

    printf("Enter the marks obtained in chemistry\n");
    scanf("%d", &chemistry);

    total = (maths + physics + chemistry) / 3;

    if (total < 40 || maths < 33 || physics < 33 || chemistry < 33)
    {
        printf("Your percentage is %d and you are failed\n", total);
    }
    else
    {
        printf("Your percentage is %d and you are passed\n", total);
    }

    return 0;
}