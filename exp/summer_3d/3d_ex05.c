#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b;

    printf("�� ���� ������ �Է����ּ���: ");
    scanf("%d %d", &a, &b);

    if (a - b > 0)
    {
        printf("���� a�� Ů�ϴ�.");
    }
    else if (a - b < 0)
    {
        printf("���� b�� Ů�ϴ�.");
    }
    else
    {
        printf("���� ���� �Է��߽��ϴ�.");
    }

    return 0;
}