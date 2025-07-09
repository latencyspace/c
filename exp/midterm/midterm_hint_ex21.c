// 복습

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define PRICE_BURGER 4000
#define PRICE_COKE   1500
#define PRICE_FRIES  2000
#define PRICE_SET    6500

int main(void) {
	int num_burger, num_fries, num_coke;

	printf("[햄버거 4000원, 감자튀김 2000원, 콜라 1500원, 세트 6500원]\n");
	printf("햄버거 개수? ");
	scanf("%d", &num_burger);
	printf("감자튀김 개수? ");
	scanf("%d", &num_fries);
	printf("콜라 개수? ");
	scanf("%d", &num_coke);

	int num_sets;
	int rem_burger, rem_fries, rem_coke; // 세트 구성 후 남은 단품 개수
	int total_price = 0;
	
    num_sets = num_burger;
    if (num_coke < num_sets) {
        num_sets = num_coke;
    }
    if (num_fries < num_sets) {
        num_sets = num_fries;
    }

    // 세트를 구성하고 남은 단품 개수 계산
    rem_burger = num_burger - num_sets;
    rem_coke = num_coke - num_sets;
    rem_fries = num_fries - num_sets;

    // 영수증 출력
    printf("%-10s\t%s\t%s\t%s\n", "상품명", "단가", "수량", "금액");

    // 세트 메뉴 계산 및 출력
    if (num_sets > 0) {
        int price = num_sets * PRICE_SET;
        printf("%-10s\t%d\t%d\t%d\n", "세트", PRICE_SET, num_sets, price);
        total_price += price;
    }
    // 남은 햄버거 계산 및 출력
    if (rem_burger > 0) {
        int price = rem_burger * PRICE_BURGER;
        printf("%-10s\t%d\t%d\t%d\n", "햄버거", PRICE_BURGER, rem_burger, price);
        total_price += price;
    }
    // 남은 감자튀김 계산 및 출력
    if (rem_fries > 0) {
        int price = rem_fries * PRICE_FRIES;
        printf("%-10s\t%d\t%d\t%d\n", "감자튀김", PRICE_FRIES, rem_fries, price);
        total_price += price;
    }
    // 남은 콜라 계산 및 출력
    if (rem_coke > 0) {
        int price = rem_coke * PRICE_COKE;
        printf("%-10s\t%d\t%d\t%d\n", "콜라", PRICE_COKE, rem_coke, price);
        total_price += price;
    }

    printf("--------------------------------------\n");
    printf("합계\t\t\t\t%d\n", total_price);

    return 0;
}