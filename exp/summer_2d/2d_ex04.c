#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int USD;
    int exchange_rate;
    double KRW;

    printf("USD? ");
    scanf("%d", &USD);

    printf("원/달러 환율? ");
    scanf("%d", &exchange_rate);

    KRW = USD * exchange_rate;
    printf("USD %d = KRW %.2f\n", USD, KRW);

    return 0;
}