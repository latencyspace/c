#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �������� ���õ� �Լ� ����
void print_transport_chart(int expenses[], int size);

int main(void) {
    // 1. 12������ ����� ������ ������ �迭�� �����Ͽ� �ʱ�ȭ
    int monthly_expenses[12] = {
        20000, 30000, 25000, 32000, 28000, 40000,
        22000, 26000, 30000, 31000, 35000, 27000
    };
    // �迭�� ũ�⸦ �ϵ��ڵ�(12)�ϴ� ���, sizeof �������� �ڵ� ���
    int size = sizeof(monthly_expenses) / sizeof(monthly_expenses[0]);

    // 2. �׷��� ��� �Լ��� ȣ��
    print_transport_chart(monthly_expenses, size);

    return 0;
}

/**
 * @brief 12���� ����� �迭�� �޾� ���� �׷����� ����ϴ� �Լ�
 * @param expenses ����� ����� ������ �迭
 * @param size �迭�� ũ��
 */
void print_transport_chart(int expenses[], int size) {
    int i, j;

    // for���� ����Ͽ� 0��(1��)���� 11��(12��)���� ��ȸ
    for (i = 0; i < size; i++) {
        // ���� �ݾ��� ���� ���. ������ ���� %2d(2ĭ), %5d(5ĭ) ���� ������ ���
        printf("%2d��: (%5d��) ", i + 1, expenses[i]);

        // ����� '#'�� ������ ��� (����� / 5000)
        // ���� �������� ����� �Ҽ��� ���ϴ� �ڵ� ���� ó����
        int num_hashes = expenses[i] / 5000;

        // ���� ������ŭ '#' ���ڸ� �ݺ��ؼ� ���
        for (j = 0; j < num_hashes; j++) {
            printf("#");
        }

        // �� ���� ����� ������ ���� �ٷ� �̵�
        printf("\n");
    }
}