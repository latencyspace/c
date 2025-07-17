#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int* arr = NULL;
    double sum = 0.0;
    double average = 0.0;
    int i;

    printf("�Է��� ������ ����: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("1�� �̻��� ������ �Է��ؾ� �մϴ�.\n");
        return 1;
    }

    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("�޸� �Ҵ� ����\n");
        return 1;
    }

    printf("%d���� ������ �Է��ϼ���: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = sum / n;
    printf("���: %.2f\n", average);

    printf("��� �̻��� ����: ");
    for (i = 0; i < n; i++) {
        if (arr[i] >= average) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    free(arr);
    return 0;
}