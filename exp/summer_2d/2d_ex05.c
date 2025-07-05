#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num1 = 0, num2 = 0, num3 = 0;
    int sum;
    double avg;

    printf("값을 입력하세요: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    avg = sum / 3.0; // 3으로 나누게 되면 정수형으로 나누기 때문에 소수점이 버려지게 된다.
    printf("합: %d\n", sum);
    printf("평균: %f\n", avg);

    return 0;
}