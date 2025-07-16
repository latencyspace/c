#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct content {
    char    title[40];
    int     price;
    double  rate;
};

int main(void) {
    struct content arr[] = {
        {"Avengers", 11000, 8.8}, {"Aquaman", 5500, 7.1}, {"Shazam!", 7700, 7.4},
        {"X-Men", 3300, 8.0},     {"Us", 8800, 7.1},      {"Inception", 2200, 8.7}
    };

    int size = sizeof(arr) / sizeof(arr[0]);
    double input_rate;
    int count = 0;
    
    printf("����? ");
    scanf("%lf", &input_rate);
    printf("\n�Է��� �������� ���� ��ȭ ���\n");

    for (int i = 0; i < size; i++) {
        if (arr[i].rate > input_rate) {
            printf("����: %s, ����: %d, ����: %.1lf\n", arr[i].title, arr[i].price, arr[i].rate);
            count++;
        }
    }

    if (count == 0) {
        printf("�˻��� ��ȭ�� �����ϴ�.");
    }

    return 0;
}
