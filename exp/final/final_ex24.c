#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int* arr = NULL;
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    int i;

    printf("입력할 정수의 개수: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("메모리 할당 오류\n");
        return 1;
    }

    printf("%d개의 정수를 입력하세요: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive_count++;
        }
        else if (arr[i] < 0) {
            negative_count++;
        }
        else {
            zero_count++;
        }
    }

    printf("양수: %d개\n", positive_count);
    printf("음수: %d개\n", negative_count);
    printf("0: %d개\n", zero_count);

    free(arr);
    return 0;
}