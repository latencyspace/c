#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int* arr = NULL;
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

    printf("역순 배열 출력: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}