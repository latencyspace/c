#include <stdio.h>

int main(void) {
	/*
	pi의 변수형을 float으로 지정하면 %.8f 실행 시 pi = 3.14159274와 같이 출력된다.
	원래의 값을 출력하기 위해서는 변수형으로 double을 사용해야 한다.
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