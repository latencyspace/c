#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int month;

    printf("���� �Է��ϼ���: ");
    scanf("%d", &month);

    printf("%s\n", (month >= 1 && month <= 12) ? "�ùٸ� ��" : "�߸��� ��");

    return 0;
}