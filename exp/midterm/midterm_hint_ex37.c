#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 조건 1: 행과 열의 크기를 매크로 상수로 정의
#define R_SIZE 5 // Row Size (학생 수)
#define C_SIZE 3 // Column Size (과목 수)

int main(void) {
    // 1. 배열 선언
    int scores[R_SIZE][C_SIZE];         // 5x3 크기의 2차원 점수 배열
    double student_avg[R_SIZE];         // 학생 5명의 평균을 저장할 1차원 배열
    double subject_avg[C_SIZE] = { 0.0 }; // 과목 3개의 평균을 저장할 1차원 배열 (0.0으로 초기화)

    int i, j; // 반복문을 위한 변수

    // 2. 5명 학생의 3과목 점수를 입력받아 2차원 배열에 저장
    for (i = 0; i < R_SIZE; i++) {
        printf("%d번째 학생의 점수를 입력하시오>> ", i + 1);
        scanf("%d %d %d", &scores[i][0], &scores[i][1], &scores[i][2]);
    }
    printf("\n");

    // 3-1. 학생별 평균 계산 및 저장
    for (i = 0; i < R_SIZE; i++) {
        int sum = 0; // 한 학생의 점수 합계를 저장할 변수 (새 학생마다 0으로 초기화)
        for (j = 0; j < C_SIZE; j++) {
            sum += scores[i][j];
        }
        // 학생 평균을 계산하여 student_avg 배열에 저장
        student_avg[i] = (double)sum / C_SIZE;
    }

    // 3-2. 과목별 평균 계산 및 저장
    for (j = 0; j < C_SIZE; j++) {
        int sum = 0; // 한 과목의 점수 합계를 저장할 변수 (새 과목마다 0으로 초기화)
        for (i = 0; i < R_SIZE; i++) {
            sum += scores[i][j];
        }
        // 과목 평균을 계산하여 subject_avg 배열에 저장
        subject_avg[j] = (double)sum / R_SIZE;
    }

    // 4-1. 학생별 평균 출력
    printf("======학생별 평균 출력======\n");
    for (i = 0; i < R_SIZE; i++) {
        printf("%d번째 학생의 평균 : %.2f\n", i + 1, student_avg[i]);
    }
    printf("\n");

    // 4-2. 과목별 평균 출력
    printf("======과목별 평균 출력======\n");
    for (j = 0; j < C_SIZE; j++) {
        printf("%d번째 과목의 평균 : %.2f\n", j + 1, subject_avg[j]);
    }

    return 0;
}