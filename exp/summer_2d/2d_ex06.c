#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define INCH_TO_CM 2.54

int main(void)
{
    double inch, cm;

    printf("inch 단위로 길이를 입력하세요: ");
    scanf("%lf", &inch); // %f는 float에 사용하고, %lf는 double에 사용한다.
    // 참고자료: https://luanaeun.tistory.com/230

    cm = inch * INCH_TO_CM;

    printf("%.0finch = %.2f\n", inch, cm);

    return 0;
}