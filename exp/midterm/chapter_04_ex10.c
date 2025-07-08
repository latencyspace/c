#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    // 부호 없는 4바이트(32비트) 정수형 변수 선언
    unsigned int data;
    int i;

    printf("16진수로 데이터를 입력하세요: ");
    scanf("%x", &data);

    // 4개의 바이트를 최하위부터 순서대로 추출하여 출력
    for (i = 0; i < 4; i++) {
        // 1. 데이터를 오른쪽으로 i * 8 비트만큼 이동 (0, 8, 16, 24비트)
        // 2. 0xFF 마스크와 & 연산을 하여 최하위 1바이트만 추출
        unsigned int byte = (data >> (i * 8)) & 0xFF;

        printf("byte %d : %x\n", i, byte);
    }

    return 0;
}