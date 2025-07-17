#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUM_PRODUCTS 5

struct Product {
    char name[50];
    int price;
    int sales;
    int stock;
};

void init_products(struct Product arr[], int size);
void print_products(const struct Product arr[], int size);
int calculate_total_sales(const struct Product arr[], int size);

int main(void) {
    struct Product products[NUM_PRODUCTS];
    long long total_sales = 0;

    init_products(products, NUM_PRODUCTS);
    print_products(products, NUM_PRODUCTS);

    total_sales = calculate_total_sales(products, NUM_PRODUCTS);
    printf("\n�� �����: %lld��\n", total_sales);

    return 0;
}

void init_products(struct Product arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("\n[%d��° ��ǰ ���� �Է�]\n", i + 1);
        printf("��ǰ �̸�: ");
        scanf("%s", arr[i].name);
        printf("����: ");
        scanf("%d", &arr[i].price);
        printf("�Ǹ� ����: ");
        scanf("%d", &arr[i].sales);
        printf("��� ����: ");
        scanf("%d", &arr[i].stock);
    }
}

void print_products(const struct Product arr[], int size) {
    printf("\n=== ��ǰ ���� ��� ===\n");
    for (int i = 0; i < size; i++) {
        printf("%s | ����: %d | �Ǹ�: %d | ���: %d\n", arr[i].name, arr[i].price, arr[i].sales, arr[i].stock);
    }
}

int calculate_total_sales(const struct Product arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += (int)arr[i].price * arr[i].sales;
    }
    return total;
}