#include <stdio.h>

int main(void)
{
    int i = 0;

    while (i <= 100)
    {
        i++;

        if (i % 2 == 0)
        {
            continue;
        }

        if (i > 50)
        {
            printf("Ȧ������ 50�� �Ѿ� ����˴ϴ�.");
            break;
        }

        printf("Ȧ����: %d\n", i);
    }
    return 0;
}