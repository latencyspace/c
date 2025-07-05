#include <stdio.h>

int main(void)
{
    int i = 0;
    int sum = 0;

    while (i <= 100)
    {
        i++;

        if (i % 3 != 0)
        {
            continue;
        }
        sum += i;
        if (sum > 100)
        {
            printf("합계가 100이 넘어 종료됩니다.");
            break;
        }

        printf("3의 배수와 합계: %d %d\n", i, sum);
    }
    return 0;
}