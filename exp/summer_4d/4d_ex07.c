#include <stdio.h>

int main(void)
{
    char s = '*';

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6 - i; j++)
        {
            printf("%c", s);
        }
        printf("\n");
    }
}