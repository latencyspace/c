#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer(void)
{
    int num;

    printf("정수 입력: ");
    scanf("%d", &num);

    return num;
}

int main(void)
{
    int value;

    value = get_integer();
    printf("입력받은 정수: %d\n", value);
    return 0;
}