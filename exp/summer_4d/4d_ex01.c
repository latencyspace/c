#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int luck;

    printf("���� ��ȣ�� �Է��ϼ���: ");
    scanf("%d", &luck);

    switch (luck)
    {
    case 1:
    case 4:
        printf("1���Դϴ�.");
        break;

    case 2:
    case 5:
    case 7:
        printf("2���Դϴ�.");
        break;

    case 3:
    case 6:
    case 8:
    case 9:
        printf("��÷�Դϴ�.");
        break;

    default:
        printf("1���� 9������ ������ �Է����ּ���.");
    }

    return 0;
}