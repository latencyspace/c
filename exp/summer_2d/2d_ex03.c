#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    float num1, num2;

    printf("½Ç¼ö 2°³? ");

    scanf("%f %f", &num1, &num2);

    printf("%f + %f = %f\n", num1, num2, num1 + num2);
    printf("%f - %f = %f\n", num1, num2, num1 - num2);

    return 0;
}