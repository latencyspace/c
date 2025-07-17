#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int* arr = NULL;
    double sum = 0.0;
    double average = 0.0;
    int i;

    printf("입력할 정수의 개수: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("1개 이상의 정수를 입력해야 합니다.\n");
        return 1;
    }

    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("메모리 할당 오류\n");
        return 1;
    }

    printf("%d개의 정수를 입력하세요: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = sum / n;
    printf("평균: %.2f\n", average);

    printf("평균 이상인 값들: ");
    for (i = 0; i < n; i++) {
        if (arr[i] >= average) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    free(arr);
    return 0;
}