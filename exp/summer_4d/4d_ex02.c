#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char color;

    printf("��ȣ���� ���� �Է� (R, G, Y): ");
    scanf("%c", &color);

    switch (color)
    {
    case 'R':
    case 'r':
        printf("����!");
        break;

    case 'G':
    case 'g':
        printf("����!");
        break;

    case 'Y':
    case 'y':
        printf("����!");
        break;

    default:
        printf("�ٽ� �Է����ּ���.");
    }

    return 0;
}