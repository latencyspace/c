#include <stdio.h>

int main(void)
{
    int i = 0;
    int sum = 0;

    while (i <= 100)
    {
        i++;

        if (i % 3 != 0)
        {
            continue;
        }
        sum += i;
        if (sum > 100)
        {
            printf("�հ谡 100�� �Ѿ� ����˴ϴ�.");
            break;
        }

        printf("3�� ����� �հ�: %d %d\n", i, sum);
    }
    return 0;
}