#include <stdio.h>

void increase(int* n) {
	(*n)++;
	// *n++;와 같이 괄호를 사용하지 않으면 포인터의 주소의 값을 증가시키게 된다.
}

int main(void) {
	int num = 10;

	printf("increase 함수 호출 전: %d\n", num);

	increase(&num);
	printf("increase 함수 호출 후: %d\n", num);

	return 0;
}