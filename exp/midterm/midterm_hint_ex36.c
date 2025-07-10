#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 문제에서 제시된 함수 원형
void print_transport_chart(int expenses[], int size);

int main(void) {
    // 1. 12개월의 교통비를 임의의 값으로 배열에 저장하여 초기화
    int monthly_expenses[12] = {
        20000, 30000, 25000, 32000, 28000, 40000,
        22000, 26000, 30000, 31000, 35000, 27000
    };
    // 배열의 크기를 하드코딩(12)하는 대신, sizeof 연산으로 자동 계산
    int size = sizeof(monthly_expenses) / sizeof(monthly_expenses[0]);

    // 2. 그래프 출력 함수를 호출
    print_transport_chart(monthly_expenses, size);

    return 0;
}

/**
 * @brief 12개월 교통비 배열을 받아 막대 그래프를 출력하는 함수
 * @param expenses 교통비가 저장된 정수형 배열
 * @param size 배열의 크기
 */
void print_transport_chart(int expenses[], int size) {
    int i, j;

    // for문을 사용하여 0월(1월)부터 11월(12월)까지 순회
    for (i = 0; i < size; i++) {
        // 월과 금액을 먼저 출력. 정렬을 위해 %2d(2칸), %5d(5칸) 형식 지정자 사용
        printf("%2d월: (%5d원) ", i + 1, expenses[i]);

        // 출력할 '#'의 개수를 계산 (교통비 / 5000)
        // 정수 나눗셈의 결과로 소수점 이하는 자동 버림 처리됨
        int num_hashes = expenses[i] / 5000;

        // 계산된 개수만큼 '#' 문자를 반복해서 출력
        for (j = 0; j < num_hashes; j++) {
            printf("#");
        }

        // 한 달의 출력이 끝나면 다음 줄로 이동
        printf("\n");
    }
}