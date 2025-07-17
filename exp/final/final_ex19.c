#include <stdio.h>

struct Product {
	char name[50];
	int price;
};

void printProduct(struct Product* p);

int main(void) {
	struct Product product1 = { "Keyboard", 50000 };

	printProduct(&product1);
}

void printProduct(struct Product* p) {
	printf("제품명: %s, 가격: %d", p->name, p->price);
}
