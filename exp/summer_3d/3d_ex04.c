#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int price;

    printf("���� �̿�ݾ�>> ");
    scanf("%d", &price);

    if (price >= 150000)
    {
        if (price < 500000)
        {
            printf("ȸ������ VIP ���Դϴ�.\n");
        }
        else
        {
            printf("ȸ������ VVIP ���Դϴ�.\n");
        }
    }
    else
    {
        printf("ȸ������ �Ϲ� ���Դϴ�.\n");
    }

    return 0;
}