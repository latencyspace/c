#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int input = 0;
    int sum = 0;

    while (1)
    {
        printf("������ �Է��ϼ���: ");
        scanf("%d", &input);

        if (input == 0)
        {
            break;
        }

        if (input < 0)
        {
            continue;
        }

        if (input > 0)
        {
            sum += input;
        }
    }
    printf("���� ��: %d", sum);

    return 0;
}