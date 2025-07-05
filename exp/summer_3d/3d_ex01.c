#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int month;

    printf("월을 입력하세요: ");
    scanf("%d", &month);

    printf("%s\n", (month >= 1 && month <= 12) ? "올바른 값" : "잘못된 값");

    return 0;
}