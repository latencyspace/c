#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int luck;

    printf("복권 번호를 입력하세요: ");
    scanf("%d", &luck);

    switch (luck)
    {
    case 1:
    case 4:
        printf("1등입니다.");
        break;

    case 2:
    case 5:
    case 7:
        printf("2등입니다.");
        break;

    case 3:
    case 6:
    case 8:
    case 9:
        printf("낙첨입니다.");
        break;

    default:
        printf("1부터 9까지의 정수를 입력해주세요.");
    }

    return 0;
}