#include <stdio.h>

int main(void) {
	/*
	printf("%3c\n", '*');
	printf("%4s\n", "***");
	printf("%5s\n", "**C**");
	printf("%4s\n", "***");
	printf("%3c\n", '*');
	*/

    int i, j;
    int size = 5; // ������ ��ü ����(�� ��)
    int middle = size / 2; // �߰� ���� �ε��� (0, 1, '2', 3, 4)

    // �� ���� ����� �ܺ� for��
    for (i = 0; i < size; i++) {
        // 1. �ʿ��� ���� �� ���
        int distance_from_middle = abs(i - middle); // �߰� �ٷκ����� �Ÿ�
        int num_stars = size - 2 * distance_from_middle;
        int num_spaces = (size - num_stars) / 2;

        // 2. ���� ���� ���
        for (j = 0; j < num_spaces; j++) {
            printf(" ");
        }

        // 3. �� �Ǵ� 'C'�� ���Ե� ���ڿ� ���
        if (i == middle) { // �߰� ���� ���
            printf("**C**");
        }
        else { // �� ���� ���� ���
            for (j = 0; j < num_stars; j++) {
                printf("*");
            }
        }

        // 4. �� �� ����� �������Ƿ� �ٹٲ�
        printf("\n");
    }

    return 0;
}