#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define INCH_TO_CM 2.54

int main(void)
{
    double inch, cm;

    printf("inch ������ ���̸� �Է��ϼ���: ");
    scanf("%lf", &inch); // %f�� float�� ����ϰ�, %lf�� double�� ����Ѵ�.
    // �����ڷ�: https://luanaeun.tistory.com/230

    cm = inch * INCH_TO_CM;

    printf("%.0finch = %.2f\n", inch, cm);

    return 0;
}