#include <stdio.h>

int main(void)
{
    int i = 1;
    int sum = 0;

    while (i <= 1000)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        i++;
    }
    printf("°á°ú: %d\n", sum);

    return 0;
}