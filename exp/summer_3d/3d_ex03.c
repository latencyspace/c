#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int score1, score2;

    printf("����1�� ����2�� �Է����ּ���: ");
    scanf("%d %d", &score1, &score2);

    if (score1 >= 60 && score2 >= 60)
    {
        printf("���� �հ�!");
    }

    return 0;
}