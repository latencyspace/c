#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int input = 0;
    int sum = 0;

    while (1)
    {
        printf("정수를 입력하세요: ");
        scanf("%d", &input);

        if (input == 0)
        {
            break;
        }
        sum += input;
    }
    printf("누적 값: %d", sum);

    return 0;
}