#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int price;

    printf("연간 이용금액>> ");
    scanf("%d", &price);

    if (price >= 150000)
    {
        if (price < 500000)
        {
            printf("회원님은 VIP 고객입니다.\n");
        }
        else
        {
            printf("회원님은 VVIP 고객입니다.\n");
        }
    }
    else
    {
        printf("회원님은 일반 고객입니다.\n");
    }

    return 0;
}