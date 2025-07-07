#include <stdio.h>

int main(void) {
	/*
	pi�� �������� float���� �����ϸ� %.8f ���� �� pi = 3.14159274�� ���� ��µȴ�.
	������ ���� ����ϱ� ���ؼ��� ���������� double�� ����ؾ� �Ѵ�.
	*/
	// float pi = 3.14159265;
	double pi = 3.14159265;

	printf("pi = %.2f\n", pi);
	printf("pi = %.4f\n", pi);
	printf("pi = %.6f\n", pi);
	printf("pi = %.8f\n", pi);
	printf("pi = %.6e\n", pi);

	return 0;
}