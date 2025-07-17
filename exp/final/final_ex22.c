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
    printf("\n총 매출액: %lld원\n", total_sales);

    return 0;
}

void init_products(struct Product arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("\n[%d번째 상품 정보 입력]\n", i + 1);
        printf("상품 이름: ");
        scanf("%s", arr[i].name);
        printf("가격: ");
        scanf("%d", &arr[i].price);
        printf("판매 수량: ");
        scanf("%d", &arr[i].sales);
        printf("재고 수량: ");
        scanf("%d", &arr[i].stock);
    }
}

void print_products(const struct Product arr[], int size) {
    printf("\n=== 상품 정보 출력 ===\n");
    for (int i = 0; i < size; i++) {
        printf("%s | 가격: %d | 판매: %d | 재고: %d\n", arr[i].name, arr[i].price, arr[i].sales, arr[i].stock);
    }
}

int calculate_total_sales(const struct Product arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += (int)arr[i].price * arr[i].sales;
    }
    return total;
}