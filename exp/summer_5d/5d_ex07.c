#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer(void)
{
    int num;

    printf("���� �Է�: ");
    scanf("%d", &num);

    return num;
}

int main(void)
{
    int value;

    value = get_integer();
    printf("�Է¹��� ����: %d\n", value);
    return 0;
}