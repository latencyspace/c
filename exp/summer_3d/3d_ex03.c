#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int score1, score2;

    printf("점수1과 점수2를 입력해주세요: ");
    scanf("%d %d", &score1, &score2);

    if (score1 >= 60 && score2 >= 60)
    {
        printf("시험 합격!");
    }

    return 0;
}