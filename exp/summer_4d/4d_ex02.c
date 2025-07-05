#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char color;

    printf("신호등의 색깔 입력 (R, G, Y): ");
    scanf("%c", &color);

    switch (color)
    {
    case 'R':
    case 'r':
        printf("정지!");
        break;

    case 'G':
    case 'g':
        printf("진행!");
        break;

    case 'Y':
    case 'y':
        printf("주의!");
        break;

    default:
        printf("다시 입력해주세요.");
    }

    return 0;
}