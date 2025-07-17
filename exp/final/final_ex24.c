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

    printf("�Է��� ������ ����: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("�޸� �Ҵ� ����\n");
        return 1;
    }

    printf("%d���� ������ �Է��ϼ���: ", n);
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

    printf("���: %d��\n", positive_count);
    printf("����: %d��\n", negative_count);
    printf("0: %d��\n", zero_count);

    free(arr);
    return 0;
}