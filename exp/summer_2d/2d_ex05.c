#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num1 = 0, num2 = 0, num3 = 0;
    int sum;
    double avg;

    printf("���� �Է��ϼ���: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    avg = sum / 3.0; // 3���� ������ �Ǹ� ���������� ������ ������ �Ҽ����� �������� �ȴ�.
    printf("��: %d\n", sum);
    printf("���: %f\n", avg);

    return 0;
}