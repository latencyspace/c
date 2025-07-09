#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int min, fee = 0;

    // 알고리즘 복습
    do
    {
        printf("주차 시간(분)? ");
        scanf("%d", &min);

        if (min == 0)
        {
            fee = 0;
            printf("주차 요금: %d\n", fee);
            continue;
        }

        if (min <= 30)
        {
            fee = 2000;
            printf("주차 요금: %d\n", fee);
        }
        else if (min > 1440) {
            printf("주차 시간은 최대 24시간(1440분)을 넘을 수 없습니다.\n");

        }
        else
        {
            int ext_min = min - 30;
            fee = 2000;
            fee += ((ext_min + 9) / 10) * 1000;
            printf("주차 요금: %d\n", fee);
        }

        if (fee > 25000)
        {
            fee = 25000;
            printf("주차 요금: %d\n", fee);
        }
    } while (min != 0);

    return 0;
}