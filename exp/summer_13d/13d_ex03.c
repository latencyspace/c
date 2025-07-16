#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct product {
	char name[30];
	int price;
	int stock;
};

// 매개변수로 구조체 포인터를 받도록 해야 한다.
void print_product(struct product *p);

int main(void) {
	struct product p1;

	printf("제품명? ");
	scanf("%s", p1.name);
	printf("가격? ");
	scanf("%d", &p1.price);
	printf("재고? ");
	scanf("%d", &p1.stock);

	printf("\n");

	// 함수에 p1이 아닌 주소 &p1을 전달해야 한다.
	print_product(&p1);

	return 0;
}

void print_product(struct product *p) {
	// 포인터로 멤버에 접근할 때 -> 를 사용한다.
	printf("[%s %d원 재고:%d]\n", p->name, p->price, p->stock);
}