#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    const double apt_square = 0.3025;
    double m_square, pyeong;

    printf("�������� ������ ����Ʈ ������ �Է��ϼ���: ");
    scanf("%lf", &m_square);

    pyeong = m_square * apt_square;

    printf("%.0f�������� = %.4f��\n", m_square, pyeong);

    return 0;
}