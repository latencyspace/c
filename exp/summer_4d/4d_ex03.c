#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c;
    double ans;

    printf("��� a�� �Է��ϼ���: ");
    scanf("%lf", &a);
    printf("��� b�� �Է��ϼ���: ");
    scanf("%lf", &b);
    printf("��� c�� �Է��ϼ���: ");
    scanf("%lf", &c);

    if (a == 0)
    {
        if (b != 0)
        {
            printf("������������ �Ǳ��� %.2f �Դϴ�.\n", -c / b);
        }

        else
        {
            printf("�������� �ذ� �����ϴ�.\n");
        }
    }

    else
    {
        ans = (b * b) - (4 * a * c);

        if (ans > 0)
        {
            double r1 = (-b + sqrt(ans)) / (2 * a);
            double r2 = (-b - sqrt(ans)) / (2 * a);
            printf("������������ �Ǳ��� %.2f, %.2f �Դϴ�.\n", r1, r2);
        }

        else if (ans == 0)
        {
            double r = -b / (2 * a);
            printf("������������ �߱��� %.2f �Դϴ�.\n", r);
        }

        else
        {
            printf("�Ǳ��� �������� �ʽ��ϴ�.\n");
        }
    }

    return 0;
}