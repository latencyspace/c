#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y, z, a, b;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &y);
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &z);
	
	a = (x > y) ? x : y;
	b = (a > z) ? a : z;

	printf("���� ū ���� %d�Դϴ�.\n", b);
	
	return 0;
}