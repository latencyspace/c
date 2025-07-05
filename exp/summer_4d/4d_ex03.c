#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c;
    double ans;

    printf("계수 a를 입력하세요: ");
    scanf("%lf", &a);
    printf("계수 b를 입력하세요: ");
    scanf("%lf", &b);
    printf("계수 c를 입력하세요: ");
    scanf("%lf", &c);

    if (a == 0)
    {
        if (b != 0)
        {
            printf("이차방정식의 실근은 %.2f 입니다.\n", -c / b);
        }

        else
        {
            printf("방정식의 해가 없습니다.\n");
        }
    }

    else
    {
        ans = (b * b) - (4 * a * c);

        if (ans > 0)
        {
            double r1 = (-b + sqrt(ans)) / (2 * a);
            double r2 = (-b - sqrt(ans)) / (2 * a);
            printf("이차방정식의 실근은 %.2f, %.2f 입니다.\n", r1, r2);
        }

        else if (ans == 0)
        {
            double r = -b / (2 * a);
            printf("이차방정식의 중근은 %.2f 입니다.\n", r);
        }

        else
        {
            printf("실근이 존재하지 않습니다.\n");
        }
    }

    return 0;
}