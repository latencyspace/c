#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x, y;
    int sum = 0;

    printf("��������: ");
    scanf("%d", &x);
    printf("��������: ");
    scanf("%d", &y);

    for (int i = x; i <= y; i++)
    {
        sum += i;
    }

    printf("Sum of %d to %d = %d", x, y, sum);

    return 0;
}