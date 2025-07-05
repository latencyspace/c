#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int min, fee;

    do
    {
        printf("주차 시간을 분으로 입력하세요(0 입력 시 종료): ");
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
        }
        else
        {
            int ext_min = min - 30;
            fee = 2000;
            fee += ((ext_min + 9) / 10) * 1000;
        }

        if (fee > 25000)
        {
            fee = 25000;
        }

        printf("주차 요금: %d\n", fee);
    } while (min != 0);
    printf("종료\n");
    return 0;
}