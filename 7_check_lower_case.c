#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);

    if (ch <= 122 && ch >= 97)
    {
        printf("The character is in Lower case\n");
    }
    else
    {
        printf("The character is in Upper case\n");
    }

    return 0;
}