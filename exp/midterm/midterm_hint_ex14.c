#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int min, fee = 0;

    // �˰��� ����
    do
    {
        printf("���� �ð�(��)? ");
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
            printf("���� ���: %d\n", fee);
        }
        else if (min > 1440) {
            printf("���� �ð��� �ִ� 24�ð�(1440��)�� ���� �� �����ϴ�.\n");

        }
        else
        {
            int ext_min = min - 30;
            fee = 2000;
            fee += ((ext_min + 9) / 10) * 1000;
            printf("���� ���: %d\n", fee);
        }

        if (fee > 25000)
        {
            fee = 25000;
            printf("���� ���: %d\n", fee);
        }
    } while (min != 0);

    return 0;
}