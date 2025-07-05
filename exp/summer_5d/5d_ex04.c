#include <stdio.h>

int main(void)
{
    int i = 0;

    while (i <= 100)
    {
        i++;

        if (i % 2 == 0)
        {
            continue;
        }

        if (i > 50)
        {
            printf("홀수값이 50이 넘어 종료됩니다.");
            break;
        }

        printf("홀수값: %d\n", i);
    }
    return 0;
}