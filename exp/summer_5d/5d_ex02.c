#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int min, fee;

    do
    {
        printf("���� �ð��� ������ �Է��ϼ���(0 �Է� �� ����): ");
        scanf("%d", &min);

        if (min == 0)
        {
            fee = 0;
            printf("���� ���: %d\n", fee);
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

        printf("���� ���: %d\n", fee);
    } while (min != 0);
    printf("����\n");
    return 0;
}