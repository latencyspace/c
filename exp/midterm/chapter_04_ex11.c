#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    // R, G, B ���� �Է¹��� ������ ����
    int r, g, b;
    // ���� 32��Ʈ RGB ������ ������ ��ȣ ���� ������ ����
    unsigned int rgb_color;

    printf("red? ");
    scanf("%d", &r);
    printf("green? ");
    scanf("%d", &g);
    printf("blue? ");
    scanf("%d", &b);

    // �� ���� ���� �ùٸ� ��ġ�� ��Ʈ �̵���Ų �� OR �������� ��ħ
    // �� ���� '& 0xFF'�� �����Ͽ� 8��Ʈ ������ ����� ���� ó��
    // (��: 256 & 0xFF -> 0)
    rgb_color = (r & 0xFF) | ((g & 0xFF) << 8) | ((b & 0xFF) << 16);

    // ���� RGB ������ 16���� �빮��(X)�� ���
    // %06X�� 6�ڸ��� ����ϵ�, ���ڸ��� 0���� ä���� �ǹ�
    printf("RGB ����: %06X\n", rgb_color);

    return 0;
}