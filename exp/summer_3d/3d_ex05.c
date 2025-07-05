#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b;

    printf("두 개의 정수를 입력해주세요: ");
    scanf("%d %d", &a, &b);

    if (a - b > 0)
    {
        printf("변수 a가 큽니다.");
    }
    else if (a - b < 0)
    {
        printf("변수 b가 큽니다.");
    }
    else
    {
        printf("같은 값을 입력했습니다.");
    }

    return 0;
}