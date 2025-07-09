#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    // R, G, B 값을 입력받을 정수형 변수
    int r, g, b;
    // 최종 32비트 RGB 색상을 저장할 부호 없는 정수형 변수
    unsigned int rgb_color;

    printf("red? ");
    scanf("%d", &r);
    printf("green? ");
    scanf("%d", &g);
    printf("blue? ");
    scanf("%d", &b);

    // 각 색상 값을 올바른 위치로 비트 이동시킨 후 OR 연산으로 합침
    // 각 값에 '& 0xFF'를 적용하여 8비트 범위를 벗어나는 값을 처리
    // (예: 256 & 0xFF -> 0)
    rgb_color = (r & 0xFF) | ((g & 0xFF) << 8) | ((b & 0xFF) << 16);

    // 최종 RGB 색상을 16진수 대문자(X)로 출력
    // %06X는 6자리로 출력하되, 빈자리는 0으로 채우라는 의미
    printf("RGB 색상: %06X\n", rgb_color);

    return 0;
}