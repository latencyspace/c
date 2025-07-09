#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int temperature;

	printf("현재 온도는? ");
	scanf("%d", &temperature);

	printf("현재 온도는 %d 도 입니다.\n", temperature);
	printf("%s", (temperature <= 20) ? "춥습니다." : "따뜻합니다.");

	return 0;
}