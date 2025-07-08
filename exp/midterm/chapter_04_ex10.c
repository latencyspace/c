#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    // ��ȣ ���� 4����Ʈ(32��Ʈ) ������ ���� ����
    unsigned int data;
    int i;

    printf("16������ �����͸� �Է��ϼ���: ");
    scanf("%x", &data);

    // 4���� ����Ʈ�� ���������� ������� �����Ͽ� ���
    for (i = 0; i < 4; i++) {
        // 1. �����͸� ���������� i * 8 ��Ʈ��ŭ �̵� (0, 8, 16, 24��Ʈ)
        // 2. 0xFF ����ũ�� & ������ �Ͽ� ������ 1����Ʈ�� ����
        unsigned int byte = (data >> (i * 8)) & 0xFF;

        printf("byte %d : %x\n", i, byte);
    }

    return 0;
}