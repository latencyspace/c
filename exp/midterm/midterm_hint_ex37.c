#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���� 1: ��� ���� ũ�⸦ ��ũ�� ����� ����
#define R_SIZE 5 // Row Size (�л� ��)
#define C_SIZE 3 // Column Size (���� ��)

int main(void) {
    // 1. �迭 ����
    int scores[R_SIZE][C_SIZE];         // 5x3 ũ���� 2���� ���� �迭
    double student_avg[R_SIZE];         // �л� 5���� ����� ������ 1���� �迭
    double subject_avg[C_SIZE] = { 0.0 }; // ���� 3���� ����� ������ 1���� �迭 (0.0���� �ʱ�ȭ)

    int i, j; // �ݺ����� ���� ����

    // 2. 5�� �л��� 3���� ������ �Է¹޾� 2���� �迭�� ����
    for (i = 0; i < R_SIZE; i++) {
        printf("%d��° �л��� ������ �Է��Ͻÿ�>> ", i + 1);
        scanf("%d %d %d", &scores[i][0], &scores[i][1], &scores[i][2]);
    }
    printf("\n");

    // 3-1. �л��� ��� ��� �� ����
    for (i = 0; i < R_SIZE; i++) {
        int sum = 0; // �� �л��� ���� �հ踦 ������ ���� (�� �л����� 0���� �ʱ�ȭ)
        for (j = 0; j < C_SIZE; j++) {
            sum += scores[i][j];
        }
        // �л� ����� ����Ͽ� student_avg �迭�� ����
        student_avg[i] = (double)sum / C_SIZE;
    }

    // 3-2. ���� ��� ��� �� ����
    for (j = 0; j < C_SIZE; j++) {
        int sum = 0; // �� ������ ���� �հ踦 ������ ���� (�� ���񸶴� 0���� �ʱ�ȭ)
        for (i = 0; i < R_SIZE; i++) {
            sum += scores[i][j];
        }
        // ���� ����� ����Ͽ� subject_avg �迭�� ����
        subject_avg[j] = (double)sum / R_SIZE;
    }

    // 4-1. �л��� ��� ���
    printf("======�л��� ��� ���======\n");
    for (i = 0; i < R_SIZE; i++) {
        printf("%d��° �л��� ��� : %.2f\n", i + 1, student_avg[i]);
    }
    printf("\n");

    // 4-2. ���� ��� ���
    printf("======���� ��� ���======\n");
    for (j = 0; j < C_SIZE; j++) {
        printf("%d��° ������ ��� : %.2f\n", j + 1, subject_avg[j]);
    }

    return 0;
}