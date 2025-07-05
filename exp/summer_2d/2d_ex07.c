#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    const double apt_square = 0.3025;
    double m_square, pyeong;

    printf("제곱미터 단위로 아파트 면적을 입력하세요: ");
    scanf("%lf", &m_square);

    pyeong = m_square * apt_square;

    printf("%.0f제곱미터 = %.4f평\n", m_square, pyeong);

    return 0;
}