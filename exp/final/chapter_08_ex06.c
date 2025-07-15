/*
Chapter 08. Example 6
직사각형의 넓이와 둘레를 구하는 함수를 작성하시오.
이 함수를 이용해서 직사각형의 가로, 세로의 길이를 입력받아 넓이와 둘레를 구해서 출력하는 프로그램을 작성하시오.

실행 결과
가로? 100
세로? 200
넓이: 20000, 둘레: 600
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calc(int width, int height, int* area, int* perimeter);

int main(void) {
	int width, height;
	int area, perimeter;

	printf("가로? ");
	scanf("%d", &width);
	printf("세로? ");
	scanf("%d", &height);

	printf("\n");

	calc(width, height, &area, &perimeter); // area와 perimeter 변수의 주소를 함수에 전달한다.

	printf("넓이: %d, 둘레: %d", area, perimeter);

	return 0;
}

int calc(int width, int height, int* area, int* perimeter) {
	*area = width * height; // 포인터가 가리키는 곳에 넓이를 계산하여 저장한다.
	*perimeter = 2 * (width + height); // 포인터가 가리키는 곳에 둘레를 계산하여 저장한다.
}
